#include <iostream>
#include<cmath>
using namespace std;

int power(int base ,int exponent){
    int power1 =base;
    while(exponent!=1)
    {
        power1 = power1 *base;
        exponent--;
    }

    return power1;
}
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
    int check1=n;
    int count = countdigits(n);
    
    int check2 =0;
    while(n>0){
        int digit =n%10 ;
        check2 = check2 + power(digit, count);
        n=n/10;
    }
    
    if(check1==check2){
        cout<<"The number is armstrong!";
    }
    else cout<<"The number is not armstrong";



    return 0;
}