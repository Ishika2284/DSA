#include <iostream>
using namespace std;

//LEFT ROTATE BY ONE

void LeftRotate(int arr[],int n){

    int temp = arr[0];
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1] = temp;
}

//RIGHT ROTATE BY ONE
void RightRotate(int arr[],int n){

    int temp = arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0] = temp;
}

// move all the zeroes in an array to the end, without changing the order

void moveZerotoend(int arr[],int n){

    int index = 0;

    for(int i=0;i<n-1;i++){
        if(arr[i] != 0){
            arr[index++]=arr[i];
        }
    }
    while(index<n){
        arr[index++]=0;
    }
}

// removing duplicates from an unsorted array.

int removeDuplicates(int arr[],int n){
    int index= 0;
    

    for(int i=0;i<n;i++){
        bool isDuplicate = false;

        for(int j=0;j<index;j++){
            if(arr[i]==arr[j]){
                isDuplicate =true;
                break;
            }
        }

         if(!isDuplicate){
        arr[index]=arr[i];
        index++;
    }
    }
    return index;
   
}

// Find the Missing Number (1 to N)

int missingNum(int arr[], int n){

    int total = (n+1)*(n+2)/2;
    for(int i=0;i<n;i++){
        total-= arr[i];
    }
    return total;


}

 int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = 5;
    LeftRotate(arr1, n1);
    cout << "Left Rotated: ";
    for(int x : arr1) cout << x << " ";
    cout << endl;

    int arr2[] = {1, 2, 3, 4, 5};
    RightRotate(arr2, n1);
    cout << "Right Rotated: ";
    for(int x : arr2) cout << x << " ";
    cout << endl;

    int arr3[] = {0, 1, 0, 3, 12};
    int n3 = 5;
    moveZerotoend(arr3, n3);
    cout << "Zero moved: ";
    for(int x : arr3) cout << x << " ";
    cout << endl;

    int arr4[] = {1,2,5,1,2};
    int n4 = 5;
    int newSize = removeDuplicates(arr4, n4);
    cout << "After duplicates removed: ";
    for(int i = 0; i < newSize; i++) cout << arr4[i] << " ";
    cout << endl;

    int arr5[] = {1, 2, 4, 5};
    int n5 = 4;
    cout << "Missing Number: " << missingNum(arr5, n5) << endl;

    return 0;
}

