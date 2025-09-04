#include <iostream>
using namespace std;

void rotateRightByOne(int arr[] , int n){
    int last = arr[n -1];
    for (int i = n-1; i >0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0]=last;
    
}

void rotateRight(int arr[] , int n  , int k){
    k=k%n;
    for (int i = 0; i < k; i++)
    {
       rotateRightByOne(arr , n);
    }
    
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

    int k;
    cout<<"Enter k "<<endl;
    cin>>k;

    rotateRight(arr , n , k);

    cout<<"Array after rotation "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}