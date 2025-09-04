#include <iostream>
using namespace std;

void moveToTheEnd(int arr[] , int num ,  int i , int n){
    for (int j =i ; j < n-1; j++)
    {
        arr[j]= arr[j+1];
    }
    arr[n-1]=0;
    
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0){
            moveToTheEnd(arr , arr[i] ,i ,  n);
        }
    }

    cout<<"After moving the elements to the end: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    



    return 0;
}