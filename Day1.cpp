#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void findMaxMin(int arr[], int n) {
    int maxVal = arr[0];
    int minVal = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > maxVal) maxVal = arr[i];
        if(arr[i] < minVal) minVal = arr[i];
    }

    cout << "Max = " << maxVal << ", Min = " << minVal << endl;
}
void reverseIterative(int arr[], int n) {
    int left = 0, right = n - 1;

    while(left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}
void reverseRecursive(int arr[], int left, int right) {
    if(left >= right) return;
    swap(arr[left], arr[right]);
    reverseRecursive(arr, left + 1, right - 1);
}
bool isSorted(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, n);

    findMaxMin(arr, n);

    reverseIterative(arr, n);
    cout << "Reversed Array (Iterative): ";
    printArray(arr, n);

    reverseRecursive(arr, 0, n - 1);
    cout << "Reversed Array (Recursive): ";
    printArray(arr, n);

    cout << "Is array sorted? " << (isSorted(arr, n) ? "Yes" : "No") << endl;

    return 0;
}
