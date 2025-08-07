//  Linear Search – Find if a number exists in an array

#include <iostream>
using namespace std;

bool LinearSearch(int arr[],int n,int target){
    int i,j;
    bool isFound = false;
    for(i=0;i<n;i++){
        if(arr[i]==target){
            cout<<"element found at index : "<<i<<endl;
            isFound =true;
        }
    }
    return  isFound;
}


// Count Frequency of Each Element (unordered array)

    void countFreq(int arr[],int n){
        bool visited[n]= {false};
       
        for(int i=0;i<n;i++){
            if(visited[i]){
                continue;
            }
            int count =0;
            for(int j=0;j<n;j++){
                if(arr[i]==arr[j]){
                    visited[j] = true;
                    count++;
                }
            }
            visited[i]=true;
        cout<<"count of each element "<<arr[i]<<" is : "<<count<<endl;
        }
        
    }
    
    //FIRST OCCURENCE
    int firstOccurrence(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) return i;
    }
}
    //Find Last Occurrence of a Target

int lastOccurrence(int arr[], int n, int target) {
    for(int i = n-1; i >= 0; i--) {
        if(arr[i] == target) return i;
    }
    return -1;
}
    
//COUNT TARGET
int countTarget(int arr[], int n, int target) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) count++;
    }
    return count;
}


int main(){
    int n,target;
    cout<<"enter the no of elements you want in the array : "<<endl;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"element for the index "<<i<<" is : ";
        cin>>arr[i];
    }

    cout<<"enter the target element you want to search : ";
    cin>>target;
    bool check = LinearSearch(arr,n,target);

    if(check){
        cout<<"!!!!!!element found !!!!!!"<<endl;
    }else{
        cout<<"element not found in the array ";
    }

    countFreq(arr,n);

    cout << "First Occurrence of " << target << ": " << firstOccurrence(arr, n, target) << endl;
    cout << "Last Occurrence of " << target << ": " << lastOccurrence(arr, n, target) << endl;
        cout << "Count of " << target << ": " << countTarget(arr, n, target) << endl;
    return 0;
}