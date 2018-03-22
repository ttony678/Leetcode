#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    }

    return n * factorial(n-1);
}

int main() {
    
    int n;
    cout << "We will be computing the factorial of a number. Enter: ";
    cin >> n;
    
    cout << "The answer is: ";
    n = factorial(n);
    cout << n << endl;

    return 0;
}
