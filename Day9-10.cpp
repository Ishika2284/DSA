#include <iostream>
using namespace std;

2nd largest

int SecondLargest(int arr[],int n){
    int Maxelem = arr[0];
    
    bool found = false;
    for(int i=1;i<n;i++){
        if(arr[i]>Maxelem){
            Maxelem = arr[i];
        }
    }
 int SecondLar = arr[0] ;
      for (int i = 0; i < n; i++) {
        if (arr[i] != Maxelem && arr[i] > SecondLar) {
            SecondLar = arr[i];
        }
    }
    return SecondLar;
}
int main(){
    int arr[] = {12,32,43,11,1,90,87,67};
    int n= 8 ;
    int result = SecondLargest(arr,n);
    cout<<"Second Largest Element is : "<<result<< " ";

    return 0;

}


3rd largest 


int ThirdLargest(int arr[],int n){
    int Max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>Max){
            Max = arr[i];
        }
    }

    int Secmax = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] != Max && arr[i] > Secmax){
            Secmax = arr[i];
        }
    }

    int ThirdMax = arr[0];
     for(int i=0;i<n;i++){
        if(arr[i] != Max && arr[i] != Secmax && arr[i] > ThirdMax){
            ThirdMax = arr[i];
        }
    }

    return ThirdMax;
}
int main(){
    int arr[] = {12,32,43,11,1,90,87,67};
    int n= 8 ;
    int result = ThirdLargest(arr,n);
    cout<<"Third Largest Element is : "<<result<< " ";

    return 0;

}


Check array is sorted or not

bool CheckSorted(int arr[],int n){
  
   bool isSorted = true;
   for(int i= 0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            isSorted = false;
            break;
        }
   }
   return isSorted;

}

bool CheckSorted(int arr[], int n) {
    int i = 0;
    int j = 1;

    while (j < n) {
        if (arr[i] > arr[j]) {
            return false; 
        }
        i++;
        j++;
    }
    return true; 
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    bool result = CheckSorted(arr,n);
    if(result){
        cout<<"array given in sorted!!";
    }else{
        cout<<"Not Sorted!!";
    }

    return 0;
}



Count pair sum is even and odd


void countPairEvenOrOdd(int arr[],int n){
    int EvenCount = 0;
    int OddCount = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]+arr[j])%2 == 0){
                cout<<arr[i]<<" And "<<arr[j]<<" makes up the even pair sum "<<endl;
                EvenCount++;
            }
            else{
                 cout<<arr[i]<<" And "<<arr[j]<<" makes up the Odd pair sum "<<endl;
                OddCount++;
            }
        }

    }
    cout<<"Even Sum Pair Count is : "<<EvenCount<<endl;
     cout<<"Odd Sum Pair Count is : "<<OddCount<<endl;
}

int main(){
    int arr[] = {1,2,4,3};
    int n =4;
    countPairEvenOrOdd(arr,n);
    return 0;
}


Frequency count of target

int FreqOfTarget(int arr[],int n, int target){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            count++;
        }
    }
    return count;
}

int main(){
    int arr[] = {1,2,2,4,3,3,2,1};
    int n = 8;
    int final = FreqOfTarget(arr,n,2);
    cout<<"Frequency count of target 2 is : "<<final<<endl;

    return 0;
}



Remove duplicates


int removeDuplicates(int arr[],int n){
    bool isDuplicate = false;
    int index = 0;
    for(int i=0;i<n;i++){

        for(int j=0;j<index;j++){
            if(arr[i] == arr[j]){
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate){
            arr[index] = arr[i];
            index++; 
        }
    }
    return index;
}

int main(){
      int arr[] = {1,2,5,1,2};
    int n = 5;
    int newSize = removeDuplicates(arr, n);
    cout << "After duplicates removed: ";
    for(int i = 0; i < newSize; i++) cout << arr[i] << " ";
    cout << endl;
}


Move zeroes to end

void MoveZeros(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i] == 0 && arr[j] != 0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
         if(arr[j] == 0){
            j--;
        }
        if(arr[i] != 0){
            i++;
        }
    }
   
}

int main(){
      int arr[] = {1,2,0,5,0,0,1,2};
    int n = 5;
    MoveZeros(arr,n);
    cout << "After Moving Zeroes: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}


Rotate array


void RotateArray(int arr[],int n){
    int last  = arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = last;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n=5;
    RotateArray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


// Find missing number of array

void FindMissing(int arr[],int n){
    int total = (n+1)*(n+2)/2;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum+arr[i];
    }
    int missingNum = total - sum;
    cout<<"Missing Number is : "<<missingNum<<endl;
}

int main(){
    int arr[] = {1,2,4,5};
    int n = 4;
    FindMissing(arr,n);
    return 0;
}