#include <iostream>
using namespace std;

void Traversing(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {3,2,1,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    Traversing(arr,n);
    return 0;
}

void insertion(int arr[],int elem , int n,int k){
    for(int i=n-1;i>=k;i--){
        arr[i+1]=arr[i];
    }
    arr[k] = elem;
    n++;
}
int main(){
    int arr[] = {1,2,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion(arr,3,n,2);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
 }
void Deleting(int arr[], int &n, int elem) {
    int pos = -1;

 
    for (int i = 0; i < n; i++) {
        if (arr[i] == elem) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        cout << "Element not found\n";
        return;
    }

   
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; 
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    Deleting(arr, n, 2);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

LINEAR SEARCH

void linarsearch(int arr[],int n,int target){
    int pos= -1;
    for(int i=0;i<n;i++){
        
        if(arr[i] == target){
            pos=i;
            break;
        }
       
    }
    if(pos != -1){
        cout<<"element found at index : "<< pos <<endl;
    }else{
        cout<<"element not found!!";
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    linarsearch(arr,n,2);
    return 0;
}


BINARY SEARCH

void binarysearch(int arr[],int n,int target){
    int low= 0;
    int high = n-1;
    bool found = false;

    while(low<high){
    int mid = (low+high)/2;


    if(arr[mid] == target){
        cout<<"element found at index :" <<mid;
        found = true;
        break;

    }
    else if(target<arr[mid]){
        high = mid-1;
    }
    else{
        low = mid+1;
    }
}
}

 int main(){
     int arr[] = {1,2,3,4,5,6,7,8,9};
     int n = sizeof(arr)/sizeof(arr[0]);
     binarysearch(arr,n,7);
     return 0;
 }

reversing an array

void reversing(int arr[] , int n){
    int  i =0;
    int j = n-1;
    int temp;
    while(i<j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n =5;
    reversing(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

finding minimum element

int findMin(int arr[],int n){
    int Minelem  = arr[0];

    for(int i=1;i<n;i++){
        if(arr[i] < Minelem){
            Minelem = arr[i];
        }
    }
    return Minelem;

}
int main(){
    int arr[] = {2,3,1,4,5};
    int n =5;
    int result = findMin(arr,n);
   cout<<"Minimum elememnt is : "<<result;
    return 0;
}

int findMax(int arr[],int n){
    int Maxelem  = arr[0];

    for(int i=1;i<n;i++){
        if(arr[i] > Maxelem){
            Maxelem = arr[i];
        }
    }
    return Maxelem;

}
int main(){
    int arr[] = {2,3,1,4,5};
    int n =5;
    int result = findMax(arr,n);
   cout<<"Maximum elememnt is : "<<result;
    return 0;
}

Two sum problem

int twoSum(int arr[],int n,int sum){
    int count = 0;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]+arr[j] == sum){
                cout<<arr[i]<<" And "<<arr[j]<<" Makes up the sum of "<<sum<<endl;
                count++;
            }
        }
    }
    return count;
}

int main(){
    int arr[] = {1,2,3,4,5,};
    int n = 5;
    int sum = 6;
    int total = twoSum(arr,n,sum);
    cout<<"Total "<<total<<" pairs makes up to the target sum of "<<sum;

    return 0;

}

THREE SUM

int threeSum(int arr[],int n , int targetSum){
    int count = 0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k] == targetSum){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" Makes up the sum of "<<targetSum<<endl;
                    count++;
                }
            }
        }
    }
    return count;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int sum = 6;
    int total = threeSum(arr,n,sum);
    cout<<"Total "<<total<<" pairs makes up to the target sum of "<<sum;

    return 0;

}

SHIFTING ALL NEGITIVE NUMBER TO ONE CORNER

void shiftNegitives(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]<0 && arr[j]>=0){
            int temp= arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j--;
            i++;
        }
        else if(arr[i]>0){
            i++;
        }
        else{
            j--;
        }
    }
}
int main(){
    int arr[] = {1,-2,-4,3,-9,7,5,-3,-8,6};
    int n= 10;
    shiftNegitives(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

Dutch National Flag problem 

void DutchNationalFlag(int arr[],int n){
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid<=high){
        if(arr[mid] == 0){
            int temp = arr[low] ;
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;

        }else{
           int temp = arr[high] ;
            arr[high] = arr[mid];
            arr[mid] = temp;
            high--;
            
        }
    }
}
int main(){
    int arr[] = {1,0,2,2,0,1,1,0,2,1};
    int n=10;
    DutchNationalFlag(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}