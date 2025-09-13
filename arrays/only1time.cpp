#include <iostream>
using namespace std;

int onlyOne(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        bool one = true;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                one = false;
                break;
            }
        }
        if (one) {  
            return arr[i];
        }
    }
    return -1;
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

    cout << "Unique element: " << onlyOne(arr, n);

    return 0;
}
