#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int pos;
    cout<<"Enter the the position you want to delete: "<<endl;
    cin>>pos;

    for (int i = pos-1 ; i<n-1 ;i++)
    {
        arr[i]=arr[i+1];

    }

    n--;

    cout<<"Array after deletion "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    



    return 0;
}    