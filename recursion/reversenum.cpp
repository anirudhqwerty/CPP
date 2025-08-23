#include <iostream>
using namespace std;

void reverse(int n){
    if(n==0) return;
    cout<<n%10;
    reverse(n/10);
}
int main() {
    int n;
    cout<<"What is n?";
    cin>>n;

    reverse(n);

    return 0;
}