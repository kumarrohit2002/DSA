

# Set in C++

A **Set** is an STL (Standard Template Library) container used to store unique values in an ordered state. Elements are identified by their own value and are immutable once inserted into the set.

## Key Features of Set:
- Stores **unique** values.
- Values are stored in **ordered** fashion (ascending by default).
- **No indexing**; elements are identified by their value.
- **Immutable** elements: Once a value is inserted, it cannot be modified.

---

## Advantages of Set:
- Ensures **unique** values.
- Maintains **order**.
- **Dynamic size**: No overflow issues.
- Efficient operations (insertion, deletion, search): **O(log N)**.

## Disadvantages of Set:
- No direct access to elements using **indexing**.
- Uses **more memory** compared to arrays.
- Not suitable for **large datasets** due to overhead.

---

## Declaration of Set:

```cpp
#include <set>
set<data-type> set1;                   // Ascending order (default)
set<data-type, greater<data-type>> set2; // Descending order
```

---

## Insertion in Set:

```cpp
set1.insert(1);
set1.insert(2);
set1.insert(3);
set1.insert(4);
```

---

## Deletion in Set:

```cpp
set1.erase(value);                 // Removes element by value.
set1.erase(iterator);              // Removes element at iterator position.
set1.erase(start_iterator, end_iterator); // Removes range of elements.
```

---

## Member Functions of Set:

- `size()` and `max_size()`: Returns the number of elements and the maximum number of elements the set can hold.
- `empty()`: Checks if the set is empty.
- `clear()`: Removes all elements from the set.
- `find(value)`: Returns an iterator to the element if found, otherwise returns `end()`.
- `count(value)`: Returns 1 if the element is present, otherwise 0.
- `lower_bound(value)`: Returns an iterator to the element if present, otherwise to the next greater element.
- `upper_bound(value)`: Returns an iterator to the next greater element.
- `begin()`: Returns an iterator to the first element.
- `end()`: Returns an iterator to one past the last element.
- `rbegin()`: Returns a reverse iterator to the last element.
- `rend()`: Returns a reverse iterator to one before the first element.

---

# Unordered Set in C++

An **Unordered Set** stores elements in an unordered fashion and is based on **hashing**. It allows only unique values.

## Key Features:
- Stores **unique** values.
- Values are stored in an **unordered** fashion.
- Efficient operations: **O(1)** average time complexity for insertion, deletion, and search.

---

## Member Functions of Unordered Set:

1. **Insertion:**
   - Single element: Average **O(1)**, worst-case **O(N)** (rehashing may occur).
   - Multiple elements: Average **O(N)**, worst-case **O(N * (N + 1))**.

2. **Deletion:**
   - `set1.erase(value);`
   - `set1.erase(iterator);`
   - `set1.erase(start_iterator, end_iterator);`
   - Average **O(1)**, worst-case **O(N)**.

3. **Search:**
   - `find(value)`: Average **O(1)**, worst-case **O(N)**.
   - `count(value)`: Returns 1 if the element is present, otherwise 0.

---

# Multiset in C++

A **Multiset** allows duplicate values and stores them in an ordered state.

## Key Features:
- Allows **duplicate** values.
- Maintains **order** (ascending or descending).
- Values are immutable.

---

## Member Functions of Multiset:

1. **Insertion:**
   - `ms.insert(value);` -> **O(log N)**.

2. **Deletion:**
   - `ms.erase(value);`
   - `ms.erase(iterator);`
   - `ms.erase(start_iterator, end_iterator);`
   - **O(log N)**.

3. **Search:**
   - `find(value)`: Returns an iterator to the first occurrence (lower bound) or `end()` if not found. **O(log N)**.
   - `count(value)`: Returns the number of occurrences. **O(K + log N)**, where `K` is the number of occurrences.

4. **Bounds:**
   - `lower_bound(value)`: Returns an iterator to the first occurrence or the next greater value.
   - `upper_bound(value)`: Returns an iterator to the next greater value.

---

# Unordered Multiset in C++

An **Unordered Multiset** allows duplicate values and stores them in an unordered fashion using **hashing**.

## Key Features:
- Allows **duplicate** values.
- Values are stored in an **unordered** fashion.
- Efficient operations: Average **O(1)**, worst-case **O(N)**.

---

## Member Functions of Unordered Multiset:

1. **Insertion:**
   - Single element: Average **O(1)**, worst-case **O(N)** (rehashing may occur).
   - Multiple elements: Average **O(N)**, worst-case **O(N * (N + 1))**.

2. **Deletion:**
   - `ms.erase(value);`
   - `ms.erase(iterator);`
   - `ms.erase(start_iterator, end_iterator);`
   - Average **O(1)**, worst-case **O(N)**.

3. **Search:**
   - `find(value)`: Average **O(1)**, worst-case **O(N)**.
   - `count(value)`: Returns the number of occurrences. **O(N)**.

---

This document provides a comprehensive overview of the **Set**, **Unordered Set**, **Multiset**, and **Unordered Multiset** in C++