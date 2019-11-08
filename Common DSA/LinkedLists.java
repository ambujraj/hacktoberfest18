/*
Author - Shyam Mittal ( aka : nobi1007 )

Following methods are covered in the following code:
1 - Adding the data at last of the list -- done
2 - Adding the value infront of the list -- done
3 - Adding the value at the specfic location -- done
4 - Reversing the linked list and returning the head node -- done
5 - Deleting the value from the list at the specified location -- done
6 - Printing the Linked List from the provided head -- done
7 - Finding number of elements in the list -- done
# - MORE TO ADD
*/

import java.util.*;
class LinkedListJava2{
    static class Node{
        public int data;
        public Node next;
        public Node(int value){
            this.data = value;
            this.next = null;
        }
    }

    // 1 - the "append" method adds the new value at the last of the list.
    public static Node append(Node head, int value){
        if(head==null){
            head = new Node(value);
        }
        else{
            Node temp = head;
            while(temp.next!=null){
                temp = temp.next;
            }
            Node node = new Node(value);
            temp.next = node;
        }
        return head;
    }

    // 2 - the "lappend" method adds the new value in front of the list.
    public static Node lappend(Node head, int value){
        if(head == null){
            head = new Node(value);
            return head;
        }
        else{
            Node temp = new Node(value);
            temp.next = head;
            return temp;
        }
    }

    // 3 - the "addAtPos" method adds the new value at the specified index (Zero based indexing).
    public static Node addAtPos(Node head, int pos, int value){
        if(head == null){
            head = new Node(value);
            return head;
        }
        else if(pos == 0){
            Node newNode = new Node(value);
            newNode.next = head;
            return newNode;
        }
        else{
            int iter = 0;
            int len = length(head);
            Node temp = head;
            while(temp.next!=null && iter<pos-1){
                iter++;
                temp = temp.next;
            }
            Node newNode = new Node(value);
            newNode.next = temp.next;
            temp.next = newNode;
            return head;
        }
    }

    // 4 - the "reverse" method reverses the list and returns the head of the reversed list.
    public static Node reverse(Node head){
        if(head == null){
            return null;
        }
        else{
            Node prev = null;
            Node current = head;
            Node after = null;
            while(current!=null){
                after = current.next;
                current.next = prev;
                prev = current;
                current = after;
            }
            System.out.println("List has been reversed");
            return prev;
        }
    }

    // 5 - the deleteAtPos method deletes the element present at the given index and returns the head of the new list (zero based indexing).
    public static Node deleteAtPos(Node head, int pos){
        if(head==null){
            return null;
        }
        else if(pos == 0){
            return head.next;
        }
        else{
            int len = length(head);
            int iter = 0;
            Node temp = head;
            while(iter<pos-1 && temp.next!=null){
                iter++;
                temp = temp.next;
            }
            if(temp.next == null){
                return head;
            }
            else{
                System.out.println("Deleted element : "+temp.next.data);
                temp.next = temp.next.next;
                return head;
            }
        }
    }

    // 6 - the "printList" method prints all the values starting from the provided head.
    public static void printList(Node head){
        if(head!=null){
            while(head!=null){
                System.out.println(head.data);
                head = head.next;
            }
        }
    }

    // 7 - the "length" method returns the length of the list whose head is provided.
    public static int length(Node head){
        if(head==null){
            return 0;
        }
        else{
            int count = 0;
            while(head!=null){
                head=head.next;
                count++;
            }
            return count;
        }
    }


    // the Driver Code !!!
    public static void main(String args[]){
        Node head = new Node(1);
        head = append(head,2);
        head = append(head,3);
        head = append(head,4);
        head = append(head,5);
        head = append(head,6);
        head = append(head,7);
        printList(head);
        System.out.println("List length = "+length(head));
        head = reverse(head);
        printList(head);
        head = reverse(head);
        head = deleteAtPos(head,3);
        printList(head);
        System.out.println("Adding at specific location");
        head = addAtPos(head,3,100);
        head = addAtPos(head,0,-23);
        head = addAtPos(head,7,831);
        printList(head);
    }

    /*
        Output of the following code:
        1
        2
        3
        4
        5
        6
        7
        List length = 7
        List has been reversed
        7   
        6
        5      
        4
        3
        2
        1
        List has been reversed
        Deleted element : 4
        1
        2
        3
        5
        6
        7
        Adding at specific location
        -23
        1
        2
        3
        100
        5
        6
        831
        7
    */
}

