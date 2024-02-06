#include <iostream>

using namespace std;

class Number {
protected:
    int num;

public:
    void getNumber() {
        cout << "Enter a number: ";
        cin >> num;
    }
};

class Factorial : public Number {
public:
    int calculateFactorial() {
        int factorial = 1;
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        return factorial;
    }
};

int main() {
    Factorial fact;
    fact.getNumber();
    int result = fact.calculateFactorial();
    cout << "Factorial is: " << result << endl;
    return 0;
}