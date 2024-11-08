# assignment_3
# assignment_3

/*
README Comments for main.cpp

Overview:
This C++ program demonstrates the usage of a custom `Queue` class, recursive algorithms, 
and sorting techniques. The code covers various tasks including queue manipulation, 
a recursive search function, and the insertion sort algorithm.

Key Components:
1. Queue Operations:
   - The program utilizes a templated `Queue` class to perform basic operations.
   - Pushes 10 integers into the queue and displays them.
   - `displayQueue` function is used to print all elements while maintaining the 
     original order by moving each displayed element to the rear.
   - Demonstrates `move_to_rear` function, which moves the front element to the end of the queue.

2. Recursive Linear Search:
   - Includes a recursive function `linear_search` that finds the last occurrence of 
     a target value in a vector.
   - Uses a backward recursive approach, starting from the end of the vector and moving 
     towards the beginning until the target is found or the end is reached.

3. Insertion Sort:
   - Implements `insertion_sort` to sort a vector of integers in ascending order.
   - Iterates through each element and places it in the correct position within the 
     sorted portion of the vector.
   - Sorts the vector in-place without using additional data structures.

Example Usage:
- Queue Display: Displays the integers stored in the queue before and after moving 
  the front element to the rear.
- Linear Search: Searches for the last occurrence of a given number in a vector and 
  prints its index.
- Sorting: Sorts a predefined vector and displays the sorted elements.

Enhancements and Considerations:
- Ensure the `Queue` class includes basic methods such as `push`, `pop`, `front`, 
  and `size`, with `queue.h` implemented correctly for successful compilation.
- The `linear_search` function is versatile and can be adapted for different data types.
- `insertion_sort` is efficient for small to moderately sized vectors, but consider 
  advanced algorithms like quicksort or mergesort for larger datasets.

How to Run:
1. Include the `queue.h` header file, containing the `Queue` class definition.
2. Compile `main.cpp` using:
   g++ main.cpp -o main
3. Run the executable using:
   ./main

Future Improvements:
- Extend the `Queue` class for more robust error handling and exception safety.
- Implement additional sorting algorithms for comparison (e.g., quicksort, mergesort).
- Add more comprehensive test cases for the `linear_search` function.
*/

