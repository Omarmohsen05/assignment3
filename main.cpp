// main.cpp

#include <iostream>
#include "queue.h"
#include <vector>
using namespace std;

// Function to display all elements of the queue
template <typename T>
void displayQueue(Queue<T>& q) {
    int size = q.size();
    for (int i = 0; i < size; ++i) {
        cout << q.front() << " ";
        q.move_to_rear(); // Move each element to rear after displaying to keep original order
    }
    cout << endl;
}

// Recursive linear search for the last occurrence of target
template <typename T>
int linear_search(vector<T>& items, T& target, int pos) {
    if (pos == -1) return -1; // end of the vector
    if (items[pos] == target) return pos; // found target
    return linear_search(items, target, pos - 1); // recursive call moving backward
}

// Insertion sort modified to work with a vector of integers
void insertion_sort(vector<int>& num) {
    for (int j = 1; j < num.size(); j++) {
        int key = num[j];
        int i = j - 1;
        while (i >= 0 && num[i] > key) {
            num[i + 1] = num[i];
            i--;
        }
        num[i + 1] = key;
    }
}

int main() {
    // Q1: Queue operations
    Queue<int> q;

    // a) Push 10 integers into the queue
    for (int i = 1; i <= 10; ++i) {
        q.push(i);
    }

    // b) Display all elements in the queue
    cout << "Elements in the queue: ";
    displayQueue(q);

    // c) Test move_to_rear
    cout << "Moving front element to rear..." << endl;
    q.move_to_rear();
    cout << "Queue after moving front to rear: ";
    displayQueue(q);

    // Q2: Recursive linear search for the last occurrence of a target
    vector<int> items = {1, 3, 5, 3, 2, 3, 4};
    int target = 3;
    int pos = linear_search(items, target, items.size() - 1);
    cout << "Last occurrence of " << target << " is at index: " << pos << endl;

    // Q3: Sort the vector using insertion sort
    vector<int> num = {4, 3, 2, 10, 12, 1, 5, 6};
    insertion_sort(num);
    cout << "Sorted vector: ";
    for (int n : num) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
