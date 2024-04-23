// Problem Statement: Problem Statement: Given the head of a singly linked list, write a program to reverse the linked list, and return the head pointer to the reversed list.

// Examples
// Example 1:

// Input Format:

// LL: 1   3   2   4 

#include <bits/stdc++.h>
using namespace std;

//using stack method
class Node{
    public :
    int data;
    Node* next;
    Node(int data1,Node* next1)
    {
        data=data1;
        next =next1;

    }
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};
Node* reverseList(Node*head)
{
    Node* temp =head;
    stack<int>st;
    while(temp!=nullptr)
    {
        st.push(temp->data);
        temp=temp->next;

    }
    return head;

}
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
  
    Node* head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(2);
    head->next->next->next = new Node(4);

    // Print the original linked list
    cout << "Original Linked List: ";
    printLinkedList(head);

    // Reverse the linked list
    head = reverseList(head);

    // Print the reversed linked list
    cout << "Reversed Linked List: ";
    printLinkedList(head);
}