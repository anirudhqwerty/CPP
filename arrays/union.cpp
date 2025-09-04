#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter size of first array: ";
    cin >> n1;
    vector<int> arr1(n1);
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++) cin >> arr1[i];

    cout << "Enter size of second array: ";
    cin >> n2;
    vector<int> arr2(n2);
    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++) cin >> arr2[i];

    
    set<int> s;

    
    for (int x : arr1) s.insert(x);
    for (int x : arr2) s.insert(x);

    
    cout << "Union of the two arrays: ";
    for (int x : s) cout << x << " ";
    cout << endl;

    return 0;
}
