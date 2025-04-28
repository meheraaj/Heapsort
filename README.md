Heap Sort in C++

This project implements the Heap Sort algorithm in C++ using a custom max-heap structure.

📋 Overview

Heap Sort is an efficient, comparison-based, in-place sorting algorithm with O(n log n) time complexity.This implementation includes:

Building a max-heap from the input array

Repeatedly extracting the maximum element to achieve a sorted array

🛠 Code Structure

maxheapify(int i, int n):Maintains the max-heap property at index i for a heap of size n.

build_maxheap(int n):Builds a max-heap from an unordered array.

heap_sort(int n):Sorts the array using heap sort.

main():Reads input, calls sorting functions, and outputs the sorted array.

🖥 Usage

Compile the codeUsing g++ or any C++ compiler:

g++ -o heapsort heapsort.cpp

Run the executable

./heapsort

InputFirst enter the number of elements, then the elements themselves:

5
4 1 3 9 7

OutputThe sorted array will be printed:

1 3 4 7 9

📈 Time Complexity

Building the heap: O(n)

Heap Sort: O(n log n)

⚡ Example

Input:

8
16 14 10 8 7 9 3 2

Output:

2 3 7 8 9 10 14 16

📄 Notes

The maximum size of the array is set to 100. Adjust arr[100] if needed.

The code uses 0-based indexing for the heap.

🔗 References

Heap Sort - GeeksforGeeks

Heap Data Structure - Wikipedia
