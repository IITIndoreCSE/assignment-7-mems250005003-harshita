/* Write a function that finds that first element that repeats itself in an array. */
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_set<int> seen;
    int firstRepeat = -1;

    for (int i = 0; i < n; i++) {
        if (seen.find(arr[i]) != seen.end()) {
            firstRepeat = arr[i];
            break;
        }
        seen.insert(arr[i]);
    }

    if (firstRepeat == -1)
        cout << "No repeating elements found." << endl;
    else
        cout << "First repeating element is: " << firstRepeat << endl;

    return 0;
}
