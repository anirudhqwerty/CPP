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
    int x=n;
    int reversed = reversenum(n);
    if(x==reversed){
        cout<<"The number is palindrome";
    }
    else cout<<"The number is not palindrome";
    return 0;
}
