#include <iostream>
using namespace std;


int countdigits(int x){
    int i=0;
    while (x>0)
    {
        x=x/10;
        i++;
        
    }
    return i;
}


int main() {
    int n;
    cout<<"What is the number?"<<endl;
    cin>>n;
    int digits=countdigits(n);
    cout<<digits;
    return 0;
}