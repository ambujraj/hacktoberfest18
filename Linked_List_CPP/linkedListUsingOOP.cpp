#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
};
Node* findMid(Node* head){
    if(head==NULL){
        return head;
    }
Node* slow = head, *fast = head->next;
while(fast->next!=NULL&&fast->next->next!=NULL){
    slow = slow->next;
    fast = fast->next->next;
}
return slow;
}
Node* insert_at_beginning(Node* head, int data){
    Node* temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;
    return temp;
}

Node* insert_in_middle(Node* head, int data){
    Node* temp = new Node();
    temp->data = data;
    Node* mid = findMid(head);
    Node* temp2 = mid->next;
    mid->next = temp;
    temp->next = temp2;
    return head;
}

Node* insert_at_end(Node* head, int data){
    Node* temp2 = new Node();
    temp2->data = data;
    Node* temp = head;
    if(temp==NULL){
        temp2->next = NULL;
        return temp2;
    }
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = temp2;
    temp2->next = NULL;
    return head;
}

Node* delete_at_beginning(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* temp = head->next;
    delete head;
    head = temp;
    return head;
}

Node* delete_in_middle(Node* head){
    Node* mid = findMid(head);
    Node* temp = head;
    while(temp->next!=mid){
        temp = temp->next;
    }
    Node* temp2 = temp->next;
    temp->next = temp2->next;
    delete temp2;
    return head;
}

Node* delete_at_end(Node* head){
    Node* temp = head;
    if(temp==NULL){
        return temp;
    }
    if(temp->next == NULL){
        delete temp;
        return NULL;
    }
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    Node* temp2 = temp->next;
    temp->next = NULL;
    delete temp2;
    return head;
}

void print(Node* head){
Node* temp = head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
}
}

int number_of_nodes(Node* head){
   Node* temp = head;
   int count = 0;
   while(temp!=NULL){
    temp = temp->next;
    count++;
   }
   return count;
}
bool search_node(Node* head, int data){
Node* temp = head;
while(temp!=NULL){
    if(temp->data == data){
        return true;
    }
    temp = temp->next;
}
return false;
}
Node *reverse_list(Node* head){
Node* curr = head;
Node* prev = NULL;
while(curr!=NULL){
    Node* next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
}
head = prev;
return head;
}
int main()
{
    cout<<"ENTER THE ELEMENTS OF THE LINKED LIST AND TERMINATE THE LIST BY -1"<<endl;
    int n;
    cin>>n;
    Node* head = NULL;
    Node* tail = NULL;
    while(n!=-1){
            Node* temp = new Node();
            temp->data = n;
            temp->next = NULL;
        if(head==NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail->next = temp;
            tail = tail->next;
        }
        cin>>n;
    }
    int ch;
    cout<<"CHOOSE YOUR CHOICE AND -1 TO TERMINATE"<<endl;
    cout<<"1)	Insertion of a node at begining, at middle and at end of list."<<endl;
    cout<<"2)	Deletion of a node at begining, at middle and at end of list."<<endl;
    cout<<"3)	Display the link list."<<endl;
    cout<<"4)	Count the number of nodes in the link list."<<endl;
    cout<<"5)	Search a node in the link list."<<endl;
    cout<<"6)	Reverse the link list."<<endl;
    cin>>ch;
    while(ch!=-1){
        if(ch==1){
                cout<<"ENTER DATA"<<endl;
                int x;
                cin>>x;
                char a;
            cout<<"DO YOU WANT TO "<<endl;
            cout<<"a) INSERT AT THE BEGINNING"<<endl;
            cout<<"b) INSERT IN THE MIDDLE"<<endl;
            cout<<"c) INSERT AT THE END"<<endl;
        cin>>a;
        if(a=='a'){
            head = insert_at_beginning(head, x);
        }
        if(a=='b'){
            head = insert_in_middle(head, x);
        }
        if(a=='c'){
            head = insert_at_end(head, x);
        }
        }
        if(ch==2){
                char a;
            cout<<"DO YOU WANT TO "<<endl;
            cout<<"a) DELETE AT THE BEGINNING"<<endl;
            cout<<"b) DELETE IN THE MIDDLE"<<endl;
            cout<<"c) DELETE AT THE END"<<endl;
            cin>>a;
        if(a=='a'){
            head = delete_at_beginning(head);
        }
        if(a=='b'){
            head = delete_in_middle(head);
        }
        if(a=='c'){
            head = delete_at_end(head);
        }
        }
        if(ch==3){
                cout<<"The current linked list is:  ";
             print(head);
        }
        if(ch==4){
            int p = number_of_nodes(head);
            cout<<p<<endl;
        }
        if(ch==5){
            cout<<"Enter the node you want to search"<<endl;
            int q;
            cin>>q;
            if(search_node(head, q)){
                cout<<"The node exists"<<endl;
            }
            else{
                cout<<"The node does not exist"<<endl;
            }
        }
        if(ch==6){
            head = reverse_list(head);
        }
        cout<<"Enter choice"<<endl;
        cin>>ch;
    }
}
