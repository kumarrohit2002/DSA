# DSA
# Array:- 


---

### ✅ **Quick Approach for LeetCode Problems:**

---

**1. Two Sum (Leetcode 1)**

* **Approach:** Use a hash map to store each number's complement (target - num).
* **Time:** `O(n)`
* **Space:** `O(n)`

---

**2. Two Sum II (Sorted Input)**

* **Approach:** Two-pointer method from both ends. Move pointers based on sum comparison.
* **Time:** `O(n)`
* **Space:** `O(1)`

---

**3. 3Sum (Leetcode 15)**

* **Approach:** Sort the array and use a fixed + two-pointer approach, skipping duplicates.
* **Time:** `O(n^2)`
* **Space:** `O(1)` or `O(n)` for result storage.

---

**4. Trapping Rain Water (Leetcode 42)**

* **Approach:** Two pointers with leftMax and rightMax tracking.
* **Time:** `O(n)`
* **Space:** `O(1)`

---

**5. 3Sum Closest**

* **Approach:** Similar to 3Sum but track minimum `abs(target - currentSum)`.
* **Time:** `O(n^2)`
* **Space:** `O(1)`

---

**6. Factorial of Large Numbers**

* **Approach:** Use arrays or strings to store digits, simulate multiplication.
* **Time:** `O(n * log n)` (approximate)
* **Space:** `O(n)`

---

**7. Next Permutation (Leetcode 31)**

* **Approach:** Find the rightmost pair where `nums[i] < nums[i+1]`, swap with next greater, reverse the rest.
* **Time:** `O(n)`
* **Space:** `O(1)`

---

**8. Rotate Image (Matrix) (Leetcode 48)**

* **Approach:** Transpose the matrix + reverse each row.
* **Time:** `O(n^2)`
* **Space:** `O(1)`

---

**9. Container With Most Water (Leetcode 11)**

* **Approach:** Two-pointer from both ends; calculate area and move the shorter line inward.
* **Time:** `O(n)`
* **Space:** `O(1)`

---

**10. Spiral Matrix (Leetcode 54)**

* **Approach:** Use four boundaries (top, bottom, left, right) and move in spiral direction.
* **Time:** `O(m*n)`
* **Space:** `O(1)` (if result doesn’t count)


---

### ✅ **11. Group Anagrams (using sorting) – Leetcode 49**

* **Approach:** Use a hashmap with sorted string as the key. Group original strings under this key.
* **Time:** `O(n * k log k)` (where `k` is average word length)
* **Space:** `O(n * k)`

---

### ✅ **12. Group Anagrams (without sorting) – Leetcode 49**

* **Approach:** Use character frequency count tuple as hashmap key instead of sorting.
* **Time:** `O(n * k)`
* **Space:** `O(n * k)`

---

### ✅ **13. Sort the Matrix Diagonally – Leetcode 1329**

* **Approach:** Use a hashmap to group values by `i - j`, sort each diagonal and refill.
* **Time:** `O(m * n log k)`
* **Space:** `O(m * n)`

---

### ✅ **14. Diagonal Traverse – Leetcode 498**

* **Approach:** Simulate the traversal using direction control (`up-right` ↔ `down-left`).
* **Time:** `O(m * n)`
* **Space:** `O(1)` (excluding output)

---

### ✅ **15. Sort Colors – Leetcode 75**

* **Approach:** Dutch National Flag algorithm using 3 pointers (`low`, `mid`, `high`).
* **Time:** `O(n)`
* **Space:** `O(1)`

---

### ✅ **16. Find Original Array from Doubled Array – Leetcode 2007**

* **Approach:** Sort the array, use a counter and try to form pairs `x` and `2x`.
* **Time:** `O(n log n)`
* **Space:** `O(n)`

---

### ✅ **17. Sum of Even Numbers After Queries – Leetcode 985**

* **Approach:** Keep track of current even sum, and update it based on each query's effect.
* **Time:** `O(n + q)`
* **Space:** `O(1)`

---

### ✅ **18. Find Pivot Index – Leetcode 724**

* **Approach:** Prefix sum from left and total sum – left sum – current value = right sum.
* **Time:** `O(n)`
* **Space:** `O(1)`

---

### ✅ **19. Increasing Triplet Subsequence – Leetcode 334**

* **Approach:** Track smallest and second smallest numbers. If any number > second smallest, return true.
* **Time:** `O(n)`
* **Space:** `O(1)`

---

### ✅ **20. Largest Perimeter Triangle – Leetcode 976**

* **Approach:** Sort the array, and check for the triplet with largest possible perimeter from the end.
* **Time:** `O(n log n)`
* **Space:** `O(1)`

---

### ✅ **21. Contains Duplicate II – Leetcode 219**

* **Approach:** Use a hashmap to store the last index of each number. If a duplicate is found within range `k`, return true.
* **Time:** `O(n)`
* **Space:** `O(n)`

---

### ✅ **22. Set Mismatch – Leetcode 645**

* **Approach:** Use count array or hashmap to track frequencies. The number appearing twice is duplicate, the one missing is not in the map.
* **Time:** `O(n)`
* **Space:** `O(1)` (if using array)

---

### ✅ **23. Continuous Subarray Sum – Leetcode 523**

* **Approach:** Use a hashmap to store `(cumulative sum % k)` with earliest index. If the same mod is seen again with a gap ≥ 2, return true.
* **Time:** `O(n)`
* **Space:** `O(k)`

---

### ✅ **24. Image Overlap – Leetcode 835**

* **Approach:** Convert both matrices to coordinate sets where value is 1. Use vector differences to align one set over another and count overlaps.
* **Time:** `O(n⁴)` (optimized with hash map)
* **Space:** `O(n²)`

---

### ✅ **25. Shortest Path in a Grid with Obstacles Elimination – Leetcode 1293**

* **Approach:** Use BFS with a queue containing `(x, y, remaining eliminations)`. Track visited with state.
* **Time:** `O(m * n * k)`
* **Space:** `O(m * n * k)`

---

### ✅ **26. Toeplitz Matrix – Leetcode 766**

* **Approach:** Each element should be equal to the top-left diagonal element. Check `matrix[i][j] == matrix[i-1][j-1]`.
* **Time:** `O(m * n)`
* **Space:** `O(1)`

---

### ✅ **27. Where Will the Ball Fall – Leetcode 1706**

* **Approach:** Simulate each ball’s movement row by row. Check boundaries and diagonal redirection rules (`1` for right, `-1` for left).
* **Time:** `O(m * n)`
* **Space:** `O(n)` (output array)

---

### ✅ **28. Valid Sudoku – Leetcode 36**

* **Approach:** Use 3 sets per row, column, and box to track occurrences. Validate no duplicates.
* **Time:** `O(1)` (since grid is 9x9)
* **Space:** `O(1)`

---

### ✅ **29. Minimum Average Difference – Leetcode 2256**

* **Approach:** Prefix sum and suffix average calculations. For each index, compute abs diff and track min.
* **Time:** `O(n)`
* **Space:** `O(1)`

---

### ✅ **30. Longest Subsequence With Limited Sum – Leetcode 2389**

* **Approach:** Sort the array and compute prefix sums. For each query, use binary search on prefix sum to find longest valid subsequence.
* **Time:** `O(n log n + q log n)`
* **Space:** `O(n)`

---

### ✅ **31. Minimum Number of Arrows to Burst Balloons – Leetcode 452**

* **Approach:** Sort balloons by end point. Use a greedy approach to shoot an arrow when a balloon ends, and skip overlapping ones.
* **Time:** `O(n log n)`
* **Space:** `O(1)`

---

### ✅ **32. Insert Interval – Leetcode 57**

* **Approach:** Traverse intervals while `newInterval` doesn't overlap. Merge overlapping ones, then append remaining intervals.
* **Time:** `O(n)`
* **Space:** `O(n)` (for result)

---

### ✅ **33. Maximum Sum Circular Subarray – Leetcode 918**

* **Approach:** Use **Kadane’s Algorithm** for max subarray. Also compute min subarray and subtract it from total to get circular sum.
* **Time:** `O(n)`
* **Space:** `O(1)`

---

### ✅ **34. Subarray Sums Divisible by K – Leetcode 974**

* **Approach:** Use prefix sum and hashmap to store count of mod values. If same mod is seen again, it forms a valid subarray.
* **Time:** `O(n)`
* **Space:** `O(k)`

---

### ✅ **35. Find the Town Judge – Leetcode 997**

* **Approach:** Use an array to count trust scores: increase for being trusted, decrease for trusting others. Judge will have score `n-1`.
* **Time:** `O(n + t)`
* **Space:** `O(n)`

---

### ✅ **36. Snakes and Ladders – Leetcode 909**

* **Approach:** Flatten board into 1D array. Use BFS starting from cell 1. If cell has a snake/ladder, jump accordingly.
* **Time:** `O(n²)`
* **Space:** `O(n²)`

---

### ✅ **37. Data Stream as Disjoint Intervals – Leetcode 352**

* **Approach:** Use a **TreeSet** or **SortedDict** to merge intervals on the fly as new numbers arrive.
* **Time:** `O(log n)` per operation
* **Space:** `O(n)`

---

### ✅ **38. Jump Game IV – Leetcode 1345**

* **Approach:** Use **BFS** to reach the end. From each index, jump to i±1 and all other same-value indices (with visited set).
* **Time:** `O(n)`
* **Space:** `O(n)`

---

### ✅ **39. Can Place Flowers – Leetcode 605**

* **Approach:** Check if a flower can be planted at each position (must have 0 at i, i-1, and i+1). Greedily count placements.
* **Time:** `O(n)`
* **Space:** `O(1)`

---

### ✅ **40. Number of Zero-Filled Subarrays – Leetcode 2348**

