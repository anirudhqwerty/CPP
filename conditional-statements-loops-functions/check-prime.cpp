#include <iostream>
using namespace std;


int main() {
    int n;
    cout<<"What is the number?"<<endl;
    cin>>n;
    bool Prime = true;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            Prime =false;
            break;
        }
    }
    if(Prime==false){
        cout<<"The number is not a prime number";
    }
    else cout<<"The number is a prime number!!!!!!!wohoooooo ayyayayayaa";
    
    return 0;
}