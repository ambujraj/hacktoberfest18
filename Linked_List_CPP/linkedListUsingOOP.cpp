#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node {
private:
    int data;
    Node *next;
public:
    Node() {};
    int getData();
    void setData(int data);
    Node* getNext();
    void setNext(Node *next);
};

int Node::getData() {
    return this->data;
}

void Node::setData(int data) {
    this->data = data;
}

Node* Node::getNext() {
    return this->next;
}

void Node::setNext(Node *next) {
    this->next = next;
}


class LinkedList {
private:
    Node *head;
    int len;
public:
    LinkedList();
    void addNodeToFront(int data);
    void addNodeToBack(int data);
    void print();
    int getLen();
};

LinkedList::LinkedList() {
    head = nullptr;
    len = 0;
}

void LinkedList::addNodeToFront(int data) {
    Node *newNode = new Node();
    newNode->setData(data);
    newNode->setNext(head);
    head = newNode;
    this->len++;
}

void LinkedList::addNodeToBack(int data) {
    Node *newNode = new Node();
    newNode->setData(data);
    newNode->setNext(nullptr);
    Node *temp = head;
    if(temp) {
        while(temp->getNext()) {
            temp = temp->getNext();
        }
        temp->setNext(newNode);
    }
    else {
        addNodeToFront(data);
    }
    this->len++;
}

int LinkedList::getLen() {
    return this->len;
}

void LinkedList::print() {
    std::cout << "Length: " << this->getLen() << "\n";
    Node *temp = head;
    while(temp) {
        std::cout << temp->getData() << " ";
        temp = temp->getNext();
    }
    std::cout << std::endl;
}


int main() {
    LinkedList *ll = new LinkedList();
    ll->addNodeToFront(10);
    ll->addNodeToFront(20);
    ll->addNodeToFront(30);
    ll->addNodeToBack(40);
    ll->addNodeToBack(50);
    ll->print();
    return 0;
}