* **Approach:** For each sequence of continuous 0’s of length `k`, it contributes `(k * (k + 1)) / 2` subarrays.
* **Time:** `O(n)`
* **Space:** `O(1)`

---

### ✅ **41. Number of Closed Islands – Leetcode 1254**

* **Approach:** Use **DFS** or **BFS** to flood-fill land (`0`) connected to the boundary (not closed). Then count remaining enclosed islands.
* **Time:** `O(m × n)`
* **Space:** `O(m × n)` (recursion or queue)

---

### ✅ **42. Number of Enclaves – Leetcode 1020**

* **Approach:** Similar to closed islands. Flood-fill from boundaries to mark non-enclave land, then count remaining `1`s.
* **Time:** `O(m × n)`
* **Space:** `O(m × n)`

---

### ✅ **43. Kids With the Greatest Number of Candies – Leetcode 1431**

* **Approach:** Find max with extra candies, then check if each kid can reach or exceed it after receiving extra candies.
* **Time:** `O(n)`
* **Space:** `O(n)`

---

### ✅ **44. Spiral Matrix II – Leetcode 59**

* **Approach:** Simulate matrix traversal using boundaries (top, bottom, left, right). Fill numbers incrementally in spiral order.
* **Time:** `O(n²)`
* **Space:** `O(n²)`

---

### ✅ **45. Shortest Bridge – Leetcode 934**

* **Approach:** Use DFS to mark first island, then BFS from it to reach the second island with the shortest distance (bridge).
* **Time:** `O(n²)`
* **Space:** `O(n²)`

---

### ✅ **46. Count Negative Numbers in a Sorted Matrix – Leetcode 1351**

* **Approach:** Binary search in each row (or traverse from top-right) to count negatives efficiently.
* **Time:** `O(m + n)` (if using top-right method)
* **Space:** `O(1)`

---

### ✅ **47. Summary Ranges – Leetcode 228**

* **Approach:** Traverse array and track continuous ranges using two pointers. Store as "start->end" or "val" if single.
* **Time:** `O(n)`
* **Space:** `O(1)` (excluding output)

---

### ✅ **48. K Radius Subarray Averages – Leetcode 2090**

* **Approach:** Use prefix sum array. For each index `i`, compute average from `i-k` to `i+k` (if valid).
* **Time:** `O(n)`
* **Space:** `O(n)`

---

### ✅ **49. Shortest Path in a Grid with Obstacles Elimination – Leetcode 1293**

* **Approach:** **BFS** with an extra state to track how many obstacles you can still eliminate (`k`).
* **Time:** `O(m × n × k)`
* **Space:** `O(m × n × k)`

---

### ✅ **50. Where Will the Ball Fall – Leetcode 1706**

* **Approach:** Simulate ball drop row by row. Follow path depending on slant (`1` or `-1`). Check for stuck conditions.
* **Time:** `O(m × n)`
* **Space:** `O(n)` (for result array)

---

### ✅ **51. Non-overlapping Intervals – Leetcode 435**

* **Approach:** Sort intervals by end time. Greedily pick intervals that don’t overlap. Count removals needed.
* **Time:** `O(n log n)`
* **Space:** `O(1)`

---

### ✅ **52. Kth Largest Element in an Array – Leetcode 215**

* **Approach:** Use a **min-heap** of size `k`, or apply **QuickSelect** (similar to quicksort partition).
* **Time:** `O(n)` average (QuickSelect) or `O(n log k)` (Heap)
* **Space:** `O(1)` for QuickSelect

---

### ✅ **53. 01 Matrix – Leetcode 542**

* **Approach:** BFS starting from all `0`s simultaneously. Track minimum distance to a `0` for each `1`.
* **Time:** `O(m × n)`
* **Space:** `O(m × n)`

---

### ✅ **54. Minimum Penalty for a Shop – Leetcode 2483**

* **Approach:** Prefix sums for counting penalties based on opening hours. Try every split point and pick minimum.
* **Time:** `O(n)`
* **Space:** `O(n)`

---

### ✅ **55. Pascal's Triangle – Leetcode 118**

* **Approach:** Build triangle row by row using the rule: `row[i] = prev[i-1] + prev[i]`.
* **Time:** `O(n²)`
* **Space:** `O(n²)`

---

### ✅ **56. Group the People Given the Group Size They Belong To – Leetcode 1282**

* **Approach:** Use a hashmap to collect people by group size. Once a group is filled, push to result.
* **Time:** `O(n)`
* **Space:** `O(n)`

---

### ✅ **57. The K Weakest Rows in a Matrix – Leetcode 1337**

* **Approach:** Count soldiers in each row (use binary search). Sort rows by soldier count, pick first `k`.
* **Time:** `O(m log n + m log m)`
* **Space:** `O(m)`

---

### ✅ **58. Find the Duplicate Number – Leetcode 287**

* **Approach:** Use **Floyd’s Tortoise and Hare** cycle detection (Linked List style).
* **Time:** `O(n)`
* **Space:** `O(1)`

---

### ✅ **59. Minimum Operations to Reduce X to Zero – Leetcode 1658**

* **Approach:** Convert to finding **longest subarray** with sum = `total - x`.
* **Time:** `O(n)`
* **Space:** `O(n)`

---

### ✅ **60. Median of Two Sorted Arrays – Leetcode 4**

* **Approach:** Use **binary search** on the smaller array to find correct partition.
* **Time:** `O(log(min(n, m)))`
* **Space:** `O(1)`

---

### ✅ **61. Sort Array By Parity – Leetcode 905**

* **Approach:** Two-pointer or in-place swap. Put even numbers first, odd later.
* **Time:** `O(n)`
* **Space:** `O(1)`

---

### ✅ **62. Monotonic Array – Leetcode 896**

* **Approach:** Check if array is entirely non-increasing or non-decreasing.
* **Time:** `O(n)`
* **Space:** `O(1)`

---

### ✅ **63. Majority Element I & II – Leetcode 169 & 229**

* **Approach:** Use **Boyer-Moore Voting Algorithm**: track candidate and count.
* **Time:** `O(n)`
* **Space:** `O(1)`

---

### ✅ **64. Minimum Number of Operations to Make Array Continuous – Leetcode 2009**

* **Approach:** Sort, remove duplicates, use sliding window to find longest possible valid subarray.
* **Time:** `O(n log n)`
* **Space:** `O(n)`

---

### ✅ **65. Pascal's Triangle II – Leetcode 119**

* **Approach:** Use previous row in 1D array, updating from end to start.
* **Time:** `O(n²)`
* **Space:** `O(n)`

---

### ✅ **66. Last Moment Before All Ants Fall Out of a Plank – Leetcode 1503**

* **Approach:** Max time = max distance to end (left-moving → left end, right-moving → right end).
* **Time:** `O(n)`
* **Space:** `O(1)`

---

### ✅ **67. Find the Winner of an Array Game – Leetcode 1535**

* **Approach:** Simulate game. Track winner until it wins `k` rounds.
* **Time:** `O(n)`
* **Space:** `O(1)`

---

### ✅ **68. Reduction Operations to Make the Array Elements Equal – Leetcode 1887**

* **Approach:** Sort array, for each new unique element from right, count operations needed.
* **Time:** `O(n log n)`
* **Space:** `O(1)`

---

### ✅ **69. Minimum Amount of Time to Collect Garbage – Leetcode 2391**

* **Approach:** Traverse array, track last occurrence of each garbage type and sum time + travel.
* **Time:** `O(n)`
* **Space:** `O(1)`

---

### ✅ **70. Diagonal Traverse II – Leetcode 1424**

* **Approach:** Use a **map of diagonals** (i+j as key). Traverse diagonally using BFS or direct construction.
* **Time:** `O(n)`
* **Space:** `O(n)`

---

### ✅ **71. Arithmetic Subarrays – Leetcode 1630**

* **Approach:** For each query, extract subarray → sort → check equal differences between consecutive elements.
* **Time:** `O(q * m log m)` (q = queries, m = subarray length)
* **Space:** `O(m)`

---

### ✅ **72. Sum of Absolute Differences in a Sorted Array – Leetcode 1685**

* **Approach:** Use prefix sum and math formula to calculate difference efficiently:
  `ans[i] = nums[i]*i - prefix[i] + (total - prefix[i]) - nums[i]*(n - i - 1)`
* **Time:** `O(n)`
* **Space:** `O(1)`

---

### ✅ **73. Largest Submatrix With Rearrangements – Leetcode 1727**

* **Approach:** Convert matrix to histogram heights → sort each row in descending → calculate area.
* **Time:** `O(m * n log n)`
* **Space:** `O(m * n)`

---

### ✅ **74. Element Appearing More Than 25% in Sorted Array – Leetcode 1287**

* **Approach:** Check elements at `n/4`, `n/2`, `3n/4` indices → verify count.
* **Time:** `O(log n)`
* **Space:** `O(1)`

---

### ✅ **75. Difference Between Ones and Zeros in Row and Column – Leetcode 2482**

* **Approach:** Precompute row/column sums → for each cell use:
  `diff[i][j] = 2 * (rowsOne[i] + colsOne[j]) - (r + c)`
* **Time:** `O(m * n)`
* **Space:** `O(m + n)`

---

### ✅ **76. Image Smoother – Leetcode 661**

* **Approach:** For each cell, calculate the average of all 3x3 neighboring cells.
* **Time:** `O(m * n)`
* **Space:** `O(1)` (if in-place) or `O(m * n)` (if using new matrix)

---

### ✅ **77. Widest Vertical Area Between Two Points – Leetcode 1637**

* **Approach:** Extract all x-coordinates → sort → find maximum difference between consecutive x-values.
* **Time:** `O(n log n)`
* **Space:** `O(n)`

