# 🚀 Heap Sort in C++

This project implements the **Heap Sort** algorithm in **C++**, using a custom max-heap structure.

---

## 📋 Overview

Heap Sort is an efficient, comparison-based, in-place sorting algorithm with a time complexity of **O(n log n)**.  
This implementation includes:

- Building a **Max-Heap** from the input array
- Repeatedly extracting the maximum element to achieve a sorted array

---

## 🛠️ Code Structure

- **`maxheapify(int i, int n)`**:  
  Maintains the max-heap property at index `i` for a heap of size `n`.

- **`build_maxheap(int n)`**:  
  Builds a max-heap from an unordered array.

- **`heap_sort(int n)`**:  
  Sorts the array using Heap Sort.

- **`main()`**:  
  Reads input, calls sorting functions, and outputs the sorted array.

---

## 🖥️ Usage

1. **Compile the code**  
   ```bash
   g++ -o heapsort heapsort.cpp
