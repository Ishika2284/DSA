<<<<<<< Updated upstream
#include <iostream>
#include <climit>
using namespace std;

// 18. Find the sum of all positive numbers in an array.

void sumPositive(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        if(arr[i] > 0){
            sum += arr[i];
        }
    }
    return sum;
}


// 19. Find the sum of all negative numbers in an array.
void sumNegitive(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        if(arr[i] < 0){
            sum += arr[i];
        }
    }
    return sum;
}



// 20. Rotate an array to the right by k positions.

reverseArr(int arr[],int start,int end){
    int i=0;
    int j=end;

    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void rotateArrbyD(int arr[],int n,int k)
{
    k= k%n;

    reverseArr(int arr[],0,n-1);
    reverseArr(int arr[],0,k-1);
    reverseArr(int arr[],k,n-1);

}

// 21. Rotate an array to the left by k positions.

void rotateArrbyD(int arr[],int n,int k)
{
    k= k%n;

    reverseArr(int arr[],0,k-1);
    reverseArr(int arr[],k,n-1);
    reverseArr(int arr[],0,n-1);

}


// 25. Find the majority element (appears more than n/2 times) in an array.

void majorityElem(int arr[],int n){
    int candidate = arr[0];
    int count = 1;
    for(int i=0;i<n;i++){
        if(arr[i] == candidate){
            count++;
        }else{
            count--;
        }
        if(count == 0){
            candidate = arr[i];
        }
    }
}

// 26. Rearrange array so that positive and negative numbers alternate.

void rearrange(int arr[], int n) {
    int i = 0, j = n - 1;

    while (i <= j) {
        if (arr[i] < 0) {
            i++;
        } else if (arr[j] >= 0) {
            j--;
        } else {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    int neg = 0, pos = i; 

    while (neg < pos && pos < n && arr[neg] < 0) {
        swap(arr[neg], arr[pos]);
        neg += 2;
        pos++;
    }
}



// 27. Find the subarray with the maximum sum (Kadane’s Algorithm).


void kadanes(int arr[],int n){
    int curr_sum = 0;
    int max_sum = INT_MIN;

    for(int i=0;i<n;i++){
        curr_sum += arr[i];

        max_sum = max(curr_sum,max_sum);

        if(curr_sum < 0){
            curr_sum =0;
        }

    }
    return max_sum;

}

// 28. Find the subarray with the minimum sum.

void MinKadanes(int arr[],int n){
    int curr_sum = 0;
    int min_sum = INT_MAX;

    for(int i=0;i<n;i++){
        curr_sum += arr[i];

        min_sum = min(curr_sum,min_sum);

        if(curr_sum > 0){
            curr_sum = 0;
        }
    }
    return min_sum;
}


// 29. Find the length of the longest subarray with sum 0.

int lenLngSubArr(int arr[],int n){
    int Max_len = 0;
    
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];

            if(sum == 0){
                Max_len = max(Max_len,j-i+1);
            }
        }
    }
    return Max_len;

}


// 30. Find the length of the longest subarray with a given sum K.

int lenLogsbArrSumK(int arr[],int n,int k){

    int Max_len = 0;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            sum += arr[j];

            if(sum == k){
                Max_len = max(Max_len,j-i+1);
            }
        }
    }
    return Max_len;
}


// 31. Given an array, find two numbers whose sum is closest to zero.

int NumSumCloseZero(int arr[],int n){
    int curr_sum = 0;
    int sum_near_zero = INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            curr_sum = arr[i] + arr[j];
            
            if(abs(curr_sum) < abs(sum_near_zero)){
                sum_near_zero = curr_sum;
            }

        }
    }
    return sum_near_zero;
}


// 32. Find the triplet in an array whose sum is zero.

void tripletSumZero(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                sum = arr[i] + arr[j] + arr[k];

                if(sum == 0){
                    cout<<"sum of : "<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" is:  "<<sum<<endl;
                }
            }
        }
    }
    
}

// 34. Find the first repeating element in an array.

int firstRepeatingElem(int arr[],int n){
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                 return arr[i];
            }
        }
    }
   return -1;
}


// 36. Given an array of 0s, 1s, and 2s, sort it without using any sorting algorithm (Dutch National Flag problem).


void DutchNationalFlag(int arr[],int n){
    int low = 0;
    int mid= 0;
    int high = n-1;

    while(low<high){
        if(arr[mid] == 0){
            int temp = arr[mid];
            arr[mid] = arr[low];
            arr[low] = temp;
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }else{

            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        
        }
    }
}


// 37. Find the maximum product subarray.

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
// 38. Find the equilibrium index of an array (where sum of left elements = sum of right elements).

int equilibriumIndex(int arr[],int n){
   int total_sum = 0;
   for(int i=0 ;i<n ;i++){
    total_sum += arr[i];
   }

   int left_sum = 0;
   for(int i=0;i<n;i++){
    int right_sum = total_sum - left_sum - arr[i];

    if(left_sum == right_sum){
        return i;
    }
    left_sum += arr[i];
   }

   return -1;
=======
#include <iostream>
#include <climit>
using namespace std;

// 18. Find the sum of all positive numbers in an array.

void sumPositive(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        if(arr[i] > 0){
            sum += arr[i];
        }
    }
    return sum;
}