---

### ✅ **78. Anti Diagonal Traversal of Matrix – GFG POTD**

* **Approach:** Traverse diagonals by fixing `i+j` sum → for each diagonal, collect elements in order.
* **Time:** `O(m * n)`
* **Space:** `O(m + n)` (for result)

---

### ✅ **79. Convert an Array Into a 2D Array With Conditions – Leetcode 2610**

* **Approach:** Use a hashmap to store rows for each element while maintaining max allowed frequency.
* **Time:** `O(n)`
* **Space:** `O(n)`

---

### ✅ **80. Number of Submatrices That Sum to Target – Leetcode 1074**

* **Approach:** Fix row pairs → use prefix sums + hashmap (similar to Subarray Sum Equals K).
* **Time:** `O(n² * m)`
* **Space:** `O(m)`

---

### ✅ **81. Sequential Digits – Leetcode 1291**

* **Approach:** BFS/Sliding window on the string `"123456789"` → extract increasing digit sequences in range.
* **Time:** `O(1)` (Fixed max window length)
* **Space:** `O(1)`

---

### ✅ **82. Rearrange Array Elements by Sign – Leetcode 2149**

* **Approach:** Two-pointer or index tracking → place positive and negative alternately using extra array.
* **Time:** `O(n)`
* **Space:** `O(n)`

---

### ✅ **83. Number of Subarrays That Match a Pattern – Leetcode 3034 / 3036**

* **Approach:** Convert both pattern and subarrays to relative difference arrays → use KMP for pattern match.
* **Time:** `O(n + m)`
* **Space:** `O(n + m)`

---

### ✅ **84. Meeting Rooms III – Leetcode 2402**

* **Approach:** Min-heap (priority queue) to track room availability by end times → greedy allocation.
* **Time:** `O(n log n)`
* **Space:** `O(n)`

---

### ✅ **85. Product of Array Except Self – Leetcode 238**

* **Approach:** Use two-pass approach → prefix product (left) and postfix product (right) without division.
* **Time:** `O(n)`
* **Space:** `O(1)` (output array excluded)

---

### ✅ **86. Contiguous Array – Leetcode 525**

* **Approach:** Replace 0s with -1 → use prefix sum with hashmap to store first index of each sum.
* **Time:** `O(n)`
* **Space:** `O(n)`

---

### ✅ **87. Find All Duplicates in an Array – Leetcode 442**

* **Approach:** Mark visited numbers as negative using index → if already negative, it's a duplicate.
* **Time:** `O(n)`
* **Space:** `O(1)`

---

### ✅ **88. First Missing Positive – Leetcode 41**

* **Approach:** Use index as hash → place each number at `nums[i] = i + 1` → scan for mismatch.
* **Time:** `O(n)`
* **Space:** `O(1)`

---

### ✅ **89. Count Alternating Subarrays – Leetcode 3031**

* **Approach:** Count length of alternating sequence → use combinatorics to count subarrays of size ≥ 2.
* **Time:** `O(n)`
* **Space:** `O(1)`

---

### ✅ **90. Island Perimeter – Leetcode 463**

* **Approach:** Traverse grid → for each land cell, add 4 → subtract 2 for each adjacent land neighbor.
* **Time:** `O(m * n)`
* **Space:** `O(1)`

---

### ✅ **91. Number of Islands – Leetcode 200**

* **Approach:** DFS or BFS from every unvisited `'1'` → mark connected land as visited.
* **Time:** `O(m × n)`
* **Space:** `O(m × n)` (for visited or recursion stack)

---

### ✅ **92. Find All Groups of Farmland – Leetcode 1992**

* **Approach:** DFS from each cell with value 1 → track the bounds of the farmland block.
* **Time:** `O(m × n)`
* **Space:** `O(m × n)`

---

### ✅ **93. Count Number of Nice Subarrays – Leetcode 1248**

* **Approach:** Sliding window + prefix sum / hashmap → count subarrays with exactly k odd numbers.
* **Time:** `O(n)`
* **Space:** `O(n)`

---

### ✅ **94. Minimum Number of K Consecutive Bit Flips – Leetcode 995**

* **Approach:** Greedy with flip marker queue or running flip count → avoid re-flipping.
* **Time:** `O(n)`
* **Space:** `O(k)`

---

### ✅ **95. Minimum Difference Between Largest and Smallest Value in Three Moves – Leetcode 1509**

* **Approach:** Sort array → try removing any 3 largest/smallest elements → get min difference.
* **Time:** `O(n log n)`
* **Space:** `O(1)`

---

### ✅ **96. Average Waiting Time – Leetcode 1701**

* **Approach:** Simulate serving customers → keep track of current time and calculate wait time.
* **Time:** `O(n)`
* **Space:** `O(1)`

---

### ✅ **97. Find Valid Matrix Given Row and Column Sums – Leetcode 1605**

* **Approach:** Greedy: assign `min(rowSum[i], colSum[j])` at `matrix[i][j]`, update both.
* **Time:** `O(m × n)`
* **Space:** `O(m × n)`

---

### ✅ **98. Minimum Operations to Make Array Equal to Target – Leetcode 3229 & 1526**

* **Approach:** Use greedy difference reduction or prefix sum ideas → sort and minimize operations.
* **Time:** `O(n log n)`
* **Space:** `O(n)`

---

### ✅ **99. Count Number of Teams – Leetcode 1395**

* **Approach:** For each middle soldier, count smaller/greater on both sides → calculate valid teams.
* **Time:** `O(n²)`
* **Space:** `O(1)`

---

### ✅ **100. Spiral Matrix III – Leetcode 885**

* **Approach:** Simulate spiral movement in right → down → left → up order, expanding bounds.
* **Time:** `O(R × C)`
* **Space:** `O(R × C)`

---

### ✅ **101. Magic Squares In Grid – Leetcode 840**

* **Approach:** Brute force → check every 3×3 subgrid → verify if all numbers 1–9 exist and magic sum.
* **Time:** `O(m × n)`
* **Space:** `O(1)`

---

### ✅ **102. Regions Cut By Slashes – Leetcode 959**

* **Approach:** Treat each cell as 4 parts (triangles) → use Union-Find or DFS to find number of regions.
* **Time:** `O(n²)`
* **Space:** `O(n²)`

---

### ✅ **103. Minimum Number of Days to Disconnect Island – Leetcode 1568**

* **Approach:** Remove one cell → check if disconnected using DFS. Try at most 2 removals.
* **Time:** `O(m × n)`
* **Space:** `O(m × n)`

---

### ✅ **104. Count Sub Islands – Leetcode 1905**

* **Approach:** For each island in grid2 → check if all land exists in grid1 using DFS.
* **Time:** `O(m × n)`
* **Space:** `O(m × n)`

---

### ✅ **105. Find the Student that Will Replace the Chalk – Leetcode 1894**

* **Approach:** Calculate total chalk usage → take modulo with sum → loop again to find answer.
* **Time:** `O(n)`
* **Space:** `O(1)`

---

### ✅ **106. Walking Robot Simulation – Leetcode 874**

* **Approach:** Simulate direction with `dx, dy` arrays → use a set for obstacles.
* **Time:** `O(n)`
* **Space:** `O(obstacles)`

---

### ✅ **107. Spiral Matrix IV – Leetcode 2326**

* **Approach:** Start from top-left and simulate direction with spiral logic (like Spiral Matrix I).
* **Time:** `O(m × n)`
* **Space:** `O(1)`

---

### ✅ **108. Longest Subarray With Maximum Bitwise AND – Leetcode 2419**

* **Approach:** Find max element → count consecutive streaks of max value.
* **Time:** `O(n)`
* **Space:** `O(1)`

---

### ✅ **109. Minimum Time Difference – Leetcode 539**

* **Approach:** Convert times to minutes → sort → find min diff, also check circular diff (24 hr).
* **Time:** `O(n log n)`
* **Space:** `O(n)`

---

### ✅ **110. My Calendar I – Leetcode 729**

* **Approach:** Keep list of booked intervals → check for overlap before inserting.
* **Time:** `O(n)` per booking
* **Space:** `O(n)`

---

### ✅ **111. My Calendar II – Leetcode 731**

* **Approach:** Track single bookings and double bookings. Only allow booking if it doesn't lead to triple overlap.
* **Data Structures:** Two lists: `booked` and `overlaps`.
* **Time:** `O(n²)`
* **Space:** `O(n)`

---

### ✅ **112. Make Sum Divisible by P – Leetcode 1590**

* **Approach:** Prefix sum + HashMap to find smallest subarray whose removal makes total sum divisible by `p`.
* **Time:** `O(n)`
* **Space:** `O(n)`

---

### ✅ **113. Divide Players Into Teams of Equal Skill – Leetcode 2491**

* **Approach:** Sort the array → form pairs → check each pair’s sum is same → calculate chemistry.
* **Time:** `O(n log n)`
* **Space:** `O(1)`

---

### ✅ **114. The Number of the Smallest Unoccupied Chair – Leetcode 1942**

* **Approach:** Sort arrival & leaving times separately → use Min-Heaps for tracking chairs.
* **Time:** `O(n log n)`
* **Space:** `O(n)`

---

### ✅ **115. Divide Intervals Into Minimum Number of Groups – Leetcode 2406**

* **Approach:** Sweep line or use Min-Heap based on interval end times.
* **Time:** `O(n log n)`
* **Space:** `O(n)`

---

### ✅ **116. Count Number of Maximum Bitwise-OR Subsets – Leetcode 2044**

* **Approach:** Backtracking → compute max OR → count all subsets matching max OR.
* **Time:** `O(2ⁿ × logM)`
* **Space:** `O(n)`

---

