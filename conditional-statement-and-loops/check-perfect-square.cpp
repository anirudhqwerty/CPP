#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"What is the number??";
    cin>>n;
    bool square = false;
    for (int i = 0; i < n; i++)
    {
        if(i*i==n){
            square = true;
            break;
        }
    }

    if(square==true){
        cout<<"The number is a perfect square";

    }
    else cout<<"The number is not a perfect square";
    
    return 0;
}