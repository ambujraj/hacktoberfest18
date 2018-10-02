#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data = d;
        next = NULL;
    }
};

Node* insertAtEnd(Node* head, int x, Node* &tail){
    if (head == NULL){
        head = new Node(x);
        tail = head;
        return head;
    }

    tail->next = new Node(x);
    tail = tail->next;
    return head;
}

Node* createLL(){
    int x;
    Node* head = NULL;
    Node* tail = NULL;

    while(true){
        cin >> x;
        if (x == -1) break;
        head = insertAtEnd(head, x, tail);
    }
    return head;
}

void printLL(Node* head){
    Node* cur = head;
    while(cur != NULL){
        cout << cur->data << "-->";
        cur = cur->next;
    }
    cout << endl;
}
int main(){
    //enter -1 for last number
    Node* head=createLL();
    //To traverse use printLL
    printLL(head);
}