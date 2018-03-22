#include <iostream>
using namespace std;

int multiply(int a, int b) {

    if (b == 0) {
        return 0;
    }

    return a + multiply(a, b-1);
}

int main() {

    int a, b;
    cout << "We will multiply 2 numbers" << endl;
    cout << "Enter the first: ";
    cin >> a;
    cout << "Enter the second: ";
    cin >> b;

    int mult = multiply(a, b);
    cout << "The result is: " << mult << endl;

    return 0;
}
