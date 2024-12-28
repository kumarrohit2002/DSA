
# Map

A **Map** is an STL container in C++ that stores key-value pairs in an ordered fashion. Each key in a map is unique, and the values are accessed using their respective keys.

---

## Key Features of Map:
- Stores **key-value** pairs.
- Keys are **unique**.
- Values are stored in **ordered** fashion (by default, ascending order of keys).
- Keys act as **index** to access values.
- Provides efficient operations (insertion, deletion, and search): **O(log N)**.

---

## Advantages of Map:
- **Unique keys** ensure no duplicate entries.
- Maintains **order** (ascending or custom comparator).
- Allows dynamic size management.

## Disadvantages of Map:
- Uses more memory compared to arrays or vectors.
- Operations are slower compared to unordered containers (due to tree-based structure).

---

## Declaration of Map:

```cpp
#include <map>
map<data-type-key, data-type-value> map1;                        // Ascending order (default)
map<data-type-key, data-type-value, greater<data-type-key>> map2; // Descending order
```

---

## Insertion in Map:

```cpp
map1[key] = value;                // Inserts or updates the value for the given key.
map1.insert({key, value});        // Inserts a key-value pair (if the key is unique).
```

---

## Deletion in Map:

```cpp
map1.erase(key);                  // Removes the element with the specified key.
map1.erase(iterator);             // Removes the element at the iterator's position.
map1.erase(start_iterator, end_iterator); // Removes elements in a range.
```

---

## Member Functions of Map:

- **Size and Capacity:**
  - `size()`: Returns the number of elements.
  - `max_size()`: Returns the maximum number of elements the map can hold.
  - `empty()`: Checks if the map is empty.
  - `clear()`: Removes all elements from the map.

- **Access and Search:**
  - `find(key)`: Returns an iterator to the key-value pair if found, otherwise `end()`.
  - `count(key)`: Returns 1 if the key exists, otherwise 0.
  - `at(key)`: Returns the value associated with the key (throws exception if key not found).

- **Bounds:**
  - `lower_bound(key)`: Returns an iterator to the first element with a key not less than the given key.
  - `upper_bound(key)`: Returns an iterator to the first element with a key greater than the given key.

- **Iterators:**
  - `begin()`, `end()`: Iterators for traversal.
  - `rbegin()`, `rend()`: Reverse iterators.

---

# Unordered Map in C++

An **Unordered Map** is a hash-based container that stores key-value pairs without any specific order. It is faster than a map in average cases.

---

## Key Features:
- Stores **key-value** pairs.
- Keys are **unique**.
- Values are stored in **unordered** fashion.
- Operations (insertion, deletion, and search): **O(1)** on average.

---

## Declaration of Unordered Map:

```cpp
#include <unordered_map>
unordered_map<data-type-key, data-type-value> umap;
```

---

## Member Functions of Unordered Map:

1. **Insertion:**
   - `umap[key] = value;`
   - `umap.insert({key, value});`
   - Average **O(1)**, worst-case **O(N)** (rehashing may occur).

2. **Deletion:**
   - `umap.erase(key);`
   - `umap.erase(iterator);`
   - `umap.erase(start_iterator, end_iterator);`
   - Average **O(1)**, worst-case **O(N)**.

3. **Search:**
   - `find(key)`: Average **O(1)**, worst-case **O(N)**.
   - `count(key)`: Returns 1 if the key exists, otherwise 0.

4. **Iterators:**
   - `begin()`, `end()`: Iterators for traversal.

---

# Multimap in C++

A **Multimap** allows multiple elements to have the same key, storing them in an ordered fashion.

---

## Key Features:
- Stores **key-value** pairs.
- **Duplicate keys** are allowed.
- Keys are stored in **ordered** fashion.

---

## Declaration of Multimap:

```cpp
#include <map>
multimap<data-type-key, data-type-value> mmap;
```

---

## Member Functions of Multimap:

1. **Insertion:**
   - `mmap.insert({key, value});`
   - **O(log N)**.

2. **Deletion:**
   - `mmap.erase(key);`
   - `mmap.erase(iterator);`
   - `mmap.erase(start_iterator, end_iterator);`
   - **O(log N)**.

3. **Search:**
   - `find(key)`: Returns an iterator to the first occurrence of the key or `end()` if not found.
   - `count(key)`: Returns the number of occurrences of the key.

4. **Bounds:**
   - `lower_bound(key)`: Returns an iterator to the first occurrence of the key or the next greater key.
   - `upper_bound(key)`: Returns an iterator to the first key greater than the given key.

---

# Unordered Multimap in C++

An **Unordered Multimap** allows multiple elements to have the same key but stores them in an unordered fashion.

---

## Key Features:
- Stores **key-value** pairs.
- **Duplicate keys** are allowed.
- Values are stored in **unordered** fashion.

---

## Declaration of Unordered Multimap:

```cpp
#include <unordered_map>
unordered_multimap<data-type-key, data-type-value> ummap;
```

---

## Member Functions of Unordered Multimap:

1. **Insertion:**
   - `ummap.insert({key, value});`
   - Average **O(1)**, worst-case **O(N)** (rehashing may occur).

2. **Deletion:**
   - `ummap.erase(key);`
   - `ummap.erase(iterator);`
   - `ummap.erase(start_iterator, end_iterator);`
   - Average **O(1)**, worst-case **O(N)**.

3. **Search:**
   - `find(key)`: Average **O(1)**, worst-case **O(N)**.
   - `count(key)`: Returns the number of occurrences of the key.

---

This document covers **Map**, **Unordered Map**, **Multimap**, and **Unordered Multimap** with key features, advantages, disadvantages, and member functions for efficient usage.