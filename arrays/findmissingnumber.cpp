#include <iostream>
using namespace std;

int findMissing(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (arr[i] + 1 == arr[j]) {
                found = true;
                break;  
            }
        }
        if (!found) {
            return arr[i] + 1;  
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

    int missing = findMissing(arr, n);
    if (missing != -1) {
        cout << "Missing number is: " << missing << endl;
    } else {
        cout << "No number is missing!" << endl;
    }

    return 0;
}