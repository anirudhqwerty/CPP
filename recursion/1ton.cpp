#include <iostream>
using namespace std;

void print(int n){
    if(n==1) {
        cout<<1<<endl;
        return;
    }
    print(n-1);
    cout<<n<<endl;
    
}
int main() {
    int n;
    cout<<"What is n?";
    cin>>n;
    print(n);
    return 0;
}