### ✅ **117. Longest Square Streak in an Array – Leetcode 2501**

* **Approach:** Sort and use a set → for each number, check if square chain exists.
* **Time:** `O(n log n)`
* **Space:** `O(n)`

---

### ✅ **118. Maximum Number of Moves in a Grid – Leetcode 2684**

* **Approach:** DFS with memoization → move to next column only if increasing value.
* **Time:** `O(m × n)`
* **Space:** `O(m × n)`

---

### ✅ **119. Minimum Number of Removals to Make Mountain Array – Leetcode 1671**

* **Approach:** LIS (Longest Increasing Subsequence) from both sides → combine results to find min removals.
* **Time:** `O(n²)` or `O(n log n)` with binary search
* **Space:** `O(n)`

---

### ✅ **120. Find if Array Can Be Sorted – Leetcode 3011**

* **Approach:** Check positions modulo 2 → sort original and compare parity-wise.
* **Time:** `O(n log n)`
* **Space:** `O(n)`

---

### ✅ **121. Prime Subtraction Operation – Leetcode 2601**

* **Approach:** For each element from right to left, subtract the largest prime less than current value to make array strictly increasing.
* **Use:** Sieve of Eratosthenes to precompute primes.
* **Time:** `O(n√M)`
* **Space:** `O(1)`

---

### ✅ **122. Shortest Subarray to be Removed to Make Array Sorted – Leetcode 1574**

* **Approach:** Two-pointer approach: Find non-decreasing prefix and suffix, then find minimum cut in between.
* **Time:** `O(n)`
* **Space:** `O(1)`

---

### ✅ **123. Count Unguarded Cells in the Grid – Leetcode 2257**

* **Approach:** Mark guards and walls. Simulate guard line of sight in 4 directions to mark guarded cells.
* **Time:** `O(m × n)`
* **Space:** `O(m × n)`

---

### ✅ **124. Flip Columns For Maximum Number of Equal Rows – Leetcode 1072**

* **Approach:** Normalize rows by flipping based on first element, use hash map to count identical patterns.
* **Time:** `O(m × n)`
* **Space:** `O(m)`

---

### ✅ **125. Rotating the Box – Leetcode 1861**

* **Approach:** First apply gravity row-wise (right shift stones), then rotate the matrix 90° clockwise.
* **Time:** `O(m × n)`
* **Space:** `O(m × n)`

---

### ✅ **126. Maximum Matrix Sum – Leetcode 1975**

* **Approach:** Convert all values to positive. Count negatives. If odd, subtract twice the smallest absolute value.
* **Time:** `O(m × n)`
* **Space:** `O(1)`

---

### ✅ **127. Sliding Puzzle – Leetcode 773**

* **Approach:** BFS traversal using string as board state, swap tiles based on allowed moves.
* **Time:** `O(1)` (fixed board size)
* **Space:** `O(1)`

---

### ✅ **128. Two Best Non-Overlapping Events – Leetcode 2054**

* **Approach:** Sort by end time, then keep track of max values seen so far. For each event, find the best non-overlapping one using binary search.
* **Time:** `O(n log n)`
* **Space:** `O(n)`

---

### ✅ **129. Special Array II – Leetcode 3152**

* **Approach:** Try all possible x (0 to n), count elements ≥ x and check if count equals x.
* **Time:** `O(n log n)` (due to sorting)
* **Space:** `O(1)`

---

### ✅ **130. Maximum Beauty of an Array After Applying Operation – Leetcode 2779**

* **Approach:** Convert each number to a range `[num - k, num + k]` and use sweep line or difference array to find the range with most overlaps.
* **Time:** `O(n log n)`
* **Space:** `O(n)`

---

### ✅ **131. Max Chunks To Make Sorted – Leetcode 769**

* **Approach:** Iterate and keep track of max seen so far. If `max == index`, one chunk ends here.
* **Time:** `O(n)`
* **Space:** `O(1)`

---

### ✅ **132. Best Sightseeing Pair – Leetcode 1014**

* **Approach:** Maximize `A[i] + A[j] + i - j`. Keep track of best `A[i] + i` so far and update result using `A[j] - j`.
* **Time:** `O(n)`
* **Space:** `O(1)`

---

### ✅ **133. Count Vowel Strings in Ranges – Leetcode 2559**

* **Approach:** Prefix sum of strings starting and ending with vowels. Answer queries in `O(1)` using precomputed prefix.
* **Time:** `O(n + q)`
* **Space:** `O(n)`

---

### ✅ **134. Number of Ways to Split Array – Leetcode 2270**

* **Approach:** Prefix sum + count splits where left sum ≥ right sum.
* **Time:** `O(n)`
* **Space:** `O(1)`

---

### ✅ **135. Find the Prefix Common Array of Two Arrays – Leetcode 2657**

* **Approach:** Use sets to track seen elements from both arrays and count common elements at each index.
* **Time:** `O(n)`
* **Space:** `O(n)`

---

### ✅ **136. First Completely Painted Row or Column – Leetcode 2661**

* **Approach:** Use hash map to track when each row/column gets fully painted. Use counter arrays.
* **Time:** `O(m × n)`
* **Space:** `O(m + n)`

---

### ✅ **137. Grid Game – Leetcode 2017**

* **Approach:** Minimize the max score of second player. Try all cut points and compute prefix/suffix sums.
* **Time:** `O(n)`
* **Space:** `O(n)`

---

### ✅ **138. Make Lexicographically Smallest Array by Swapping Elements – Leetcode 2948**

* **Approach:** Use greedy + Disjoint Set Union (DSU) to allow allowed swaps within groups and sort them locally.
* **Time:** `O(n log n)`
* **Space:** `O(n)`

---

### ✅ **139. Count Servers that Communicate – Leetcode 1267**

* **Approach:** Count servers row-wise and column-wise. Only count if a row or column has more than 1 server.
* **Time:** `O(m × n)`
* **Space:** `O(m + n)`

---

### ✅ **140. Tuple with Same Product – Leetcode 1726**

* **Approach:** For each pair, compute product and count frequency. Use combination formula to count valid tuples.
* **Time:** `O(n²)`
* **Space:** `O(n²)` (hashmap)

---

### ✅ **141. Max Sum of a Pair With Equal Sum of Digits – Leetcode 2342**

* **Approach:**

  * For each number, compute sum of digits.
  * Use a hash map to store the max number for each digit-sum group.
  * For a new number with same digit-sum, check if pairing gives higher result.

* **Time:** `O(n × log10(maxNum))`

* **Space:** `O(n)`

---

### ✅ **142. Product of the Last K Numbers – Leetcode 1352**

* **Approach:**

  * Store prefix product; handle `0` by restarting the product list.
  * To get product of last `k`, divide `prefix[n] / prefix[n-k]`.

* **Time:** `O(1)` per operation

* **Space:** `O(n)`

---

### ✅ **143. Number of Sub-arrays With Odd Sum – Leetcode 1524**

* **Approach:**

  * Use prefix sums to track count of even and odd prefix sums.
  * At each step, count how many previous prefix sums have different parity.

* **Time:** `O(n)`

* **Space:** `O(1)`

---

### ✅ **144. Maximum Absolute Sum of Any Subarray – Leetcode 1749**

* **Approach:**

  * Use two versions of Kadane’s algorithm: one for max sum, one for min sum.
  * Return `max(abs(max_sum), abs(min_sum))`.

* **Time:** `O(n)`

* **Space:** `O(1)`

---

### ✅ **145. Partition Array According to Given Pivot – Leetcode 2161**

* **Approach:**

  * Iterate through array and build three lists: `< pivot`, `== pivot`, `> pivot`.
  * Concatenate them.

* **Time:** `O(n)`

* **Space:** `O(n)`

---

### ✅ **146. Count Days Without Meetings – Leetcode 3169**

* **Approach:**

  * Use a set or boolean array to mark all meeting days from given intervals.
  * Count unmarked days in the total range.

* **Time:** `O(n + total_days)`

* **Space:** `O(total_days)`

---

### ✅ **147. Check if Grid can be Cut into Sections – Leetcode 3394**

* **Approach:**

  * Reduce to a merge intervals problem.
  * If there is a row where all sections end (or start), return true.

* **Time:** `O(m × n)`

* **Space:** `O(m + n)`

---

### ✅ **148. Maximum Number of Points From Grid Queries – Leetcode 2503**

* **Approach:**

  * Use BFS + Union Find to preprocess reachable cells by increasing value.
  * Binary search over results to answer queries efficiently.

* **Time:** `O(m × n × log q)`

* **Space:** `O(m × n)`

---

### ✅ **149. Count of Interesting Subarrays – Leetcode 2845**

* **Approach:**

  * Transform prefix sum modulo `mod` into a frequency map.
  * Use `(currSum % mod - k + mod) % mod` to count previous matches.

* **Time:** `O(n)`

* **Space:** `O(mod)`

---

### ✅ **150. Set Matrix Zeroes – Leetcode 73**

* **Approach:**

  * Use first row and first column as markers for zeroing.
  * Separate flags for first row/column to avoid overwriting.

* **Time:** `O(m × n)`

* **Space:** `O(1)` (in-place)

---


# BINARY SEARCH

