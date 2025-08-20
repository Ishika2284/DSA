<<<<<<< Updated upstream
#include <iostream>
using namespace std;


// Problem Statement (Basic Version)

// You’re given an array of prices where prices[i] is the price of a stock on day i.
// You want to maximize profit by buying one stock and then selling it later.

// 👉 You must buy before you sell.
// 👉 Return the maximum profit you can achieve.
// 👉 If no profit possible, return 0.

// 🧠 Example
// prices = [7, 1, 5, 3, 6, 4]

// Best choice:
//   Buy at 1
//   Sell at 6
// Profit = 6 - 1 = 5


int StockBuySell(int arr[],int n){
    int BestBuy = arr[0];
    int MaxProfit = 0;

    for(int i=0;i<n;i++){
        if(arr[i] > BestBuy){
            MaxProfit = max(MaxProfit,arr[i]-BestBuy);
        }
        BestBuy = min(BestBuy,arr[i]);
    }
    return MaxProfit;
}
int main(){
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices)/sizeof(prices[0]);
    int profit = StockBuySell(prices,n);
    cout<<"Max Profit achieved is : "<<profit<<endl;

    return 0;
}

//Binary Exponentiation

// Step 1: Write 13 in Binary

// 13 in binary = 1101
// (that’s 8 + 4 + 0 + 1)

// 🧠 How the Algorithm Uses Binary

// The while loop is reading the exponent bit by bit:

// If the bit is 1 (odd) → multiply ans by current a.

// Always square a (because each step moves to the next binary digit).

// Shift b right (divide by 2).


int BinaryExp(int x,int n){
    if(n == 0) return 1;
    if(x == 1) return 1;
    if(x == 0) return 0;
    if(x == -1 && n%2==0) return 1;
    if(x == -1 && n%2!=0) return -1;


    int BinaryForm = n;
    if(BinaryForm < 0){
        x = 1/x;
        BinaryForm = -BinaryForm;
    }
    int ans = 1;

    while(BinaryForm > 0){
        if(BinaryForm%2 == 1){
            ans *= x;
        }
        x *= x;
        cout<<"x is : "<<x<<endl;
        BinaryForm /= 2;
        cout<<"Binary form now is : "<<BinaryForm<<endl;

    }
    return ans;
}

int main(){
    int x , n;
    cout<<"enter Base Number : ";
    cin>>x;
    cout<<"Power you want the Base in: ";
    cin>>n;
    int result = BinaryExp(x,n);
    cout<<x<<" power " <<n <<" is : "<<result<<endl;
    return 0;

=======
#include <iostream>
using namespace std;


// Problem Statement (Basic Version)

// You’re given an array of prices where prices[i] is the price of a stock on day i.
// You want to maximize profit by buying one stock and then selling it later.

// 👉 You must buy before you sell.
// 👉 Return the maximum profit you can achieve.
// 👉 If no profit possible, return 0.

// 🧠 Example
// prices = [7, 1, 5, 3, 6, 4]

// Best choice:
//   Buy at 1
//   Sell at 6
// Profit = 6 - 1 = 5


int StockBuySell(int arr[],int n){
    int BestBuy = arr[0];
    int MaxProfit = 0;

    for(int i=0;i<n;i++){
        if(arr[i] > BestBuy){
            MaxProfit = max(MaxProfit,arr[i]-BestBuy);
        }
        BestBuy = min(BestBuy,arr[i]);
    }
    return MaxProfit;
}
int main(){
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices)/sizeof(prices[0]);
    int profit = StockBuySell(prices,n);
    cout<<"Max Profit achieved is : "<<profit<<endl;

    return 0;
}

//Binary Exponentiation

// Step 1: Write 13 in Binary

// 13 in binary = 1101
// (that’s 8 + 4 + 0 + 1)

// 🧠 How the Algorithm Uses Binary

// The while loop is reading the exponent bit by bit:

// If the bit is 1 (odd) → multiply ans by current a.

// Always square a (because each step moves to the next binary digit).

// Shift b right (divide by 2).


int BinaryExp(int x,int n){
    if(n == 0) return 1;
    if(x == 1) return 1;
    if(x == 0) return 0;
    if(x == -1 && n%2==0) return 1;
    if(x == -1 && n%2!=0) return -1;


    int BinaryForm = n;
    if(BinaryForm < 0){
        x = 1/x;
        BinaryForm = -BinaryForm;
    }
    int ans = 1;

    while(BinaryForm > 0){
        if(BinaryForm%2 == 1){
            ans *= x;
        }
        x *= x;
        cout<<"x is : "<<x<<endl;
        BinaryForm /= 2;
        cout<<"Binary form now is : "<<BinaryForm<<endl;

    }
    return ans;
}

int main(){
    int x , n;
    cout<<"enter Base Number : ";
    cin>>x;
    cout<<"Power you want the Base in: ";
    cin>>n;
    int result = BinaryExp(x,n);
    cout<<x<<" power " <<n <<" is : "<<result<<endl;
    return 0;

>>>>>>> Stashed changes
}