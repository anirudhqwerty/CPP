#include <iostream>
using namespace std;

int main() {
    int n1 , n2 ;
    cout<<"What are the two numbers?"<<endl;
    cin>>n1>>n2;

    int hcf,lcm;

    for (int  i = 1; i <= n1*n2; i++)
    {
        if(i%n1==0 && i%n2==0){
            lcm=i;
            break;
        }
    }
    cout<<"The lcm is "<<lcm<<endl;


    for (int i = 1; i <= min(n1 , n2); i++)
    {
        if(n1%i==0 && n2%i==0){
            hcf=i;
        }
    }
    cout<<"The hcf is "<<hcf;
    return 0;
}