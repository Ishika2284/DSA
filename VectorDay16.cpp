#include <iostream>
#include <vector>
#include <climit>
using namespace std;


// What is a Vector?

// Dynamic array (resizable, unlike normal arrays).

// Defined in <vector> header and inside std namespace.

// Elements stored in contiguous memory.

// Automatically manages memory (grows when needed).

// ✅ Declaration & Initialization
// vector<int> v;                  // empty
// vector<int> v(5);               // size 5, default values (0 for int)
// vector<int> v(5, 10);           // size 5, all elements = 10
// vector<int> v = {1, 2, 3, 4};   // initializer list

// ✅ Common Functions
// Insertion & Deletion
// v.push_back(10);         // insert at end
// v.pop_back();            // remove last element
// v.insert(v.begin()+2, 7); // insert 7 at index 2
// v.erase(v.begin()+3);     // remove element at index 3
// v.clear();                // remove all elements

// Accessing Elements
// v[0];          // direct access (no check)
// v.at(2);       // safe access (with bounds check)
// v.front();     // first element
// v.back();      // last element

// Properties
// v.size();      // number of elements
// v.capacity();  // memory allocated (>= size)
// v.empty();     // check if vector is empty
// v.resize(10);  // resize vector to size 10
// v.swap(v2);    // swap contents with another vector

// Iteration
// for(int i=0;i<v.size();i++) cout<<v[i];        // normal loop
// for(auto x : v) cout<<x;                       // range-based loop
// for(auto it = v.begin(); it!=v.end(); it++) cout<<*it; // iterator

// ✅ Complexity (Important in Interviews)

// Access element (v[i]) → O(1)

// Insert/Remove at end (push_back, pop_back) → O(1) amortized

// Insert/Remove in middle → O(n) (because shifting needed)

// Resize → O(n) (copies elements into new memory)

// ✅ Key Points to Remember

// Contiguous storage → works with pointers.

// Capacity vs Size:

// size = number of elements

// capacity = actual allocated memory (≥ size).

// Iterator invalidation:

// If vector resizes → all iterators become invalid.

// insert() and erase() may also invalidate iterators after that point.

// Always prefer emplace_back() over push_back() for objects → faster (constructs in place).


//Level 1: Basics

// Take input and print:
// Write a program that takes N integers as input, stores them in a vector, and prints them in the same order.

// void PrintVec(vector<int> &vec){
//     for(int val : vec){
//         cout<<val<<" ";
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter number of elements : ";
//     cin>>n;

//     vector<int> vec;
//     for(int i=0;i<n;i++){
//         int x;
//         cout<<"enter element for index "<<i<<" : ";
//         cin>>x;
//         vec.push_back(x);
//     }
//     cout<<"elements in vector are : "<<endl;

//     PrintVec(vec);
//     cout<<"size: "<<vec.size()<<endl;
//     cout<<"capacity : "<<vec.capacity()<<endl;
//     return 0;
// }
// Print in reverse:
// Input N numbers in a vector and print them in reverse order.

void Reverse(vector<int> &vec){
    int i = 0;
    int j = vec.size() -1;
    while(i<j){
        int temp = vec[i];
        vec[i] = vec[j];
        vec[j] = temp;
        i++;
        j--;
    }
}

// int main(){
//     int n;
//     cout<<"Enter number of elements : ";
//     cin>>n;

//     vector<int> vec;
//     for(int i=0;i<n;i++){
//         int x;
//         cout<<"enter element for index "<<i<<" : ";
//         cin>>x;
//         vec.push_back(x);
//     }
//     cout<<"elements in vector are after reverse : "<<endl;

//     Reverse(vec);

//       for(int val : vec){
//         cout<<val<<" ";
//     }

//     cout<<"size: "<<vec.size()<<endl;
//     cout<<"capacity : "<<vec.capacity()<<endl;
//     return 0;
// }

// Find maximum and minimum:
// Find the largest and smallest elements in a vector.

// void MaxAndMinElem(vector<int> &vec){
//     int Max= vec[0];
//     int Min = vec[0];

//     for(int val : vec){
//         if(val > Max){
//             Max = val;
//         }
//         if(val < Min){
//             Min = val;
//         }
//     }
//     cout<<"Maximum element in vector is  : "<<Max<<endl;
//     cout<<"Minimum element in vector is  : "<<Min<<endl;
// }


// int main(){
//     int n;
//     cout<<"Enter number of elements : ";
//     cin>>n;

//     vector<int> vec;
//     for(int i=0;i<n;i++){
//         int x;
//         cout<<"enter element for index "<<i<<" : ";
//         cin>>x;
//         vec.push_back(x);
//     }
//     cout<<"Min and Mex elements in vector are : "<<endl;

//     MaxAndMinElem(vec);

//     return 0;
// }
// Sum of elements:
// Compute the sum of all numbers stored in a vector.

