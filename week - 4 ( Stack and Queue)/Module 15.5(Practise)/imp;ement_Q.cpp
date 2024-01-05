#include <bits/stdc++.h>

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class Queue {
public:
   Node * head;
   Node * tail;

    Queue() {
        head = NULL;
        tail = NULL;      
    }

    bool isEmpty() {
        return head == NULL;
       
    }

    void enqueue(int data) {
      Node * newNode = new Node( data);
      if( head == NULL)
      {
          head = tail = newNode;
      }
      tail->next = newNode;
      tail = newNode;

    }

    int dequeue() {
        if (head == NULL) {
            return -1;
        }

        Node *deleteNode = head;
        int data = head->data;


        if (head == tail)
         {
            head = tail = NULL;
        } else
         {
            head = head->next;
        }

        delete deleteNode;
        return data;
    }

    int front() {
        if ( head == NULL)
        {
            return  -1;
        }
        return head->data;
        
    }
};
