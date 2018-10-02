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

int searchLL(Node* head,int data){
    Node* cur = head;
    int count=0;
    while(cur != NULL){
        count++;
        if(cur->data==data){
            return count;
        }
        cur=cur->next;
    }
    return -1;
}
int main(){
    //enter -1 for last number
    Node* head=createLL();
    //To search an element in link list use searchLL if not present it will return -1
    // otherwise it will return index of element in linked list
    int data;
    cout<<"enter the element data to be searched"<<endl;
    cin >> data;
    int index=searchLL(head,data);
    if (index==-1){
        cout<<"element not found"<<endl;
    }
    else{
        cout<<"element is present"<<endl;
    }
}