// int SumCompute(vector<int> &vec){
//     int sum = 0;
//     for(int val : vec){
//         sum += val;
//     }
//     return sum;
// }

// int main(){
//     int n;
//     cout<<"Enter number of elements : ";
//     cin>>n;

//     vector<int> vec;
//     for(int i=0;i<n;i++){
//         int x;
//         cout<<"enter element for index "<<i<<" : ";
//         cin>>x;
//         vec.push_back(x);
//     }
//     cout<<"Sum of elements in vector are : "<<endl;

//     int finalSum = SumCompute(vec);
//     cout<<"Total of vector is  : "<<finalSum;

//     return 0;
// }

// Level 2: Manipulation

// Erase an element:
// Remove the element at index k from a vector.

// void RemoveAtK(vector<int> &vec,int k){
//    if(k>=0 && k<vec.size){
//     vec.erase(vec.begin()+k);
//    }else{
//     cout<<"Index Provided Out of range";
//    }

// }

// // Remove all occurrences:
// // Remove all occurrences of a given number from a vector.

// void RemoveOcc(vector<int> &vec,int num){
//     int index = 0;
//     for(int i=0;i<vec.size();i++){
//         if(vec[i] == num){
//             vec.erase(vec.begin() + i);
//             i--;
//         }
//     }
// }

// // Insert at position:
// // Insert a number x at index k in a vector.

// void Insertelem(vector<int> &vec,int k,int x){
//    if(k>=0 && k<vec.size()){
//     vec.insert(vec.begin()+k,x);
//    }else{
//     cout<<"No such INdex found!!";
//    }
// }

// // Count frequency:
// // Count how many times a given number occurs in the vector.


// void CountOcc(vector<int> &vec,int num){
//     int count = 0;
//     for(int val :vec){
//         if(val == num){
//             count++;
//         }
//     }
//     return count;
// }

// // Sort a vector:
// // Sort all elements of the vector in ascending order.

// void Sorting(vector<int> &vec){
    
//     int i , j ,key ;
//     for(int i=0;i<vec.size();i++){
//         key = vec[i];
//         j = i-1;

//         while(j>=0 && vec[j]>key){
//             vec[j+1] = vec[j];
//             j--;
//         }
//         vec[j+1] = key;
//     }

   
// }



// 🔹 Level 3: Slightly Challenging

// Unique elements:
// Remove duplicates from a vector.

int RemoveDuplicates(vector<int> &v){
    int index = 0;
    for(int i=0;i<v.size();i++){
        bool isDuplicate = false;
        

        for(int j=0;j<index;j++){
            if(v[i] == v[j]){
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate){
            v[index] = v[i];
            index++;
        }

     
    } 
    return index; 
}


int main(){
    vector<int> v = {1,2,5,1,2};
    int newSize = RemoveDuplicates(v);
    cout << "After duplicates removed: ";
    for(int i = 0; i < newSize; i++) cout << v[i] << " ";
    cout << endl;
}

// Second largest element:
// Find the second largest element in the vector.

int Secondlargest(vector<int> &v){
    int Largest = INT_MIN;
    int SecLargest = INT_MIN;
    if(v.size()<2){
        cout<<"Not Enough Elements!!"
        return -1;
    }

    for(int i=0;i<v.size();i++){
        if(v[i] > Largest){
            SecLargest = Largest;
            Largest = v[i];
        }
        else if(v[i] > Largest && v[i] < SecLargest){
            SecLargest = v[i];
        }
    }
    return SecLargest;

}

// Rotate a vector:
// Rotate the vector by k positions to the left.

void RotatebyK(vector<int> &v,int k){
    int n = v.size();
    if(n==0){
        cout<<"No Element FOUND!!"
        return -1;
    }

    k = k%n;

    Reverse(v,0,v.size());
    Reverse(v,0,k-1);
    Reverse(v,k,v.size());


}

// Merge two vectors:
// Merge two sorted vectors into one sorted vector.

void MergeArr(vector<int> v1,int n1,vector<int> v2,int n2){
    int i = n1-1;
    int j = n2-1;
    int k = n1+n2-1;

    while(i>=0 && j>=0){
        if(v1[i] > v2[j]){
            v1[k++] = v1[i--];
        }
        else if(v1[i] < v2[j]){
            v1[k--] = v2[j--];
        }
    }
    while(i>=0){
        v1[k--] = v1[i--];
    }
    while(j>=0){
        v1[k--] = v2[j--];
    }
}


// Palindrome check:
// Check if the vector reads the same forward and backward.

bool Palindrome(vector<int> &v){
    bool isPalindrome = true;

    int i = 0;
    int j = v.size()-1;

    while(i<=j){
        if(v[i++] != v[j--]){
            isPalindrome = false;
            break;
        }
    }
    return isPalindrome;

}