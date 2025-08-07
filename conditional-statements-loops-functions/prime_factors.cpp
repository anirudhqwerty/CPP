#include <iostream>
using namespace std;


bool primechecker(int n){
    bool Prime = true;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            Prime =false;
            break;
        }
    }
    
    return Prime;
}


int main() {
    int n;
    cout<<"What is the number?"<<endl;
    cin>>n;
    cout<<"The prime factors for this number are: ";
    for (int i = 2; i <=n; i++)
    {
        if(n%i==0 && primechecker(i)==true){
            cout<<i<<" ";
        }
    }
    
    return 0;
}