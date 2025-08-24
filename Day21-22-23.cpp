// #include <iostream>
// using namespace std;

// struct Node{
//     int data;
//     Node* next;
// };

// class SinglyLinkedList{

//     private:
//         Node* head;
//     public:
//         SinglyLinkedList(){
//             head = nullptr;
//         }

//         void insertAtBegining(int value){
//             Node* newNode = new Node();
//             newNode->data = value;
//             newNode->next = nullptr;

//             if(head == nullptr){
//                 head = newNode;
//             }else{
//                 newNode->next = head;
//                 head = newNode;
//             }
//         }

//         void insertAtLast(int value){
//             Node* newNode = new Node();
//             newNode->data = value;
//             newNode->next = nullptr;
//              if(head == nullptr){
//                 head = newNode;
//             }else{
//                 Node* temp = head;
//                 while(temp->next != nullptr){
//                     temp = temp->next;
//                 }
//                 temp->next = newNode;
//                 newNode->next = nullptr;

//             }
//         }

//         void DeleteNode(int value){

//             if(head == nullptr){
//                 cout<<"List is empty , no Element exist to be deleted!!"<<endl;
//                 return;
//             }
//             if(head->data == value){
//                 Node* temp = head;
//                 head = head->next;
//                 delete temp;
//                 cout<<value<<" got successfully deleted!!"<<endl;
//                 return;

//             }
//             Node* current = head;
//             Node* prev = nullptr;

//             while(current != nullptr){
//                 prev = current;
//                 current = current->next;
//             }
//             if(current == nullptr){
//                 cout<<"element to be deleted not exist in the List"<<endl;
//             }
//             prev->next = current->next;
//             delete current;
//             cout<<value<<"Deleted Successfully !!"<<endl;
//         }

//         void Display(){
//             Node* temp = head;
//             if(head == nullptr){
//                 cout<<"List is empty!!"<<endl;
//             }

//             while(temp->next != nullptr){
//                cout<< temp->data <<" ";
//                temp = temp->next;
//             }
//         }

// };

//DOUBLY LINKED LIST

// struct Node{
//     int data;
//     Node* next;
//     Node* prev;
// };
// class DoublyLinkedList{
//     private:
//         Node* head;
//     public:
//         DoublyLinkedList(){
//             head = nullptr;
//         }

//         void insertAtBegining(int value){
//             Node* newNode = new Node();
//             newNode->data = value;
//             newNode->next = nullptr;
//             newNode->prev = nullptr;

//             if(head == nullptr){
//                 head = newNode;
//             }
//             else{
//                 newNode->next = head;
//                 head->prev = newNode;
//                 head = newNode;
//             }
//         }

//         void insertAtLast(int value){
//               Node* newNode = new Node();
//             newNode->data = value;
//             newNode->next = nullptr;
//             newNode->prev = nullptr;

//              if(head == nullptr){
//                 head = newNode;
//                 return;
//             }
//             else{
//                 Node* temp = head;
//                 while(temp->next != nullptr){
//                     temp = temp->next;
//                 }
//                 temp->next = newNode;
//                 newNode->prev = temp;
//                 newNode->next = nullptr; 
//             }
//         }

//         void DeleteNode(int value){
//             if(head == nullptr){
//                 cout<<"List is empty!!"<<endl;
//                 return;
//             }
//             if(head->data == value){
//                 Node* temp = head;
//                 head = head->next;
//                 delete temp;
//                 cout<<value<<"deleted Successfully!!"<<endl;
//                 return;
//             }
//             Node* current = head;
//             Node* previous = nullptr;

//             while(current->next != nullptr && current->data !=  value){
//                 previous = current;
//                 current = current->next;
//             }
//             if(current == nullptr){
//                 cout<<"ELement to be deleted not exist in the List!!!"<<endl;
//             }
//             if(current->next != nullptr){
//                current->next->previous = current->previous;
//             }
//             if(current->previous != nullptr){
//                  current->previous->next = current->next;
//             }
//             delete current;
//         }

//         void display(){
//             if(head == nullptr){
//                 cout<<"List is empty!!"<<endl;
//             }else{
//                 Node* temp = head;
//                 cout<<"Linked List : "<<endl;
//                 while(temp->next != nullptr){
//                     cout<<temp->data<" ";
//                     temp = temp->next;
//                 }
//             }
//         }

// };


//CIRCULAR LINKED LIST(SINGLY)

// struct Node{
//     int data;
//     Node* next;
// }
// class CircularLinkedList{

//     private:
//         Node* head;
//     public:

//         CircularLinkedList(){
//             head = nullptr;
//         }

//         void insertAtBegining(int value){
//             Node* newNode = new Node();
//             newNode->data = value;
//             newNode->next = nullptr;
//             if(head == nullptr){
//                 head = newNode;
//                 head->next = head;
//             }
//             else{
//                 Node* temp = head;
//                 while(temp->next != head){
//                     temp=temp->next;
//                 }
//                 temp->next = newNode;
//                 newNode->next = head;
//                 head = newNode;
//             }
//         }

//         void insertAtLast(int value){
//              Node* newNode = new Node();
//             newNode->data = value;
//             newNode->next = nullptr;
//             if(head == nullptr){
//                 head = newNode;
//                 head->next = head;
//             }else{
//                 Node* temp = head;
//                 while(temp->next != head){
//                     temp= temp->next;
//                 }
//                 temp->next= newNode;
//                 newNode->next = head;
//             }
//         }

//         void deleteNode(int value){
//             if(head == nullptr){
//                 cout<<"List is empty!!"<<endl;
//                 return;
//             }
//             if(head->data == value && head->next == head){
//                 Node* temp = head;
//                 head = head->next;
//                 delete temp;
//                 cout<<value<<" deleted Sucessfully !!"<<endl;
//                 return;
//             }
//             Node* current = head;
//             Node* prev = nullptr;
            
//             do{

//                 if(current->data == value){
//                     if(prev != nullptr){
//                         prev->next = current->next;
//                     }else{
//                         Node* temp = head;
//                         while(temp->next != head){
//                             temp= temp->next;
//                         }
//                         head = head->next;
//                        temp->next = head;
//                     }
//                     delete current;
//                     cout<<value<<"DELETED SUCCESSFULLY!!"<<endl;
//                 }
//                 prev = current;
//                 current = current->next;
//             }while(current != head);

//             cout<<"Value "<<value<<" NOT FOUND!!"<<endl;
//         }


//           void display(){
//             if(head == nullptr){
//                 cout<<"List is empty!!"<<endl;
//             }else{
//                 Node* temp = head;
//                 cout<<"Linked List : "<<endl;
//                 while(temp->next != head){
//                     cout<<temp->data<" ";
//                     temp = temp->next;
//                 }
//             }
//         }
// };

Node* reverseIterative(Node* head){
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    if(head->next == nullptr){
        cout<<head->data<<" ";
        return;
    }else{
        next = current->next;
        current->next = prev;
        prev= current;
        current = next;
    }
    return prev;
}

Node* FindMiddle(Node* head){
    Node* slow = head;
    Node* fast = head;
    if(head == nullptr){
        return null;
    }else{
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
}

bool DetectCycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    if(head == nullptr){
        return null;
    }else{
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(slow == fast){
            return true;
        }
        return false;
    }
}