// 19. Find the sum of all negative numbers in an array.
void sumNegitive(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        if(arr[i] < 0){
            sum += arr[i];
        }
    }
    return sum;
}



// 20. Rotate an array to the right by k positions.

reverseArr(int arr[],int start,int end){
    int i=0;
    int j=end;

    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void rotateArrbyD(int arr[],int n,int k)
{
    k= k%n;

    reverseArr(int arr[],0,n-1);
    reverseArr(int arr[],0,k-1);
    reverseArr(int arr[],k,n-1);

}

// 21. Rotate an array to the left by k positions.

void rotateArrbyD(int arr[],int n,int k)
{
    k= k%n;

    reverseArr(int arr[],0,k-1);
    reverseArr(int arr[],k,n-1);
    reverseArr(int arr[],0,n-1);

}


// 25. Find the majority element (appears more than n/2 times) in an array.

void majorityElem(int arr[],int n){
    int candidate = arr[0];
    int count = 1;
    for(int i=0;i<n;i++){
        if(arr[i] == candidate){
            count++;
        }else{
            count--;
        }
        if(count == 0){
            candidate = arr[i];
        }
    }
}

// 26. Rearrange array so that positive and negative numbers alternate.

void rearrange(int arr[], int n) {
    int i = 0, j = n - 1;

    while (i <= j) {
        if (arr[i] < 0) {
            i++;
        } else if (arr[j] >= 0) {
            j--;
        } else {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    int neg = 0, pos = i; 

    while (neg < pos && pos < n && arr[neg] < 0) {
        swap(arr[neg], arr[pos]);
        neg += 2;
        pos++;
    }
}



// 27. Find the subarray with the maximum sum (Kadane’s Algorithm).


void kadanes(int arr[],int n){
    int curr_sum = 0;
    int max_sum = INT_MIN;

    for(int i=0;i<n;i++){
        curr_sum += arr[i];

        max_sum = max(curr_sum,max_sum);

        if(curr_sum < 0){
            curr_sum =0;
        }

    }
    return max_sum;

}

// 28. Find the subarray with the minimum sum.

void MinKadanes(int arr[],int n){
    int curr_sum = 0;
    int min_sum = INT_MAX;

    for(int i=0;i<n;i++){
        curr_sum += arr[i];

        min_sum = min(curr_sum,min_sum);

        if(curr_sum > 0){
            curr_sum = 0;
        }
    }
    return min_sum;
}


// 29. Find the length of the longest subarray with sum 0.

int lenLngSubArr(int arr[],int n){
    int Max_len = 0;
    
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];

            if(sum == 0){
                Max_len = max(Max_len,j-i+1);
            }
        }
    }
    return Max_len;

}


// 30. Find the length of the longest subarray with a given sum K.

int lenLogsbArrSumK(int arr[],int n,int k){

    int Max_len = 0;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            sum += arr[j];

            if(sum == k){
                Max_len = max(Max_len,j-i+1);
            }
        }
    }
    return Max_len;
}


// 31. Given an array, find two numbers whose sum is closest to zero.

int NumSumCloseZero(int arr[],int n){
    int curr_sum = 0;
    int sum_near_zero = INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            curr_sum = arr[i] + arr[j];
            
            if(abs(curr_sum) < abs(sum_near_zero)){
                sum_near_zero = curr_sum;
            }

        }
    }
    return sum_near_zero;
}


// 32. Find the triplet in an array whose sum is zero.

void tripletSumZero(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                sum = arr[i] + arr[j] + arr[k];

                if(sum == 0){
                    cout<<"sum of : "<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" is:  "<<sum<<endl;
                }
            }
        }
    }
    
}

// 34. Find the first repeating element in an array.

int firstRepeatingElem(int arr[],int n){
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                 return arr[i];
            }
        }
    }
   return -1;
}


// 36. Given an array of 0s, 1s, and 2s, sort it without using any sorting algorithm (Dutch National Flag problem).


void DutchNationalFlag(int arr[],int n){
    int low = 0;
    int mid= 0;
    int high = n-1;

    while(low<high){
        if(arr[mid] == 0){
            int temp = arr[mid];
            arr[mid] = arr[low];
            arr[low] = temp;
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }else{

            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        
        }
    }
}


// 37. Find the maximum product subarray.

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
// 38. Find the equilibrium index of an array (where sum of left elements = sum of right elements).

int equilibriumIndex(int arr[],int n){
   int total_sum = 0;
   for(int i=0 ;i<n ;i++){
    total_sum += arr[i];
   }

   int left_sum = 0;
   for(int i=0;i<n;i++){
    int right_sum = total_sum - left_sum - arr[i];

    if(left_sum == right_sum){
        return i;
    }
    left_sum += arr[i];
   }

   return -1;
>>>>>>> Stashed changes
}