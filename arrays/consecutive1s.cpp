#include <iostream>
#include <vector>
using namespace std;

int consecutiveOnes(int arr[], int n) {
    int count = 0;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count++;
        } else {
            v.push_back(count);  
            count = 0;           
        
    }
}
    v.push_back(count);

    int maxStreak = v[0];
    for (int x : v) {
        if (x > maxStreak) {
            maxStreak = x;
        }
    }
    return maxStreak;
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

    cout << "Maxm Streak: " << consecutiveOnes(arr, n);

    return 0;
}
