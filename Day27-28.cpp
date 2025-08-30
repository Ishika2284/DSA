#include <iosteam>
using namespace std;

#define SIZE 0

class PriorityQueue{
    private:
        int arr[SIZE];
        int priority[SIZE];
        int n;

    public:
        PriorityQueue(){
            n=0;
        }

        bool isEmpty(){
            return (n==0);
        }

        bool isFull(){
            return (n==SIZE-1);
        }

        void enqueue(int value,int p){
            if(isFull()){
                cout<<" Queue OVERFLOW !!! "<<endl;
            }
            else{
                arr[n] = value;
                priority[n] = p;
                n++;
                cout<<value<<" has been enqueued with priority "<<priority[n]<<endl;
            }
        }

        void dequeue(){
            if(isEmpty()){
                cout<<"queue UNDERFLOW!!"<<endl;
            }
            
                int MaxPriorityIndex= 0;
                for(int i=0;i<n;i++){
                    if(priority[i]>priority[MaxPriorityIndex]){
                        MaxPriorityIndex = i;
                    }
                    cout<<arr[MaxPriorityIndex]<<" Has been dequeued with priority "<<priority[i]<<endl;
                    for(i=0;i<n-1;i++){
                        arr[i] = arr[i+1];
                        priority[i] = priority[i+1];
                    }
                     n--;
                }
            
        }

        void display(){
            if(isEmpty()){
                cout<<"queue UNDERFLOW!!"<<endl;
            }
            for(int i=0i<n;i++){
                cout<<arr[i]<<"have priority of "<<priority[i]<<endl;
            }
            cout<<endl;
        }

};

//LINKEDLIST IMPLEMENTATION
struct Node{
    int data;
    int priority;
    Node* next;
};

class PqueueLL{

    private:
        Node* front;
    public:
        PqueueLL(){
            front = nullptr;
        }

        bool isEmpty(){
            return (front == nullptr);
        }

        void enqueue(int value,int p){
            Node* newNode = new Node();
            newNode->data = value;
            newNode->priority = p;
            newNode->next = nullptr;

            if(front == nullptr || front->priority < p){
                newNode->next = front;
                front = newNode;
            }
            else{
                Node* temp = front;
                while(temp->next != nullptr && temp->next->priority >= p){
                    temp = temp->next;
                }
                newNode->next = temp->next;
                temp->next = newNode;

            }
            cout<<value<<" Has been successfully enqueued in the list !!"<<endl;
        }

        void dequeue(){
            if(isEmpty()){
                cout<<"QUEUE UNDERFLOW !!!"<<endl;
            }
            Node* temp =  front;
            cout<<front->data<<" Has been sucessfully dequeued from the queue !!"<<endl;
            front = front->next;
            delete temp;


        }

        void peek(){
             if(isEmpty()){
                cout<<"QUEUE UNDERFLOW !!!"<<endl;
            }
            else{
                cout<<front->data<<" has the highest priority of the queue"<<endl;

            }
        }

        void display(){
             if(isEmpty()){
                cout<<"QUEUE UNDERFLOW !!!"<<endl;
            }
            else{
                Node* temp = front;
                while(temp->next != nullptr){
                    cout<<temp->data<< " ";
                    temp= temp->next;
                }
            }
        }

};