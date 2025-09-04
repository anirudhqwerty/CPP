#include <iostream>
using namespace std;




int secondlargestelement(int arr[] , int n){
    int max = arr[0];
    int i;
    for (i = 1; i < n; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
    int max2 =INT64_MIN;
    for (i = 1; i < n; i++){
        if(arr[i]>max2 && arr[i]!=max){
            max2=arr[i];
        }
    }
    



    return max2;
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

    cout<<"The second largest elemnt is : "<<secondlargestelement(arr , n )<<endl;
    
    

    return 0;
}