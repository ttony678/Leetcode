#include <iostream>
#include <string>
using namespace std;

void swap(string &str, int l, int r) {
    char temp = str[l];
    str[l] = str[r];
    str[r] = temp;
}

string reverse(string str, int begin, int end) {
    if (begin < end) {
        swap(str, begin, end);
        return reverse(str, begin+1, end-1);
    }
    return str;
}

int main(){

    // string str = "cat is running";
    string str = "cat is not running";
    cout << "String: " << str << endl;

    string rev = reverse(str, 0, str.size() - 1);
    cout << "Reverse: " << rev << endl;

    return 0;
}

