<<<<<<< Updated upstream
#include <iostream>
using namespace std;

// Iterative Binary Search
int IterativeBinarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

// Recursive Binary Search
int RecursiveBinarySearch(int arr[], int low, int high, int target) {
    if(low > high) return -1;
    int mid = (low + high) / 2;
    if(arr[mid] == target) return mid;
    else if(arr[mid] < target) return RecursiveBinarySearch(arr, mid + 1, high, target);
    else return RecursiveBinarySearch(arr, low, mid - 1, target);
}

// First Occurrence
int FirstOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == target) {
            result = mid;
            high = mid - 1; // go left
        }
        else if(arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return result;
}

// Last Occurrence
int LastOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == target) {
            result = mid;
            low = mid + 1; // go right
        }
        else if(arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return result;
}

// Count of Target
int CountOfTarget(int arr[], int n, int target) {
    int first = FirstOccurrence(arr, n, target);
    if(first == -1) return 0;
    int last = LastOccurrence(arr, n, target);
    return last - first + 1;
}

// Main Function
int main() {
    int arr[] = {0, 1, 2, 4, 4, 4, 5, 6, 7}; // Sorted array for binary search to work
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 4;

    cout << "Binary Search (Iterative): " << IterativeBinarySearch(arr, n, target) << endl;
    cout << "Binary Search (Recursive): " << RecursiveBinarySearch(arr, 0, n - 1, target) << endl;
    cout << "First Occurrence: " << FirstOccurrence(arr, n, target) << endl;
    cout << "Last Occurrence: " << LastOccurrence(arr, n, target) << endl;
    cout << "Count of Target: " << CountOfTarget(arr, n, target) << endl;

    return 0;
}
=======
#include <iostream>
using namespace std;

// Iterative Binary Search
int IterativeBinarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

// Recursive Binary Search
int RecursiveBinarySearch(int arr[], int low, int high, int target) {
    if(low > high) return -1;
    int mid = (low + high) / 2;
    if(arr[mid] == target) return mid;
    else if(arr[mid] < target) return RecursiveBinarySearch(arr, mid + 1, high, target);
    else return RecursiveBinarySearch(arr, low, mid - 1, target);
}

// First Occurrence
int FirstOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == target) {
            result = mid;
            high = mid - 1; // go left
        }
        else if(arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return result;
}

// Last Occurrence
int LastOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == target) {
            result = mid;
            low = mid + 1; // go right
        }
        else if(arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return result;
}

// Count of Target
int CountOfTarget(int arr[], int n, int target) {
    int first = FirstOccurrence(arr, n, target);
    if(first == -1) return 0;
    int last = LastOccurrence(arr, n, target);
    return last - first + 1;
}

// Main Function
int main() {
    int arr[] = {0, 1, 2, 4, 4, 4, 5, 6, 7}; // Sorted array for binary search to work
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 4;

    cout << "Binary Search (Iterative): " << IterativeBinarySearch(arr, n, target) << endl;
    cout << "Binary Search (Recursive): " << RecursiveBinarySearch(arr, 0, n - 1, target) << endl;
    cout << "First Occurrence: " << FirstOccurrence(arr, n, target) << endl;
    cout << "Last Occurrence: " << LastOccurrence(arr, n, target) << endl;
    cout << "Count of Target: " << CountOfTarget(arr, n, target) << endl;

    return 0;
}
>>>>>>> Stashed changes
