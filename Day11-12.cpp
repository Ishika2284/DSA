<<<<<<< Updated upstream
#include <iostream>
using namespace std;
#include <climits>
//Kadanes Algorithm
int kadanes(int arr[],int n){

    int curr_sum = 0;
    int Max_sum = INT_MIN;

    for(int i=0;i<n;i++){
        curr_sum += arr[i];
        Max_sum = max(Max_sum,curr_sum);
      
        
        if(curr_sum<0){
            curr_sum = 0;
          
        }
       
    }
  

    return Max_sum;

}
int main(){
    int arr[] = {3,-4,5,4,-1,7,-8};
    int n = 7;
    int final = kadanes(arr,n);
    cout<<"Maximum subarray sum is :" <<final;

    return 0;
}

//Max product Subarray
int MaxProductSubarray(int arr[],int n){
    int prefix = 1;
    int suffix = 1;
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        if(prefix == 0) prefix =1;
        if(suffix == 0) suffix =1;

        prefix = prefix * arr[i];
        suffix = suffix * arr[n-i-1];

        ans = max(ans,max(prefix,suffix));
    }
   return ans;
}
int main(){
    int arr[] = {2,3,-4,0,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int final = MaxProductSubarray(arr,n);
    cout<<"Maximum subarray product is :" <<final;

    return 0;
}

//MERGE TWO ARRAYS WITHOUT EXTRA SPACE

void mergeTwoArray(int arr1[],int arr2[],int n1,int n2){
    int i=n1-1;
    int j=n2-1;
    int k = n1+n2-1;

    while(i>=0 && j>=0){
        if(arr1[i]>arr2[j]){
            arr1[k] = arr1[i];
            k--;
            i--;
        }else{
            arr1[k] = arr2[j];
            j--;
            k--;
        }
    }
    while(j>=0){
        arr1[k] = arr2[j];
        k--;
        j--;
    }
}

int main(){
    int n1 ;
    int n2;
    
   
    cout<<"enter the no of elements you want in list 1 : ";
    cin>>n1;
    
      cout<<"enter the no of elements you want in list 2 : ";
    cin>>n2;

    int arr1[n1+n2];
    for(int i=0;i<n1;i++){
        
    cout<<"enter element for index "<<i<<" : ";
    cin>>arr1[i];
    }
    int arr2[n2];
    for(int i=0;i<n2;i++){
        
    cout<<"enter element for index "<<i<<" : ";
    cin>>arr2[i];
    }
     int merge_size = n1+n2;
     int merge[merge_size];
   

    cout<<"Merged Array : ";

      mergeTwoArray(arr1,arr2,n1,n2);
    for(int i=0;i<merge_size;i++){
        cout<<arr1[i]<<" ";
    }
}

//PREFIX SUM 

void prefixSum(int arr[],int n){
    int sum_Arr[n];
    sum_Arr[0] = arr[0];
    for(int i=1;i<n;i++){
       sum_Arr[i] = sum_Arr[i-1] + arr[i];

    }
    cout<<"Prefix sum array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<sum_Arr[i]<<" ";
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n=5;
    prefixSum(arr,n);
    return 0;
=======
#include <iostream>
using namespace std;
#include <climits>
//Kadanes Algorithm
int kadanes(int arr[],int n){

    int curr_sum = 0;
    int Max_sum = INT_MIN;

    for(int i=0;i<n;i++){
        curr_sum += arr[i];
        Max_sum = max(Max_sum,curr_sum);
      
        
        if(curr_sum<0){
            curr_sum = 0;
          
        }
       
    }
  

    return Max_sum;

}
int main(){
    int arr[] = {3,-4,5,4,-1,7,-8};
    int n = 7;
    int final = kadanes(arr,n);
    cout<<"Maximum subarray sum is :" <<final;

    return 0;
}

//Max product Subarray
int MaxProductSubarray(int arr[],int n){
    int prefix = 1;
    int suffix = 1;
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        if(prefix == 0) prefix =1;
        if(suffix == 0) suffix =1;

        prefix = prefix * arr[i];
        suffix = suffix * arr[n-i-1];

        ans = max(ans,max(prefix,suffix));
    }
   return ans;
}
int main(){
    int arr[] = {2,3,-4,0,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int final = MaxProductSubarray(arr,n);
    cout<<"Maximum subarray product is :" <<final;

    return 0;
}

//MERGE TWO ARRAYS WITHOUT EXTRA SPACE

void mergeTwoArray(int arr1[],int arr2[],int n1,int n2){
    int i=n1-1;
    int j=n2-1;
    int k = n1+n2-1;

    while(i>=0 && j>=0){
        if(arr1[i]>arr2[j]){
            arr1[k] = arr1[i];
            k--;
            i--;
        }else{
            arr1[k] = arr2[j];
            j--;
            k--;
        }
    }
    while(j>=0){
        arr1[k] = arr2[j];
        k--;
        j--;
    }
}

int main(){
    int n1 ;
    int n2;
    
   
    cout<<"enter the no of elements you want in list 1 : ";
    cin>>n1;
    
      cout<<"enter the no of elements you want in list 2 : ";
    cin>>n2;

    int arr1[n1+n2];
    for(int i=0;i<n1;i++){
        
    cout<<"enter element for index "<<i<<" : ";
    cin>>arr1[i];
    }
    int arr2[n2];
    for(int i=0;i<n2;i++){
        
    cout<<"enter element for index "<<i<<" : ";
    cin>>arr2[i];
    }
     int merge_size = n1+n2;
     int merge[merge_size];
   

    cout<<"Merged Array : ";

      mergeTwoArray(arr1,arr2,n1,n2);
    for(int i=0;i<merge_size;i++){
        cout<<arr1[i]<<" ";
    }
}

//PREFIX SUM 

void prefixSum(int arr[],int n){
    int sum_Arr[n];
    sum_Arr[0] = arr[0];
    for(int i=1;i<n;i++){
       sum_Arr[i] = sum_Arr[i-1] + arr[i];

    }
    cout<<"Prefix sum array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<sum_Arr[i]<<" ";
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n=5;
    prefixSum(arr,n);
    return 0;
>>>>>>> Stashed changes
}