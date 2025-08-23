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

    int num;
    cout<<"What number do you want to find?";
    cin>>num;

    bool found = true;
    for (int i = 0; i < n; i++)
    {
        if(num==arr[i]){
            cout<<"Number found at position "<<i+1<<endl;
            found = true;
            break;
        }
        else{
            found =false;

        }
    }

    if(!found){
        cout<<"number not found :(";
    }
    

    return 0;
}