| #  | Problem Title (Leetcode #)                        | Quick Approach                                                              |
| -- | ------------------------------------------------- | --------------------------------------------------------------------------- |
| 1  | First & Last Position in Sorted Array (34)        | Use two binary searches: one for the first and one for the last occurrence. |
| 2  | Find Minimum in Rotated Sorted Array (153)        | Use binary search, check `nums[mid]` against `nums[right]`.                 |
| 3  | Search a 2D Matrix (74)                           | Treat the matrix as a flat array for binary search.                         |
| 4  | Single Element in a Sorted Array (540)            | Binary search on index parity to isolate the unique element.                |
| 5  | Find Rotation Count in Sorted Array               | Binary search for the index of the smallest element.                        |
| 6  | Search in Rotated Sorted Array (33)               | Modified binary search accounting for pivot rotation.                       |
| 7  | Search in Rotated Sorted Array II (81)            | Handle duplicates by adjusting `left` when `mid == left`.                   |
| 8  | Guess Number Higher or Lower (374)                | Standard binary search until guess is correct.                              |
| 9  | Kth Missing Positive Number (1539)                | Use binary search on index vs expected value logic.                         |
| 10 | Minimum Time to Complete Trips (2187)             | Binary search on time; simulate trip count within mid time.                 |
| 11 | Koko Eating Bananas (875)                         | Binary search on possible eating speed.                                     |
| 12 | Binary Search Recursive + Iterative (704)         | Classic binary search template.                                             |
| 13 | Successful Pairs of Spells and Potions (2003)     | Sort potions, use binary search for each spell.                             |
| 14 | Minimize Maximum of Array (2439)                  | Binary search on answer; simulate prefix sum to check validity.             |
| 15 | Maximum Value at a Given Index (1802)             | Binary search on value; use formula to check sum constraint.                |
| 16 | Minimum Cost to Make Array Equal (2448)           | Use median logic or ternary/binary search on cost function.                 |
| 17 | Last Day Where You Can Still Cross (1970)         | Binary search on day; use BFS/DFS/DSU to test connectivity.                 |
| 18 | Peak Index in a Mountain Array (852)              | Binary search for peak where `arr[mid] > arr[mid+1]`.                       |
| 19 | Minimum Speed to Arrive on Time (1870)            | Binary search on speed; simulate time per trip.                             |
| 20 | Maximum Running Time of N Computers (2141)        | Binary search on minutes; simulate distribution.                            |
| 21 | Minimize the Maximum Difference of Pairs (2616)   | Sort + binary search on difference; count valid pairs.                      |
| 22 | Median of Two Sorted Arrays (4)                   | Binary search on smaller array, use partition logic.                        |
| 23 | Number of Flowers in Full Bloom (2251)            | Sort starts/ends; binary search to count active flowers.                    |
| 24 | Find in Mountain Array (1095)                     | Binary search for peak, then binary search both sides.                      |
| 25 | Maximize Frequency Score (2968)                   | Binary search on score; check if it can be achieved.                        |
| 26 | Find the Safest Path in Grid (2812)               | Binary search on max danger level; use BFS to validate.                     |
| 27 | Special Array With X ≥ X (1608)                   | Binary search on `x`; count numbers ≥ `x`.                                  |
| 28 | Most Profit Assigning Work (826)                  | Sort jobs and workers; binary search max profit for each worker.            |
| 29 | Minimum Days to Make m Bouquets (1482)            | Binary search on days; greedy check if bouquets can be made.                |
| 30 | Magnetic Force Between Balls (1552)               | Binary search on minimum force; place balls greedily.                       |
| 31 | K-th Smallest Pair Distance (719)                 | Binary search on distance; count valid pairs <= mid.                        |
| 32 | Most Beautiful Item for Each Query (2070)         | Sort items; binary search for max beauty ≤ price.                           |
| 33 | Count Fair Pairs (2563)                           | Sort array; binary search for range of valid pairs.                         |
| 34 | Minimized Maximum Products Distributed (2064)     | Binary search on max products per store; distribute greedily.               |
| 35 | Minimum Limit of Balls in a Bag (1760)            | Binary search on max allowed per bag; split accordingly.                    |
| 36 | Maximize Minimum Game Score (3449)                | Binary search on min score; simulate valid assignment.                      |
| 37 | Maximum Candies to K Children (2226)              | Binary search on candy per child; count possible shares.                    |
| 38 | House Robber IV (2560)                            | Binary search on max amount; use DP to check if ≤ k houses.                 |
| 39 | Minimum Time to Repair Cars (2594)                | Binary search on time; check total repairs with given mechanics.            |
| 40 | Max Tasks You Can Assign (2071)                   | Binary search on number of tasks; simulate with constraints.                |
| 41 | Minimize Max Adjacent Difference (3357)           | Binary search on max difference; adjust values as needed.                   |
| 42 | K-th Smallest Product of Two Sorted Arrays (2040) | Binary search on value; count pairs with product ≤ mid.                     |



---

# Binary Tree

| #  | Problem (Leetcode #)                         | Quick Approach                                                  |
| -- | -------------------------------------------- | --------------------------------------------------------------- |
| 1  | Binary Tree Right Side View (BFS)            | Level-order traversal; take the last node at each level.        |
| 2  | Binary Tree Right Side View (DFS)            | DFS with right-first order, track depth.                        |
| 3  | Construct Tree from Preorder & Inorder (105) | Recursive DFS; preorder gives root, use inorder for boundaries. |
| 4  | Lowest Common Ancestor (236)                 | DFS postorder; return node if found in both left and right.     |
| 5  | Check Completeness (BFS)                     | Use queue, ensure no nodes after the first `null`.              |
| 6  | Check Completeness (DFS)                     | Track index and total nodes; if index ≥ total, not complete.    |
| 7  | Delete Nodes and Return Forest (1110)        | DFS; when deleting node, its children become roots.             |
| 8  | Find Leaves of Binary Tree                   | DFS; collect leaves by height, remove level by level.           |
| 9  | Binary Tree Pruning (O(n²))                  | Naive DFS; count child values repeatedly.                       |
| 10 | Binary Tree Pruning (O(n))                   | Postorder DFS; prune if left/right subtree is 0.                |
| 11 | Path Sum II (113)                            | DFS backtracking; track path and sum.                           |
| 12 | Path Sum I                                   | DFS; return true if any path sum equals target.                 |
| 13 | Add One Row to Tree (623)                    | BFS or DFS; insert new node at target depth.                    |
| 14 | Count Complete Tree Nodes                    | DFS with height check optimization (O(log²n)).                  |
| 15 | Leaf-Similar Trees (872)                     | DFS; compare leaf values list of two trees.                     |
| 16 | Max Difference Node & Ancestor (1026)        | DFS; track min & max in path.                                   |
| 17 | Max Product of Split Tree                    | DFS; calculate all subtree sums, find max product.              |
| 18 | Binary Tree Max Path Sum                     | Postorder DFS; track max gain and update global max.            |
| 19 | Preorder Traversal                           | DFS with stack or recursion.                                    |
| 20 | Same Tree (100)                              | Recursively compare left and right subtrees.                    |
| 21 | Find Duplicate Subtrees (652)                | Postorder with subtree string serialization.                    |
| 22 | Symmetric Tree (101)                         | DFS to compare mirrored subtrees.                               |
| 23 | Sum Root to Leaf Numbers (129)               | DFS; carry number formed down the path.                         |
| 24 | Construct from Inorder & Postorder (106)     | Postorder gives root, use inorder boundaries.                   |
| 25 | Longest Zigzag Path (1372)                   | DFS; alternate left/right and track length.                     |
| 26 | Maximum Width of Binary Tree (662)           | BFS with indexed nodes; use `(rightIdx - leftIdx + 1)`.         |
| 27 | Max Level Sum (1161)                         | BFS; track level sums.                                          |
| 28 | Minimum Depth (111)                          | BFS preferred; return on first leaf.                            |
| 29 | All Nodes Distance K (863)                   | Convert to graph, BFS from target.                              |
| 30 | Validate Binary Tree Nodes (1361)            | Track in-degrees, ensure one root, no cycles.                   |
| 31 | Find Largest Value per Row (515)             | BFS per level; track max.                                       |
| 32 | Count Nodes Equal to Avg of Subtree (2265)   | DFS; return sum & count, compare with node val.                 |
| 33 | Inorder Traversal (94)                       | Iterative stack or Morris traversal.                            |
| 34 | Time to Infect Tree (2385, BFS)              | Graph + BFS from start node.                                    |
| 35 | Time to Infect Tree (DFS)                    | DFS to find depth and longest path from infected node.          |
| 36 | Distribute Coins (979)                       | DFS; return excess coins per node.                              |
| 37 | Root to Leaf Path with Sum                   | DFS; track sum and path.                                        |
| 38 | Pseudo-Palindromic Paths (1457)              | DFS with bitmask for odd count check.                           |
| 39 | Count Nodes at Distance K from Leaf          | DFS; mark ancestors with visited set.                           |
| 40 | Diameter of Binary Tree (543)                | DFS; update global max with `left + right` height.              |
| 41 | Bottom Left Tree Value (513)                 | BFS; track first node at each level.                            |
| 42 | Even-Odd Tree (1609)                         | BFS per level; check increasing/decreasing and parity.          |
| 43 | Smallest String from Leaf (988)              | DFS; build string bottom-up and compare lex order.              |
| 44 | Delete Leaves with Value (1325)              | Postorder DFS; delete if childless and matches value.           |
| 45 | Create Tree from Descriptions (2196)         | Use hash maps; track root by elimination.                       |
| 46 | Directions from Node to Another (2096)       | Build parent map + DFS paths; find LCA, then move.              |
| 47 | Good Leaf Node Pairs (1530, BFS)             | Build graph, use BFS to count valid pairs.                      |
| 48 | Good Leaf Node Pairs (DFS)                   | Count leaf distances ≤ `distance` in subtree DFS.               |
| 49 | Linked List in Binary Tree (1367)            | DFS tree; check list match on each path.                        |
| 50 | Cousins in Binary Tree II (2641)             | BFS with sum per level, then assign cousin sums.                |
| 51 | Flip Equivalent Trees (951)                  | DFS; try both flipped and non-flipped subtree match.            |
| 52 | Height After Subtree Removal (2458)          | DFS; precompute subtree heights and answer queries.             |
| 53 | Reverse Odd Levels (2415)                    | BFS or DFS; swap node values at odd depths.                     |
| 54 | Min Ops to Sort Binary Tree by Level (2471)  | BFS level-wise; count swaps via index cycles.                   |
| 55 | Find Elements in Contaminated Tree (1261)    | Rebuild tree from root = 0, assign children recursively.        |
| 56 | Recover Tree from Preorder (1028)            | Use stack; track depth and value.                               |
| 57 | Construct Tree from Pre & Postorder (889)    | Recursive; use root and left subtree size from preorder.        |
| 58 | LCA of Deepest Leaves (1123)                 | DFS; return node if left depth = right depth.                   |


