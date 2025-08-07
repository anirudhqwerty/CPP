#include <iostream>
using namespace std;

int reversenum(int x) {
    int reverse = 0;
    while (x > 0) {
        reverse = reverse * 10 + (x % 10);
        x = x / 10;
    }
    return reverse;
}

int main() {
    int n;
    cout << "What is the number?" << endl;
    cin >> n;
    cout << "The number reversed is:" << reversenum(n);
    return 0;
}
