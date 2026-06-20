#include <iostream>
using namespace std;

class Account {
    float balance;
public:
    Account(float b) : balance(b) {}
    friend void applyBonus(Account&, float);
    void show() { cout << "Balance = " << balance << endl; }
};

void applyBonus(Account &a, float bonus) {
    a.balance += bonus;
}

int main() {
    Account a1(1000);
    a1.show();
    applyBonus(a1, 200);
    a1.show();
    return 0;
}