---

# LINKED-LIST

---
| #  | Problem (Leetcode #)                                  | Quick Approach                                            |
| -- | ----------------------------------------------------- | --------------------------------------------------------- |
| 1  | Delete Node in Linked List (237)                      | Copy next node’s value to current, delete next node.      |
| 2  | Delete Middle Node (2095)                             | Find mid using slow-fast, delete it via prev pointer.     |
| 3  | Middle of Linked List (876)                           | Slow-fast pointer; slow ends at mid.                      |
| 4  | Odd Even Linked List                                  | Use two pointers to separate odd/even nodes, then merge.  |
| 5  | Linked List Cycle II (142)                            | Floyd’s cycle detection; find cycle start using distance. |
| 6  | Linked List Random Node (382)                         | Reservoir sampling for uniform probability.               |
| 7  | Sorted List to BST (109)                              | Find mid recursively to use as root; divide list.         |
| 8  | Merge k Sorted Lists (23)                             | Use min-heap or divide & conquer to merge.                |
| 9  | Remove Zero Sum Consecutive Nodes (1171)              | Prefix sum + hashmap to identify zero-sum ranges.         |
| 10 | Swap Nodes in Linked List (1721)                      | Count nodes, swap kth from start and end.                 |
| 11 | Swap Nodes in Pairs (24)                              | Recursively or iteratively swap each adjacent pair.       |
| 12 | Maximum Twin Sum (2130)                               | Reverse 2nd half, then calculate sum with first half.     |
| 13 | Add Two Numbers II (445)                              | Use stacks or reverse lists to simulate addition.         |
| 14 | Partition List (86)                                   | Use two lists: one < x, one ≥ x; then join.               |
| 15 | Copy List with Random Pointer (138)                   | Interleave copy nodes, set `random`, then split lists.    |
| 16 | Split Linked List in Parts (725)                      | Count nodes, divide by `k`, distribute extras.            |
| 17 | Reverse Linked List II (92)                           | Reverse sublist from position `left` to `right`.          |
| 18 | Reverse Linked List / Merge Two Sorted Lists (206/21) | Reverse using iterative stack or in-place pointer swap.   |
| 19 | Remove Nth Node From End (19)                         | Use dummy node + fast/slow gap of `n` steps.              |
| 20 | Merge In Between Linked Lists (1669)                  | Traverse both lists, connect prefix/suffix around gap.    |
| 21 | Palindrome Linked List (234)                          | Find mid, reverse 2nd half, compare both halves.          |
| 22 | Reorder List (143)                                    | Find mid, reverse 2nd half, merge alternately.            |
| 23 | Remove Nodes From Linked List (2487)                  | Traverse from end using stack or recursion; keep max.     |
| 24 | Double Number as Linked List (2816)                   | Reverse, double digit by digit, handle carry.             |
| 25 | Merge Nodes in Between Zeros (2181)                   | Traverse, accumulate between 0s, rebuild list.            |
| 26 | Min/Max Nodes Between Critical Points (2058)          | Find local extrema, track min/max distances.              |
| 27 | Delete Nodes in List Present in Array (3217)          | Use `Set` for values to delete, remove nodes.             |
| 28 | Linked List in Binary Tree (1367)                     | DFS tree; check list starting from every node.            |
| 29 | Insert GCDs in Linked List (2807)                     | Traverse, insert GCD of adjacent nodes.                   |

---

# STRING

---
| #  | Problem (Leetcode #)                         | Quick Approach                                             |
| -- | -------------------------------------------- | ---------------------------------------------------------- |
| 1  | String Compression (443)                     | Two pointers: overwrite repeated chars with count.         |
| 2  | Check Pangram (1832)                         | Use a `Set` to track unique letters.                       |
| 3  | Count and Say (38)                           | Simulate reading & counting consecutive chars.             |
| 4  | Integer to Roman                             | Use greedy with symbol-value mapping.                      |
| 5  | Two String Arrays Equivalent                 | Join arrays then compare strings.                          |
| 6  | Orderly Queue                                | If `k > 1`: sort string; else: try all rotations.          |
| 7  | Make String Great (1544)                     | Use stack to remove bad adjacent case pairs.               |
| 8  | Halves Are Alike (1704)                      | Count vowels in both halves and compare.                   |
| 9  | Strings Are Close (1657)                     | Compare char sets and frequency multisets.                 |
| 10 | Detect Capital                               | Check all upper, all lower, or capitalized.                |
| 11 | Delete Columns to Make Sorted (944)          | Check each column if non-decreasing.                       |
| 12 | Restore IP Addresses (93)                    | Backtracking with valid segment checks.                    |
| 13 | Concatenated Words (472)                     | Trie + DFS + memoization to split words.                   |
| 14 | First Occurrence in String (28)              | Implement KMP or use `strstr`.                             |
| 15 | Buddy Strings (859)                          | Swap two mismatched chars and check equality.              |
| 16 | Largest Variance (2272)                      | Kadane's over char pairs, handle negatives.                |
| 17 | Repeated Substring Pattern (459)             | Check if `s` is substring of `s[1:-1] + s`.                |
| 18 | Text Justification (68)                      | Distribute spaces, handle last line specially.             |
| 19 | Is Subsequence (392)                         | Two pointers or binary search with preprocessing.          |
| 20 | Remove Duplicate Letters (316)               | Greedy + monotonic stack + last occurrence.                |
| 21 | Decoded String at Index (880)                | Simulate decoding in reverse (backwards).                  |
| 22 | Reverse Words III (557)                      | Split by spaces and reverse each word.                     |
| 23 | Backspace Compare (844)                      | Stack simulation or reverse traversal.                     |
| 24 | Count Homogenous Substrings (1759)           | Count length of repeated chars: add `len*(len+1)/2`.       |
| 25 | Sort Vowels in a String (2785)               | Extract, sort, and reinsert vowels.                        |
| 26 | Unique Len-3 Palindromic Subsequences (1930) | Count middle chars between equal ends.                     |
| 27 | Find Unique Binary String (1980)             | Use set of given strings, generate missing one.            |
| 28 | Count Beautiful Substrings I (2947)          | Sliding window, check even length + vowel/consonant match. |
| 29 | Count Beautiful Substrings II (2949)         | Same as I with optimized prefix sums.                      |
| 30 | Divide Long Corridor (2147)                  | Count segments between benches (odd/even seats).           |
| 31 | Laser Beams in Bank (2125)                   | Multiply non-zero rows of 1s consecutively.                |
| 32 | Make Anagram Steps (1347)                    | Count char frequency diff between strings.                 |
| 33 | Beautiful Indices                            | KMP-based string matching & filtering by distance.         |
| 34 | Revert Word State (3029/3031)                | KMP + simulation of reverse operations.                    |
| 35 | Custom Sort String (791)                     | Frequency map and sort using `order` string.               |
| 36 | Shortest Uncommon Substring (3076)           | Trie or sliding window + frequency matching.               |
| 37 | Count Substrings w/ Given Start-End          | Count prefix occurrences of `char`.                        |
| 38 | Compare Version Numbers (165)                | Split by dot, compare numeric parts.                       |
| 39 | Append Characters to Make Subsequence (2486) | Two pointers to check subsequence.                         |
| 40 | Sort Jumbled Numbers (2191)                  | Map digits, sort by remapped values.                       |
| 41 | Fraction Add/Subtract (592)                  | Use LCM to handle denominators, sum numerators.            |
| 42 | Closest Palindrome (564)                     | Try mirror around mid, check ±1 variants.                  |
| 43 | Shortest Palindrome (214)                    | KMP/Z-algo to find the longest palindromic prefix.         |
| 44 | Sentence Similarity III (1813)               | Match from both ends, check if one sentence remains.       |
| 45 | Separate Black & White Balls (2938)          | Count inversions or simulate swaps.                        |
| 46 | Maximum Swap (670)                           | Track last seen of digits, greedy swap.                    |
| 47 | Remove Subfolders (1233)                     | Sort paths, skip if prefix exists.                         |
| 48 | String Compression III (3163)                | Run-length encoding of string.                             |
| 49 | Min Changes Binary String (2914)             | Greedy scan; count patterns violating rules.               |
| 50 | Add Spaces to String (2109)                  | Use set of positions, insert spaces accordingly.           |
| 51 | Make Subsequence w/ Cyclic Inc. (2825)       | Check each char with modulo gap logic.                     |
| 52 | Move Pieces to Form String (2337)            | Validate order and movement limits (R/L rules).            |
| 53 | Longest Special Substring (2981/2982)        | Count substring frequencies with sliding window.           |
| 54 | Construct String w/ Repeat Limit (2182)      | Greedy from max freq char, insert others to break.         |
| 55 | Move Balls to Each Box (1769)                | Prefix sums left & right of each index.                    |
| 56 | Word Subsets (916)                           | Max char freq for `B`; check if each `A` word matches.     |
| 57 | K Palindrome Strings (1400)                  | Count odd frequencies; must be ≤ `k`.                      |
| 58 | Min Length After Operations (3223)           | Greedy stack simulation or pattern analysis.               |
| 59 | Construct Smallest Number (2375)             | Greedy with stack to build based on 'I'/'D'.               |
| 60 | Powerful Integers (2999)                     | Brute-force powers of `x`, `y` and combine.                |
| 61 | Lexico Largest String From Box (3403)        | Find all rotations, pick max lexicographically.            |
| 62 | Robot to Print Smallest String (2434)        | Stack to hold chars, pop when stack top ≤ input\[i].       |

