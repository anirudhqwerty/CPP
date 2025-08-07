#include <iostream>
using namespace std;


int sumofdigits(int x){
    int i=0 ,sum=0;
    while(x>0){
        sum=sum+x%10;
        x=x/10;
        
    }
    return sum;
}

int main() {
    int n;
    cout<<"What is the number?"<<endl;
    cin>>n;
    int sum= sumofdigits(n);
    cout<<sum;
    return 0;
}