#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements (sorted): ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int num;
    cout << "What number do you want to find? ";
    cin >> num;

    int low = 0, high = n - 1;
    bool found = false;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == num) {
            cout <<"number found at position " << mid + 1<< endl;
            found = true;
            break;
        }
        else if (arr[mid] < num) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (!found) {
        cout << "number not found:(" << endl;
    }

    return 0;
}
