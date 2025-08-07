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
    cout<<"What number of primes do you want to sum??";
    cin>>n;
    int original_n = n;  
    int sum = 2;         
    int count = 1;       
    int i = 3;

    while (count < original_n) {
        if (primechecker(i)) {
            sum += i;
            count++;
        }
        i++;
    }

    cout << "The sum of first " << original_n << " prime numbers is " << sum << endl;
    
    return 0;
}