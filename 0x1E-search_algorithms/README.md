# 0x1E. C - Search Algorithms

# [HOME](https://github.com/Drihmia/alx-low_level_programming/blob/main/README.md)
# [Previous Project](https://github.com/Drihmia/alx-low_level_programming/tree/main/0x1C-makefiles/README.md)
---

## General
-  What is a search algorithm
-  What is a linear search
-  What is a binary search
-  What is the best search algorithm to use depending on your needs
# Resources
- ## Read or watch:
    - [Space complexity (1))](https://www.geeksforgeeks.org/g-fact-86/)
    - [Serach Algorithms video playlist](https://www.youtube.com/playlist?list=PLEJXowNB4kPwTb4BivkY0dENHmXdOEM3V)
---
## More Info
You will be asked to write files containing big O notations. Please use this format:
- O(1)
- O(n)
- O(n!)
- n*m -> O(nm)
- n square -> O(n^2)
- sqrt n -> O(sqrt(n))
- log(n) -> O(log(n))
- n * log(n) -> O(nlog(n))
---
# Search Algorithms

This project includes various search algorithms implemented in C. Here's a brief overview of each algorithm:

## Linear Search
Linear search is a simple search algorithm that sequentially checks each element in the array until the target value is found or the end of the array is reached. It has a time complexity of O(n).

## Binary Search
Binary search is a divide-and-conquer search algorithm that works on sorted arrays. It repeatedly divides the search interval in half until the target value is found. It has a time complexity of O(log n).

## Jump Search
Jump search is an algorithm for finding the position of a target value within a sorted array. It works by jumping ahead by fixed steps and then performing a linear search in the subarray. It has a time complexity of O(√n).

## Interpolation Search
Interpolation search is an improved variant of binary search for uniformly distributed arrays. It estimates the position of the target value based on the values of the endpoints of the search interval. It has an average time complexity of O(log log n) when the elements are uniformly distributed.

## Exponential Search
Exponential search is a search algorithm that works by repeatedly doubling the size of the search interval until it exceeds the target value, followed by a binary search in the bounded interval. It has a time complexity of O(log n).

## Advanced Binary Search
Advanced binary search is a modified version of binary search that handles duplicate values in the array. It finds the first occurrence of the target value using a binary search algorithm. It has a time complexity of O(log n).

## Jump List
Jump list is a search algorithm that combines the principles of linked lists and jump search. It creates a linked list with jump links to efficiently perform searches. It has a time complexity of O(√n).

## Linear Skip
Linear skip is a search algorithm that combines the principles of linked lists and linear search to perform searches efficiently. It has a time complexity of O(n).

## Skip List
Skip list is a data structure that allows for efficient search, insertion, and deletion operations. It maintains multiple levels of linked lists with skip links to expedite search operations. It has a time complexity of O(log n) for search operations.
---

# [HOME](https://github.com/Drihmia/alx-low_level_programming/blob/main/README.md)
# [Previous Project](https://github.com/Drihmia/alx-low_level_programming/tree/main/0x1C-makefiles/README.md)
