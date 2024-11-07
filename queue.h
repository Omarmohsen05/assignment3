// queue.h

#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

// A simple template Queue class using linked list
template <typename T>
class Queue {
private:
    struct Node {
        T data;
        Node* next;
        Node(T val) : data(val), next(nullptr) {}
    };

    Node* frontNode; // Pointer to the front node
    Node* rearNode;  // Pointer to the rear node
    int count;       // Tracks the size of the queue

public:
    // Constructor
    Queue() : frontNode(nullptr), rearNode(nullptr), count(0) {}

    // Destructor to clear all nodes
    ~Queue() {
        while (!empty()) {
            pop();
        }
    }

    // Push: Add an element to the rear of the queue
    void push(const T& value) {
        Node* newNode = new Node(value);
        if (empty()) {
            frontNode = rearNode = newNode;
        } else {
            rearNode->next = newNode;
            rearNode = newNode;
        }
        count++;
    }

    // Pop: Remove the front element from the queue
    void pop() {
        if (!empty()) {
            Node* temp = frontNode;
            frontNode = frontNode->next;
            delete temp;
            count--;
            if (empty()) {
                rearNode = nullptr;
            }
        }
    }

    // Front: Get the front element of the queue
    T front() const {
        if (!empty()) {
            return frontNode->data;
        }
        throw runtime_error("Queue is empty");
    }

    // Size: Get the number of elements in the queue
    int size() const {
        return count;
    }

    // Empty: Check if the queue is empty
    bool empty() const {
        return count == 0;
    }

    // Move the front element to the rear
    void move_to_rear() {
        if (size() > 1) { // only move if more than one element
            T frontValue = front();
            pop();
            push(frontValue);
        }
    }
};

#endif
