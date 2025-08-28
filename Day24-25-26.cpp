#include <iostream>
using namespace std;
# define SIZE 5

class Stack{

    private:
        int arr[SIZE];
        int top;

    public:
        Stack(){
            top = -1;
        }

        bool isFull(){
            if(top ==  SIZE-1){
                cout<<"Stack is full NO SPACE!!"<<endl;
                return true;
            }
            return false;
        }

         bool isEmpty(){
            if(top == -1){
                cout<<"Stack is EMPTY!!"<<endl;
                return true;
            }
            return false;
        }

        void Push(int value){
            if(isFull()){
                cout<<"Stack Overflow!!"<<endl;
                return;
            }
            else{
                arr[++top] = value;
                cout<<value<<" added to stack at top!!"<<endl;
            }
        }

         void Pop(){
            if(isEmpty()){
                cout<<"Stack Underflow!!"<<endl;
                return;
            }
            else{
                cout<<arr[top--]<<" removed from stack!!"<<endl;
            }
        }

        void peek(){
            if(isEmpty()){
                return;
            }else{
                cout<<arr[top]<<"is the element at top!!"<<endl;
            }
        }

        void Display(){
            if(isEmpty()){
                return;
            }else{
                for(int i=0;i<=top;i++){
                    cout<<arr[i]<<" ";
                }
            }
        }
};

int main(){
    Stack st;

    st.Push(10);
    st.Push(20);
    st.Push(30);
    st.Push(40);
    st.Push(50);

    st.Display();
    st.isFull();

    st.Pop();
    st.Pop();
    st.Display();

    return 0;

}

//LINKED LIST IMPLEMENTATION

struct Node{
    int data;
    Node* next;
};
class Stack{
    private:
        Node* top;
    public:
        Stack(){
            top = nullptr;
        }

        bool isEmpty(){
            return (top == nullptr);
        }

        void Push(int value){
            Node* newNode = new Node();
            newNode->data = value;
            newNode->next = top;

            top = newNode;
            cout<<value<<" Added to List !!"<<endl;
        }

        void Pop(){
            if(isEmpty()){
                cout<<"NO element to delete!!"<<endl;
                return;
            }else{
                Node* temp =  top;
                cout << top->data << " popped from stack" << endl;
                 top = top->next;
                 delete temp; 
            }
        }

        void Peek() {
        if (isEmpty()) {
            cout << "Stack is EMPTY!!" << endl;
            return;
        }
        cout << top->data << " is at the top of stack" << endl;
    }

    void Display() {
        if (isEmpty()) {
            cout << "Stack is EMPTY!!" << endl;
            return;
        }
        cout << "Stack elements: ";
        Node* temp = top;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }


};

int main(){
    Stack st;

    st.Push(10);
    st.Push(20);
    st.Push(30);
    st.Push(40);
    st.Push(50);

    st.Display();
   

    st.Pop();
    st.Pop();
    st.Display();

    return 0;

}



#define SIZE 5

class Queue{

    private:
    int arr[SIZE];
    int front ,rear;

    public:
        Queue(){
            front = rear = -1;
        }

        bool isEmpty(){
            return (front == rear == -1);
        }

        bool isFull(){
            return (rear == SIZE-1);
        }

        void Enqueue(int value){
            if(isFull()){
                cout<<"Array is Full!!"<<endl;
            }else{
                if(front == -1) front =0;
                arr[++rear] = value;
                cout<<value<<"element inserted in array !!"<<endl;
            }
        }

        void dequeue(){
            if(isEmpty()){
                cout<<"Array is Empty !!"<<endl;
            }
            else{
                cout<<arr[front]<<"has been removed from array !!"<<endl;
                if(front == rear){
                    front = rear = -1;
                }else{
                    front++;
                }
            }
        }

};

//USING LINKED LIST

struct Node{

    int data;
    Node* next;
};
class queueLL{

    private:
    Node* front ;
    Node* rear;

    public:
        queueLL(){
            front = nullptr;
            rear = nullptr;
        }


        bool isEmpty(){
            return (front == nullptr);
        }

        void Enqueue(int value){
            Node* newNode = new Node();
            newNode->data = value;
            newNode->next = nullptr;

            if( rear == nullptr){
                front = rear = newNode;
            }
            else{
            rear->next = newNode;
            rear = newNode;
            }
            cout<<value<<"has been added to the List "<<endl;

        }

        void dequeue(){
            if(isEmpty()){
                cout<<"List is Empty!!"<<endl;
            }
            else{
                cout<<front->data<<"is removed from the list !!"<<endl;
                Node* temp = front;
                front = front->next;
                if(front == nullptr){
                    rear = nullptr;
                }
                delete temp;
            }
        }

        void peek(){
            if(isEmpty()){
                cout<<"No Element Exist!!"<<endl;
            }else{
                cout<<front->data<<" is the first element "<<endl;
            }
        }

        void display(){
        if(isEmpty()){
                cout<<"No Element Exist!!"<<endl;
            }else{
                Node* temp = front;
                while(temp != nullptr){
                    cout<<temp->data<<" ";
                    temp = temp->next;

                }
            }
            cout<<endl;
        }
};

int main(){
    queueLL q;
    q.isEmpty();
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(40);
    q.Enqueue(50);

    q.display();

    q.dequeue();
    q.dequeue();

    q.display();


    return 0;
}