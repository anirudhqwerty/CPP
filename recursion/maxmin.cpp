#include <iostream>
using namespace std;

int max(int arr){
    int MAX= (int)arr[0];
    
}

int main() {
    int n;
    cout<<"What is number of the elements of the array?"<<endl;
    cin>>n;
    int arr[n];
    cout<<"What are the elements? "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<max(arr[n]);
    
    return 0;
}