#include <iostream>
#include<cmath>
using namespace std;

int power(int base ,int exponent){
    if (exponent == 0) return 1;
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

bool armstrongchecker(int n){

int check1=n;
    int count = countdigits(n);
    
    int check2 =0;
    while(n>0){
        int digit =n%10 ;
        check2 = check2 + power(digit, count);
        n=n/10;
    }
    
    if(check1==check2){
        return true;
    }
    else return false;

}

int main() {
    int n;
    cout<<"What is the range?"<<endl;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        if(armstrongchecker(i)==true){
            cout<<i<<endl;
        }
    }
    return 0;
}