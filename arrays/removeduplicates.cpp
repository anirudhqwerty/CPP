#include <iostream>
using namespace std;




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

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]==arr[j]){
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; 
                j--;
            }
        }
        
    }

    cout<<"Array after removing duplicates "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}