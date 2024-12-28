# **Hashing**

**Hashing** is a technique to map data (keys) to a specific location (index) in a hash table using a mathematical function called a **hash function**. It is widely used in data structures such as hash tables for efficient storage and retrieval.

### **Applications of Hashing**
1. Searching and indexing in databases.
2. Caching and lookup tables.
3. Implementing associative arrays and sets.
4. Password storage (cryptographic hashing).

---

# **Hash Functions**

A **hash function** takes an input (key) and produces a fixed-size numerical value (hash) that determines the index in a hash table.

### **Properties of a Good Hash Function**
1. **Uniform distribution**: Spread keys evenly to minimize collisions.
2. **Deterministic**: Same key always maps to the same hash.
3. **Fast computation**: Efficient for large datasets.
4. **Minimize collisions**: Reduce cases where multiple keys produce the same hash.

### **Types of Hash Functions**
1. **Division Method**:
   - \( h(k) = k \mod m \)
   - `k`: Key, `m`: Size of the hash table (preferably a prime number).
   - Example: Key \( 25 \), \( m = 7 \), \( h(25) = 25 \mod 7 = 4 \).

2. **Mid-Square Method**:
   - Square the key and extract the middle digits.
   - Example: Key \( 13 \), \( 13^2 = 169 \), hash = \( 6 \) (middle digit).

3. **Digit Folding Method**:
   - Split the key into parts, add the parts, and apply modulus.
   - Example: Key \( 123456 \), split into \( 123 \) and \( 456 \), sum = \( 579 \), \( 579 \mod 10 = 9 \).

4. **Multiplication Method**:
   - \( h(k) = \lfloor m \cdot (k \cdot A \mod 1) \rfloor \)
   - `A`: A constant \( 0 < A < 1 \), `m`: Table size.
   - Example: Key \( 50 \), \( A = 0.618033 \), \( m = 10 \), hash = \( 3 \).

---

# **Collision Handling**

**Collisions** occur when two or more keys produce the same hash value. To handle collisions, we use various strategies:

### **1. Open Hashing (Separate Chaining)**
- Each index in the hash table points to a list or bucket to store multiple keys.
- **Advantages**:
  - Handles collisions well with dynamic memory.
  - Easy to implement.
- **Disadvantages**:
  - Uses additional memory for linked lists.
  - Search time increases as the bucket size grows.

### **2. Closed Hashing (Open Addressing)**
- All elements are stored in the hash table itself. If a collision occurs, the algorithm probes the table to find an empty slot.
- **Probing Methods**:
  1. **Linear Probing**:
     - Check the next slot sequentially.
     - \( h'(k) = (h(k) + i) \mod m \), where `i` is the probe number.
     - Problem: **Clustering** (keys tend to cluster together).

  2. **Quadratic Probing**:
     - Check slots using a quadratic function.
     - \( h'(k) = (h(k) + c_1i + c_2i^2) \mod m \), where \( c_1, c_2 \) are constants.
     - Reduces clustering but may not find an empty slot if the table is not sufficiently large.

  3. **Double Hashing**:
     - Use a secondary hash function to resolve collisions.
     - \( h'(k) = (h(k) + i \cdot h_2(k)) \mod m \)
     - `h_2(k)` must be independent of `h(k)` to minimize clustering.
     - Example: \( h_1(k) = k \mod 7 \), \( h_2(k) = 1 + (k \mod 5) \).

---

# **Load Factor**
The **load factor** is the ratio of the number of elements in the hash table to the total number of slots (size of the table).

### **Formula**:
\[
\text{Load Factor} = \frac{\text{Number of Elements}}{\text{Table Size}}
\]

### **Impact of Load Factor**:
1. **Low Load Factor**:
   - Less chance of collision.
   - Efficient operations but wastes memory.

2. **High Load Factor**:
   - Increases collisions.
   - Decreases performance for insertion and lookup.

---

# **Rehashing**
**Rehashing** is the process of resizing a hash table and recalculating the hash values of existing keys when the load factor exceeds a certain threshold.

### **Steps for Rehashing**:
1. Create a new hash table with a larger size (typically double the current size).
2. Recalculate hash values for all existing keys and insert them into the new table.
3. Delete the old table.

### **Advantages of Rehashing**:
- Reduces collisions by increasing table size.
- Maintains efficient operations even with increased data.

### **Disadvantages**:
- Time-consuming operation as all elements are rehashed.

---

# **Comparison of Collision Resolution Techniques**

| Technique              | Time Complexity (Avg) | Space Complexity | Clustering Problem | Notes                              |
|------------------------|------------------------|------------------|--------------------|------------------------------------|
| Separate Chaining      | \( O(1 + \alpha) \)    | Extra for lists  | No                 | Handles collisions efficiently.    |
| Linear Probing         | \( O(1) \)            | In-place         | Yes                | Prone to primary clustering.       |
| Quadratic Probing      | \( O(1) \)            | In-place         | Reduced            | May fail to find empty slots.      |
| Double Hashing         | \( O(1) \)            | In-place         | No                 | Requires two hash functions.       |

---

This document covers the concepts of hashing, hash functions, collision handling, open and closed hashing, probing techniques, load factor, and rehashing.