---


# DP

Sure! Here's a clean and concise **Dynamic Programming (DP) style sheet** for the **first 60 problems** from the `codestorywithMIK` YouTube playlist you shared. This table includes the problem number, title (with Leetcode number), and a quick approach summary in a structured DP/recursion perspective.

---

| #  | Problem (Leetcode #)                                         | Quick Approach (Recursion/Memo/DP)                                                        |
|----|--------------------------------------------------------------|--------------------------------------------------------------------------------------------|
| 1  | Minimum Difficulty of a Job Schedule (1335)                  | Recursion + Memo + DP; Split jobs into days, minimize max difficulty sum.                |
| 2  | Maximum Length of Concatenated String with Unique Chars (1239) | Backtracking with set; try all combinations, keep max unique length.                      |
| 3  | Ugly Number II (264)                                         | DP with three pointers (2x, 3x, 5x); build sequence.                                       |
| 4  | Perfect Squares (279)                                        | Recursion + Memo; Try all square numbers ≤ n. Bottom-up: min(dp[n−i*i]) + 1               |
| 5  | Maximum Profit in Job Scheduling (1235)                      | Sort by end time + Binary Search + DP on jobs                                              |
| 6  | Arithmetic Slices II - Subsequence (446)                     | DP with map to store diff & count ending at each index                                     |
| 7  | Climbing Stairs (70)                                         | Classic DP: dp[i] = dp[i-1] + dp[i-2]                                                      |
| 8  | Minimum Falling Path Sum (931)                               | Bottom-up DP from second-last row upward                                                   |
| 9  | House Robber (198)                                           | DP[i] = max(dp[i-1], dp[i-2] + nums[i])                                                    |
| 10 | Longest Common Subsequence (1143)                            | Recursion + Memo or classic 2D DP table                                                    |
| 11 | Best Time to Buy/Sell Stock with Cooldown (309)             | 3 states: buy, sell, cooldown — Recursion + Memo                                           |
| 12 | Domino and Tromino Tiling (790)                              | DP[i] = DP[i−1] + DP[i−2] + DP[i−3]                                                        |
| 13 | Jump Game (55)                                               | Greedy; DP[i] = can reach from 0 to i                                                      |
| 14 | Flip String to Monotone Increasing (926)                     | Count 0s & 1s; DP[i] = min flips to make string monotone                                   |
| 15 | Flip String to Monotone Increasing - Optimal (926)           | Greedy with prefix sums                                                                    |
| 16 | Minimum Path Sum (64)                                        | Classic grid DP; dp[i][j] = grid[i][j] + min(dp[i−1][j], dp[i][j−1])                       |
| 17 | Minimum Cost For Tickets (983)                               | Recursion + Memo over days, try 1, 7, 30-day passes                                        |
| 18 | Reducing Dishes (1402)                                       | Sort, try backwards sum, and maximize satisfaction                                         |
| 19 | Scramble String (87)                                         | Recursion + Memo; try all partitions and check scramble                                    |
| 20 | Number of Ways of Cutting a Pizza (1444)                     | 3D DP (row, col, cuts left) + prefix sum for fast apple count                              |
| 21 | Longest Palindromic Subsequence (516)                        | Recursion + Memo: if s[i] == s[j], 2 + dp[i+1][j−1]; else max of dp[i+1][j], dp[i][j−1]    |
| 22 | Max Value of K Coins From Piles (2218)                       | Knapsack style DP; for each pile try taking 0..k coins                                     |
| 23 | Ways to Form Target String (1639)                            | Count chars per position in words → dp[i][j] for using jth word char for ith target char  |
| 24 | Ways to Form Target String - Bottom Up (1639)                | Bottom-up version of #23                                                                   |
| 25 | Profitable Schemes (879)                                     | DP[i][j][k] for i-th crime, j-people used, k-profit gained                                 |
| 26 | Restore The Array (1416)                                     | Recursion + Memo; Split string ≤ k and check valid partitions                             |
| 27 | Minimum Insertion Steps to Make Palindrome (1312)            | LPS-based: length − longest palindromic subsequence                                        |
| 28 | Longest Valid Obstacle Course (1964)                         | DP + binary search; variant of LIS                                                         |
| 29 | Uncrossed Lines (1035)                                       | LCS variation; same as #10                                                                 |
| 30 | Solving Questions With Brainpower (2140)                     | Recursion + Memo or DP; Skip or solve (with cooldown)                                      |
| 31 | Count Ways To Build Good Strings (2466)                      | DP[i] = ways to build length i using zero and one                                          |
| 32 | Count Ways To Build Good Strings - Bottom Up (2466)          | Iterative DP version of #31                                                                |
| 33 | Maximize Score After N Operations (1799)                     | Recursion + Memo + Bitmask; pair elements and recurse                                      |
| 34 | Stone Game II (1140)                                         | DP[i][m] = max stones current player can get                                               |
| 35 | Stone Game III (1406)                                        | DP from end; max(A[i] − dp[i+1]), A[i]+A[i+1] − dp[i+2] etc.                               |
| 36 | Min Cost to Cut a Stick (1547)                               | Interval DP; try all possible cuts between i and j                                         |
| 37 | Make Array Strictly Increasing (1187)                        | Recursion + Memo + Binary Search                                                           |
| 38 | Number of Increasing Paths in a Grid (2328)                  | DFS + Memoization from each cell                                                           |
| 39 | Best Time to Buy and Sell Stock with Fee (714)              | Recursion + Memo or 2 states (holding/selling)                                             |
| 40 | Longest Arithmetic Subsequence (1027)                        | DP[i][diff] = length of arithmetic subsequence ending at i                                 |
| 41 | Tallest Billboard (956)                                      | DP[diff] = max sum for that difference between two groups                                  |
| 42 | Count All Possible Routes (1575)                             | DP[i][fuel] = #ways to reach finish from i using fuel                                      |
| 43 | Longest Arithmetic Subsequence of Given Diff (1218)          | Hashmap: dp[i] = 1 + dp[i − diff]                                                          |
| 44 | Max Events That Can Be Attended II (1751)                    | Sort by end, binary search + DP                                                            |
| 45 | Smallest Sufficient Team (1125)                              | Bitmask DP; dp[mask] = min team to cover skills                                            |
| 46 | Num of Longest Increasing Subseq. (673)                      | LIS + count of how many ways                                                               |
| 47 | Knight Probability in Chessboard (688)                       | Recursion + Memo or 3D DP                                                                  |
| 48 | All Possible Full Binary Trees (894)                         | Recursion + Memo; only odd nodes                                                            |
| 49 | Predict the Winner (486)                                     | Recursion + Memo; score difference for ranges                                               |
| 50 | Soup Servings (808)                                          | Recursion + Memo; track probability                                                        |
| 51 | Strange Printer (664)                                        | Interval DP; min turns to print substring                                                  |
| 52 | Minimum ASCII Delete Sum for Two Strings (712)               | Similar to LCS; sum ASCII of unmatched chars                                               |
| 53 | Word Break (139)                                             | Recursion + Memo; check substrings with dictionary                                         |
| 54 | Unique Binary Search Trees II (95)                           | Recursion + Memo; generate all trees in range                                              |
| 55 | Number of Music Playlists (920)                              | DP[i][j] = i songs, j unique; pick new/old song logic                                      |
| 56 | Coin Change II (518)                                         | Classic DP; dp[i] += dp[i−coin] for each coin                                              |
| 57 | Unique Paths II (63)                                         | Grid DP with obstacles check                                                               |
| 58 | Valid Partition of Array (2369)                              | Check last 2/3 numbers form valid group (same/seq)                                         |
| 59 | Interleaving String (97)                                     | Recursion + Memo or 2D DP                                                                  |
| 60 | Frog Jump (403)                                              | Set + DP[i][j] = can reach stone i with jump j                                             |



