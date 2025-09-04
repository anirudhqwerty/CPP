#include <iostream>
using namespace std;

int largestelement(int arr[] , int n){
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    cout<<"What is the number of elements?"<<endl;
    cin>>n;

    int arr[n];
    cout<<"What are the elements of the array?"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"The largest elemnt is : "<<largestelement(arr , n )<<endl;
    
    

    return 0;
}