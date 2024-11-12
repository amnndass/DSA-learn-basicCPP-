#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d){
    //create new node
    Node *temp = new Node(d);

    temp->next = head;
    head = temp;
}

void print(Node* head ){
    Node *temp = head;

    while(temp != NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void insertAtTail(Node* &tail, int d){
    //create new node
    Node *temp = new Node(d);

    tail->next = temp;
    tail = tail->next;

}

void insertNodeMiddle( Node * &head , int position , int d){
    //edge case (when position is 1) we call insert at head
    if(position == 1){
        insertAtHead(head, d);
        return;
    }


    //making temporary pointer
    Node *temp = head;
    //initially we are at the first node
    int cnt = 1;

    //pointing temp to the right side of the new node
    while(cnt > position-1){
        temp = temp->next;
        cnt++;
    }

    //edge case -- Insert at last position we call tail
    if(temp->next == NULL){
        insertAtTail(temp, d);
        return;
    }

    //making new node
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}

void deleteNode(Node* &head, int position){
    
    //edge case -->when position is 1 then we dont have previous node
    if(position == 1){
        //making temp pointer to delete form memory
        Node *temp = head;

        head = head->next;

        //deleting the node
        temp->next = NULL;
        delete temp;  
        return;
    }

    //normal case
    Node *prev = NULL;
    Node *curr = head;

    int cnt = 1;

    while(cnt < position){
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

int main(){
    
    Node* node1 = new Node(10);
    
    //cout << node1->data << endl;
    //insertAtHead(node1, 12);
    //insertAtHead(node1, 13);

    //tail pointer
    Node *tail = node1;
    Node *head = node1;
    
    //inserting
    insertAtTail(tail, 12);
    insertAtHead(head, 9);
    insertAtTail(tail, 4);
    insertAtHead(head, 3);

    //middle
    insertNodeMiddle(head, 2, 5);
    insertNodeMiddle(head, 1, 1);

    //problem-->
    //insertNodeMiddle(tail, head, 8, 89);
    
    //delete node
    deleteNode(head, 2);
    deleteNode(head, 1);

    print(head);
}