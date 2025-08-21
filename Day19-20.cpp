#include <iostream>
using namespace std;

// Write recursive function that takes input as a number
// and descends down to 1 from the passed number,
// followed by ascending, for example, if number passed is
// 7, the output should be as follows :
// 7, 6, 5, 4, 3, 2, 1, 1, 2, 3, 4, 5, 6, 7

void ascend(int n){
    if(n>0){
        cout<<n<<" ";
        ascend(n-1);
        cout<<n<<" ";
    }
}
int main(){
    int num = 7;
   ascend(num);
   
    return 0;
}

// Write C code using recursive approach to print the Fibonacci sequence

int Fibonacci(int n){
   if(n<=0){
    return n;
   }else{
  return Fibonacci(n-1)+Fibonacci(n-2);}
}

int main(){
    int n;
  cout<<"enter the number till you want the series : ";
  cin>>n;

  for(int i=0;i<n;i++){
    cout<<Fibonacci(i);
  }

    return 0;
}

//1. Factorial of N
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)  // base case
        return 1;
    return n * factorial(n - 1); // recursive call
}

int main() {
    cout << factorial(5); // Output: 120
}

//2. Print 1 to N and N to 1
#include <iostream>
using namespace std;

void print1toN(int n) {
    if (n == 0) return;
    print1toN(n - 1);   // first recursive call
    cout << n << " ";   // then print
}

void printNto1(int n) {
    if (n == 0) return;
    cout << n << " ";   // print first
    printNto1(n - 1);   // then recursive call
}

int main() {
    cout << "1 to N: ";
    print1toN(5);  // Output: 1 2 3 4 5
    cout << "\nN to 1: ";
    printNto1(5);  // Output: 5 4 3 2 1
}

//3. Check if Array is Sorted
#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    if (n == 1) return true; // base case
    if (arr[n - 1] < arr[n - 2]) return false;
    return isSorted(arr, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    cout << (isSorted(arr, 5) ? "Sorted" : "Not Sorted");
}

//4. Reverse a String
#include <iostream>
using namespace std;

void reverseString(string &s, int left, int right) {
    if (left >= right) return;
    swap(s[left], s[right]);
    reverseString(s, left + 1, right - 1);
}

int main() {
    string s = "hello";
    reverseString(s, 0, s.size() - 1);
    cout << s; // Output: olleh
}

//5. Palindrome Check
#include <iostream>
using namespace std;

bool isPalindrome(string s, int left, int right) {
    if (left >= right) return true;
    if (s[left] != s[right]) return false;
    return isPalindrome(s, left + 1, right - 1);
}

int main() {
    string s = "madam";
    cout << (isPalindrome(s, 0, s.size() - 1) ? "Palindrome" : "Not Palindrome");
}

//6. Tower of Hanoi
#include <iostream>
using namespace std;

void towerOfHanoi(int n, char from, char to, char aux) {
    if (n == 0) return;
    towerOfHanoi(n - 1, from, aux, to); 
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    towerOfHanoi(n - 1, aux, to, from);
}

int main() {
    towerOfHanoi(3, 'A', 'C', 'B');
}

//7. Print All Subsequences
#include <iostream>
using namespace std;

void subsequences(string s, string output, int index) {
    if (index == s.size()) {
        cout << output << endl; // print one subsequence
        return;
    }
    // Choice 1: exclude current char
    subsequences(s, output, index + 1);

    // Choice 2: include current char
    subsequences(s, output + s[index], index + 1);
}

int main() {
    string s = "abc";
    subsequences(s, "", 0);
}