| #   | Problem (Leetcode #)                                  | Quick Approach (Recursion/Memo/DP)                             |
| --- | ----------------------------------------------------- | -------------------------------------------------------------- |
| 61  | Min Taps to Water Garden (1326)                       | DP: Treat as jump game; jump to next watered segment           |
| 62  | Extra Characters in a String (2707)                   | Recursion + Memo; min extra chars from substrings in dict      |
| 63  | Unique Paths (62)                                     | Classic DP: dp\[i]\[j] = dp\[i-1]\[j] + dp\[i]\[j-1]           |
| 64  | Champagne Tower (799)                                 | DP\[i]\[j] = overflow from parents (i-1, j-1), (i-1, j) / 2    |
| 65  | Champagne Tower - Bottom Up (799)                     | Bottom-up version using 2D array                               |
| 66  | Integer Break (343)                                   | DP\[i] = max(product of splits); try all partitions            |
| 67  | Max Dot Product of Two Subsequences (1458)            | 2D DP\[i]\[j] = max(dot + prev, skipA, skipB)                  |
| 68  | Min Cost Climbing Stairs (746)                        | DP\[i] = min(dp\[i-1], dp\[i-2]) + cost\[i]                    |
| 69  | Painting the Walls (2742)                             | Recursion + Memo; try free painter or paid one                 |
| 70  | Ways to Stay in Same Place After Steps (1269)         | DP\[step]\[pos] = sum of valid previous positions              |
| 71  | Constrained Subsequence Sum (1425)                    | DP + Sliding Window Max (Deque) for range optimization         |
| 72  | Longest Palindromic Substring (5)                     | Expand around center / DP\[i]\[j] = palindrome check           |
| 73  | Max Points After Collecting Coins (2920)              | Recursion + Memo with subtree dependency                       |
| 74  | Knight Dialer (935)                                   | DP\[i]\[digit] = #ways after i hops from digit                 |
| 75  | Decode Ways (91)                                      | DP\[i] = valid decode options for s\[i] and s\[i-1\:i+1]       |
| 76  | Dice Rolls With Target Sum (1155)                     | 2D DP: dp\[dice]\[sum] = #ways                                 |
| 77  | String Compression II (1531)                          | Recursion + Memo; try keep/remove char, compress group         |
| 78  | String Compression II (2-D Memo) (1531)               | Optimized with one more dimension for prev char count          |
| 79  | Minimum Difficulty of Job Schedule - Bottom Up (1335) | Iterative DP from end; nested loop for max diff                |
| 80  | Ways to Construct Buildings (GFG)                     | DP\[i] = prev ways ending with building/space                  |
| 81  | Max Partitions After Operations (10038)               | Prefix/suffix sum with check for valid partitions              |
| 82  | Out of Boundary Paths (576)                           | DP\[m]\[n]\[k]; count ways to go out in k moves                |
| 83  | K Inverse Pairs Array (629)                           | DP\[n]\[k] = dp\[n-1]\[k-i] for i in 0..min(k,n-1)             |
| 84  | Count Digit Groupings of Number (GFG)                 | Recursion + Memo; digits must form increasing sum parts        |
| 85  | Partition Array for Max Sum (1043)                    | DP\[i] = max of partitions of size ≤ k                         |
| 86  | Perfect Squares - Bottom Up (279)                     | Bottom-up version with 1D dp                                   |
| 87  | Palindromic Substrings (647)                          | Expand around center; count all palindromes                    |
| 88  | Cherry Pickup II (1463)                               | DP\[i]\[j1]\[j2] = max cherries for two persons on row i       |
| 89  | Max Strength of K Disjoint Subarrays (3077)           | Recursion + Memo + DP on segments                              |
| 90  | Valid Parenthesis String (678)                        | 2D DP\[i]\[j] = true if string up to i has j open brackets     |
| 91  | Min Sum by Dividing Array (3117)                      | Group values and minimize largest subset sum                   |
| 92  | Longest Ideal Subsequence (2370)                      | DP\[char] = max prev dp\[c±k] + 1                              |
| 93  | Min Falling Path Sum II (1289)                        | DP\[i]\[j] = min from previous row except same col             |
| 94  | Freedom Trail (514)                                   | Recursion + Memo + DP + Circular String Matching               |
| 95  | Ways to Reach K-th Stair (3154)                       | DP\[i] = dp\[i-1] + dp\[i-2] + ... up to i-m                   |
| 96  | Student Attendance Record II (552)                    | 3D DP\[day]\[A]\[L] = valid attendance sequences               |
| 97  | Filling Bookcase Shelves (1105)                       | Recursion + Memo; try adding books to current shelf or new one |
| 98  | Max Points With Cost (1937)                           | Row DP + absolute diff cost; optimize with trick               |
| 99  | 2 Keys Keyboard (650)                                 | DP\[n] = min steps to reach n via copy/paste                   |
| 100 | Max Moves to Kill Pawns (3283)                        | Strategy + BFS/DFS + Memoization                               |
| 101 | Extra Characters - Bottom Up (2707)                   | Bottom-up version of #62                                       |
| 102 | Count Square Submatrices with All Ones (1277)         | DP\[i]\[j] = min(dp\[top], dp\[left], dp\[diag]) + 1           |
| 103 | Min Total Distance Traveled (2463)                    | Grouping strategy + Median                                     |
| 104 | Minimum Array Sum (3366)                              | Greedy or heap + simulation                                    |
| 105 | Target Sum (494)                                      | Recursion + Memo; Subset sum conversion                        |
| 106 | Max Sum of 3 Non-Overlapping Subarrays (689)          | Prefix sum + sliding window + DP for max sum windows           |
| 107 | Longest Fibonacci Subsequence (873)                   | Hashmap DP\[a]\[b] = length of fib ending with (a,b)           |
| 108 | Partition Equal Subset Sum (416)                      | Classic Subset Sum DP                                          |
| 109 | Merge Ops for Min Travel Time (3538)                  | Recursion + Memo; Similar to burst balloons                    |
| 110 | Balanced Permutations (3343)                          | Math + DP + Modulo + balance count                             |
| 111 | Print Longest Increasing Subsequence                  | LIS with path reconstruction                                   |
| 112 | Longest Unequal Adjacent Groups Subsequence II (2901) | Greedy fails → use DP with char group logic                    |


---



# Sliding Window / Two‑Pointer Problems

---
| #  | Problem (Topic & Leetcode #)                                     | Quick Approach                                                 |
| -- | ---------------------------------------------------------------- | -------------------------------------------------------------- |
| 1  | Count Occurrences of Anagrams (str‑sliding)                      | Fixed‑window + char frequency; slide & compare maps            |
| 2  | Find All Anagrams in a String (438)                              | Same as #1                                                     |
| 3  | Minimum Size Subarray Sum (209)                                  | Two pointers expand/shrink window to meet sum ≥ target         |
| 4  | First Negative Integer in Every Window of Size K                 | Deque of negatives; slide window, pop outdated indices         |
| 5  | Minimum Window Substring (76)                                    | Two pointers + counter map; expand until valid, then shrink    |
| 6  | Contains Duplicate II (sliding)                                  | Map of last seen indices; maintain window size ≤ k             |
| 7  | Count Subarrays with Fixed Bounds (2444)                         | Count subarrays with max/min in bounds; track invalid windows  |
| 8  | Max Vowels in Substring of Given Length (1456)                   | Sliding window + vowel count                                   |
| 9  | K‑Radius Subarray Averages (2090)                                | Prefix sum + window average                                    |
| 10 | Longest Subarray of 1’s After Deleting One Element (1493)        | Track previous and current 1’s streaks                         |
| 11 | Maximize the Confusion of an Exam (2024)                         | Two pointers to maximize window with ≤ k flips                 |
| 12 | Sliding Window Maximum (239)                                     | Monotonic deque stores max candidates                          |
| 13 | Frequency of Most Frequent Element (1838)                        | Expand window; shrink if (window size – maxFreq) > k           |
| 14 | Count Complete Substrings (2953)                                 | Sliding window + char counts to check 'complete' condition     |
| 15 | Binary Subarrays with Sum (930)                                  | Prefix sum + map of seen sums                                  |
| 16 | Subarray Product Less Than K (713)                               | Two pointers + maintain product                                |
| 17 | Length of Longest Subarray with at Most K Frequency (2958)       | Map counts; expand/shrink to enforce ≤ K distinct              |
| 18 | Count Subarrays Where Max Element Appears ≥ K Times (2962)       | Count total - count < K, using sliding window                  |
| 19 | Subarrays with K Different Integers (992, Approach 1)            | Count ≤ K minus count ≤ K-1                                    |
| 20 | Subarrays with K Different Integers (992, One‑pass)              | Two-window (for ≤K and ≤K-1 simultaneously)                    |
| 21 | Get Equal Substrings Within Budget (1208)                        | Two pointers + track cost sum                                  |
| 22 | Subarray with Bitwise AND Closest to K (3171)                    | Maintain deque of AND values; slide window                     |
| 23 | Grumpy Bookstore Owner (1052)                                    | Sliding window + base sum + added unhappy within window        |
| 24 | Longest Continuous Subarray with Abs Diff ≤ Limit (1438)         | Two deques for max/min; shrink until diff ≤ limit              |
| 25 | Min Swaps to Group All 1’s Together II (2134)                    | Sliding window over circular array to minimize zeros in window |
| 26 | Count Substrings That Satisfy K‑Constraint (3258 & 3261)         | Two pointers + track counts/unique constraints                 |
| 27 | Permutation in String (567)                                      | Sliding freq window; compare maps                              |
| 28 | Power of K‑Size Subarrays I (3254) – Simple                      | Sliding window + sum of k elements raised to power             |
| 29 | Power of K‑Size Subarrays I – Monotonic Deque                    | Optimize by reusing previous calculations                      |
| 30 | Shortest Subarray with Sum ≥ K (862)                             | Deque + prefix sums to find minimal length                     |
| 31 | Max Sum of Distinct Subarrays with Length K (2461)               | Sliding window + set + track sum                               |
| 32 | Take K of Each Char from Left & Right (2516)                     | Two-pointer from ends to take K chars                          |
| 33 | Continuous Subarrays (2762)                                      | Sliding window + ensure valid count difference                 |
| 34 | Alternating Groups II (3208)                                     | Track window length where groups alternate                     |
| 35 | Count Substrings Containing Every Vowel & K Consonants II (3306) | Sliding window + vowel/consonant counters                      |
| 36 | Number of Substrings Containing All Three Chars (1358)           | Sliding window + three-char count                              |
| 37 | Longest Nice Subarray (2401)                                     | Ensure AND of window equals window &; shrink on conflict       |
| 38 | Count Number of Good Subarrays (2537)                            | Sliding window + maintain max-min difference ≤ K               |
| 39 | Count Complete Subarrays in Array (2799)                         | Sliding window + freq to determine 'complete' groups           |
| 40 | Count Subarrays with Score < K (2302)                            | Sliding window + update score maintaining distinct counts      |
| 41 | Max Difference Between Even and Odd Frequency II (3445)          | Sliding window + even/odd frequency parity check               |

---