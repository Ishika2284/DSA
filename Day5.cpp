<<<<<<< Updated upstream
#include <iostream>
using namespace std;

//SELECTION SORT

void SelectionSort(int arr[],int n ){
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
}


//BUBBLE SORT

void BubbleSort(int arr[],int n){
    int i , j ,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i+1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

//INSERTION SORT

void InsertionSort(int arr[],int n){
    int j , key ,i;
    for(i=1;i<n;i++){
        key = arr[i];
        j= i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
         arr[j+1] = key;
    }
   
}
int main()
{
    int n;
    cout<<"enter the no of elements in the array : ";
    cin>>n;

    int arr[n];

    cout<<"enter elements for array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<"element at index "<<i<<" is : ";
        cin>>arr[i];
    }

    InsertionSort(arr,n);

    cout<<"After sorting : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    return 0;
=======
#include <iostream>
using namespace std;

//SELECTION SORT

void SelectionSort(int arr[],int n ){
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
}


//BUBBLE SORT

void BubbleSort(int arr[],int n){
    int i , j ,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i+1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

//INSERTION SORT

void InsertionSort(int arr[],int n){
    int j , key ,i;
    for(i=1;i<n;i++){
        key = arr[i];
        j= i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
         arr[j+1] = key;
    }
   
}
int main()
{
    int n;
    cout<<"enter the no of elements in the array : ";
    cin>>n;

    int arr[n];

    cout<<"enter elements for array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<"element at index "<<i<<" is : ";
        cin>>arr[i];
    }

    InsertionSort(arr,n);

    cout<<"After sorting : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    return 0;
>>>>>>> Stashed changes
}