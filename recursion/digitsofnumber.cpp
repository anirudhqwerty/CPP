#include <iostream>
using namespace std;   


int count(int n){
    if (n==0){
        return 0;
    }
    int c =1;
    c= c+ count(n/10);
    return c;

}

int main() {
    int n;
    cout<<"What is n?";
    cin>>n;

    cout<<count(n);
    return 0;
}