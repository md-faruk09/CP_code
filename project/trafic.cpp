#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <cstdlib>
#include <ctime>
using namespace std;

// ---------- Base Class: Vehicle (Abstraction) ----------
class Vehicle {
protected:
    string licensePlate;
    int speed;
    bool isEmergency;
    bool brokeSignal;

public:
    Vehicle(string plate, int s, bool emergency = false)
        : licensePlate(plate), speed(s), isEmergency(emergency), brokeSignal(false) {}

    virtual void move() {
        cout << "Vehicle (" << licensePlate << ") moving at " << speed << " km/h.\n";
    }

    bool checkEmergency() { return isEmergency; }
    string getPlate() { return licensePlate; }

    void setBrokeSignal(bool val) { brokeSignal = val; }
    bool didBreakSignal() { return brokeSignal; }

    virtual string getType() { return "Vehicle"; }

    virtual ~Vehicle() {}
};

// ---------- Derived Classes (Inheritance + Polymorphism) ----------
class Car : public Vehicle {
public:
    Car(string plate) : Vehicle(plate, 50) {}
    string getType() override { return "Car"; }
};

class Bus : public Vehicle {
public:
    Bus(string plate) : Vehicle(plate, 40) {}
    string getType() override { return "Bus"; }
};

class Bike : public Vehicle {
public:
    Bike(string plate) : Vehicle(plate, 60) {}
    string getType() override { return "Bike"; }
};

class Ambulance : public Vehicle {
public:
    Ambulance(string plate) : Vehicle(plate, 50, true) {}

    void move() override {
        speed *= 2;
        cout << "🚨 Ambulance (" << licensePlate << ") moving at " 
             << speed << " km/h with SIREN ON!\n";
    }
    string getType() override { return "Ambulance"; }
};

// ---------- FineSystem Class (Encapsulation) ----------
class FineSystem {
private:
    vector<pair<string, int>> fineRecords; // plate, amount

public:
    void issueFine(string plate, int amount) {
        fineRecords.push_back({plate, amount});
        cout << "[Fine Generated] Tk " << amount << " fine issued to " << plate << ".\n";
    }

    void showAllFines() {
        cout << "\n--- Fine Records ---\n";
        for (auto &record : fineRecords) {
            cout << record.first << " -> Tk " << record.second << "\n";
        }
    }
};

// ---------- Road Class ----------
class Road {
private:
    string name;
    vector<shared_ptr<Vehicle>> vehicles;
    string signalColor;
    int greenTime;

public:
    Road(string n) : name(n), signalColor("RED"), greenTime(20) {}

    void addVehicle(shared_ptr<Vehicle> v) {
        vehicles.push_back(v);
    }

    int vehicleCount() { return vehicles.size(); }

    string getName() { return name; }

    void setSignal(string color) { signalColor = color; }
    string getSignal() { return signalColor; }

    void adjustGreenTime() {
        if (vehicleCount() > 5) {
            greenTime = 30;
            cout << name << ": Density High! Green time extended to " << greenTime << "s.\n";
        } else if (vehicleCount() == 0) {
            greenTime = 10;
        } else {
            greenTime = 20;
        }
    }

    bool hasEmergencyVehicle() {
        for (auto &v : vehicles) {
            if (v->checkEmergency()) return true;
        }
        return false;
    }

    vector<shared_ptr<Vehicle>>& getVehicles() {
        return vehicles;
    }

    void clearVehicle(shared_ptr<Vehicle> v) {
        cout << "[Notification] " << v->getType() << " (Plate: " << v->getPlate() 
             << ") has cleared the junction.\n";
    }
};

// ---------- JunctionController Class (Main Controller) ----------
class JunctionController {
private:
    vector<shared_ptr<Road>> roads;
    FineSystem fineSystem;

public:
    void addRoad(shared_ptr<Road> r) {
        roads.push_back(r);
    }

    void runSimulation() {
        cout << "\n--- TRAFFIC SIMULATION RUNNING ---\n";

        for (auto &road : roads) {
            road->adjustGreenTime();

            if (road->hasEmergencyVehicle()) {
                road->setSignal("GREEN");
                cout << road->getName() << ": " << road->vehicleCount() 
                     << " vehicles waiting. Signal: GREEN (Emergency detected!)\n";
            } else if (road->vehicleCount() > 5) {
                road->setSignal("GREEN");
                cout << road->getName() << ": " << road->vehicleCount() 
                     << " vehicles waiting. Signal: GREEN (Density High!)\n";
            } else {
                road->setSignal("RED");
                cout << road->getName() << ": " << road->vehicleCount() 
                     << " vehicles waiting. Signal: RED\n";
            }
        }

        cout << "\n--- Vehicle Movement & Violation Check ---\n";
        for (auto &road : roads) {
            for (auto &v : road->getVehicles()) {
                if (road->getSignal() == "GREEN" || v->checkEmergency()) {
                    v->move();
                    road->clearVehicle(v);
                } else {
                    // Random chance vehicle breaks red signal
                    if (rand() % 5 == 0) {
                        v->setBrokeSignal(true);
                        cout << "[Alert] " << v->getType() << " (Plate: " << v->getPlate() 
                             << ") broke the RED signal on " << road->getName() << "!\n";
                        fineSystem.issueFine(v->getPlate(), 500);
                    } else {
                        cout << v->getType() << " (" << v->getPlate() << ") waiting at RED.\n";
                    }
                }
            }
        }

        fineSystem.showAllFines();
    }
};

// ---------- Main Function ----------
int main() {
    srand(time(0));

    auto north = make_shared<Road>("North Road");
    auto south = make_shared<Road>("South Road");
    auto east = make_shared<Road>("East Road");
    auto west = make_shared<Road>("West Road");

    north->addVehicle(make_shared<Car>("DHA-101"));
    north->addVehicle(make_shared<Car>("DHA-102"));

    south->addVehicle(make_shared<Bike>("DHA-201"));

    east->addVehicle(make_shared<Car>("DHA-301"));
    east->addVehicle(make_shared<Bus>("DHA-302"));
    east->addVehicle(make_shared<Car>("DHA-303"));
    east->addVehicle(make_shared<Bike>("DHA-304"));
    east->addVehicle(make_shared<Car>("DHA-305"));
    east->addVehicle(make_shared<Car>("DHA-306"));

    west->addVehicle(make_shared<Ambulance>("AMB-99"));

    JunctionController junction;
    junction.addRoad(north);
    junction.addRoad(south);
    junction.addRoad(east);
    junction.addRoad(west);

    junction.runSimulation();

    return 0;
}