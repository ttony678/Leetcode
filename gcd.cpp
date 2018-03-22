#include <iostream>
using namespace std;

int get_gcd(int a, int b, int div) {

    if ((a % div == 0) && (b % div == 0)) {
        return div;
    }

    return get_gcd(a, b, div-1);
}

int main() {

    int a, b;
    cout << "We will get the GCD of 2 numbers" << endl;
    cout << "Enter the first: "; cin >> a;
    cout << "Enter the second: ";
    cin >> b;

    int res;
    res = get_gcd(a, b, b);

    cout << "The result is: " << res << endl;

    return 0;
}
