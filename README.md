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
   ```

2. **Run the executable**  
   ```bash
   ./heapsort
   ```

3. **Provide Input**  
   First enter the number of elements, then the elements themselves:
   ```
   5
   4 1 3 9 7
   ```

4. **Get Output**  
   The sorted array will be printed:
   ```
   1 3 4 7 9
   ```

---

## 📈 Time Complexity

| Operation        | Complexity |
|------------------|------------|
| Building Heap    | O(n)       |
| Heap Sort        | O(n log n) |

---

## 📚 Example

**Input:**
```
8
16 14 10 8 7 9 3 2
```

**Output:**
```
2 3 7 8 9 10 14 16
```

---

## ⚡ Notes

- The array is statically allocated with size **100**.  
  You can adjust `arr[100]` if you need larger inputs.
- The implementation uses **0-based indexing** for the heap.
- No external libraries are needed except standard C++ headers.

---

## 🔗 References

- [Heap Sort - GeeksforGeeks](https://www.geeksforgeeks.org/heap-sort/)
- [Heap (data structure) - Wikipedia](https://en.wikipedia.org/wiki/Heap_(data_structure))

---

## 🛡️ License

This project is open-source and available under the [MIT License](LICENSE).

---

## ✨ Author

- Meheraj

---
```

---
