#include <iostream>
#include <string>
using namespace std;

string reverseString(string str, int n) {
    if (n == 0) {
        return string(1, str[0]);
    }
    return string(1, str[n]) + reverseString(str, n - 1);
}

int main() {
    string str;
    cout << "What string do u want to check if it's palindrome? ";
    getline(cin, str);

    int n = str.length();
    string reversed = reverseString(str, n - 1);

    if (str == reversed) {
        cout << "It is a palindrome";
    } else {
        cout << ":((";
    }

    return 0;
}
