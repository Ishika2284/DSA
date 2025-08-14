#include <iostream>
using namespace std;

// Merge Two Sorted Arrays (without using extra library like vector or ArrayList)

void MergeArr(int list1[],int list1_size,int list2[],int list2_size,int merge[]){
    
    int i =0, j=0 , k=0;
    while(i<list1_size && j<list2_size){
        if(list1[i]<list2[j]){
            merge[k] = list1[i];
            k++;
            i++;
        }
        else{
            merge[k] = list2[j];
            k++;
            j++;
        }
    }
    while(i<list1_size){
        merge[k] = list1[i];
        k++;
        i++;
    }
    while(j<list2_size){
        merge[k] = list2[j];
        k++;
        j++;
    }
}

void mergeInplace(int list1[],int m,int list2[],int n){
    int i = m-1;
    int j=n-1;
    int k = m+n-1;

    while(i>=0 && j>=0){
        if(list1[i]>list2[j]){
            list1[k] = list1[i];
            k--;
            i--;
        }
        else{
            list1[k] = list2[j];
            k--;
            j--;
        }
    }
    while(j>=0){
        list1[k] = list2[j];
        k--;
        j--;
    }
}
// Find the Kth Smallest Element
int KthSmallest(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        int minIndex = i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
                int temp = arr[i];
                arr[i] = arr[minIndex];
                arr[minIndex] = temp;
            }
        }

    }

    return arr[k-1];
}
// Check if Two Arrays are Equal
void checkarray(int arr1[],int arr2[],int n1,int n2){
    int i,j;
  
    if(n1 != n2){
        cout<<"Arrays not equal!! update the array to equalize"<<endl;
        return;
    }
    for(int i=0;i<n1;i++){
        if(arr1[i] != arr2[i]){
            cout<<"Arrays not equal!!"<<endl;
            return;
        }
    }
    cout<<"Both Arrays are equal!!";
}


int main(){
    int n1 ;
    int n2;
    
   
    cout<<"enter the no of elements you want in list 1 : ";
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++){
        
    cout<<"enter element for index "<<i<<" : ";
    cin>>arr1[i];
    }

      cout<<"enter the no of elements you want in list 2 : ";
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++){
        
    cout<<"enter element for index "<<i<<" : ";
    cin>>arr2[i];
    }
     int merge_size = n1+n2;
     int merge[merge_size];
   

    cout<<"Merged Array : ";

      mergeInplace(arr1,n1,arr2,n2);
    for(int i=0;i<merge_size;i++){
        cout<<merge[i];
    }
    int k;
    cout<<"enter the kth smallest element you want to search : ";
    cin>>k;

    int final = KthSmallest(arr1,n1,k);
       for(int i=0;i<n1+n2;i++){
        cout<<arr1[i];
    }
    cout<<"kth smallest element is : "<<final;

        checkarray(arr1,arr2,n1,n2);
    return 0;
}