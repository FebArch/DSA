# DSA Practice — Linked List, Stack, Recursion & Queue

 **Language:** C  
 **Rule:** Try to solve each problem yourself before looking at hints/solutions.

 **For every problem, record:**
 - [ ] Solved without help
 - [ ] Time Complexity
 - [ ] Space Complexity
 - [ ] Tested edge cases
 - [ ] Can explain the logic without code

---

# 1. Linked List

## 🟢 Level 1 — Foundation

### 1. Reverse a Singly Linked List
- [x] Solved
- **Constraint:** Iterative only
- **Target:** O(n) time, O(1) space
- **Status:** ✅ Already solved

---

### 2. Reverse a Doubly Linked List
- [ ] Solved
- **Constraint:** Reverse both `next` and `prev`
- **Target:** O(n) time, O(1) space
- **Status:** ⚠️ Already attempted — revisit and fix

---

### 3. Find the Middle Node
- [x] Solved
- **Constraint:** One traversal
- **Target:** O(n) time, O(1) space
- **Pattern:** Slow + Fast pointers
- **Status:** ✅ Already solved

---

### 4. Find Nth Node From End
- [x] Solved
- **Constraint:** One traversal
- **Target:** O(n) time, O(1) space
- **Pattern:** Two pointers with a gap
- **Status:** ✅ Already solved

---

### 5. Delete the Nth Node From End
- [ ] Solved
- **Constraint:** One traversal
- **Target:** O(n) time, O(1) space
- **Important:** Handle deletion of the head

---

### 6. Count Occurrences of a Value
Given:

`10 → 20 → 10 → 30 → 10`

Find how many times `10` occurs.

- [ ] Solved
- **Target:** O(n) time

---

### 7. Find Maximum and Minimum
Find both maximum and minimum values in one traversal.

- [x] Solved
- **Target:** O(n) time
- **Constraint:** One traversal

---

### 8. Remove a Node by Value
Delete the first occurrence of a given value.

- [x] Solved
- **Must handle:**
  - Empty list
  - Head deletion
  * Middle deletion~~
  - Last-node deletion
  - Value not found

---

### 9. Remove All Occurrences
Given:

`1 → 2 → 3 → 2 → 4 → 2`

Remove every `2`.

Result:

`1 → 3 → 4`

- [ ] Solved

---

### 10. Insert at a Given Position
Implement:

`insert(position, value)`

- [ ] Solved
- **Must handle:**
  - Position 0
  - Middle
  - End
  - Invalid position

---

# 🟡 Level 2 — Two Pointer & Structural Problems

### 11. Detect a Cycle
Example:

`1 → 2 → 3 → 4`
`    ↑       ↓`
`    ← ← ← ← ←`

- [x] Solved
- **Constraint:** No extra array
- **Constraint:** O(1) extra space
- **Pattern:** Floyd's Cycle Detection

---

### 12. Find the Starting Node of a Cycle
Don't just detect the cycle.

Return the node where the cycle begins.

- [ ] Solved
- **Target:** O(n) time, O(1) space
- **Pattern:** Floyd's algorithm

---

### 13. Remove a Cycle
Detect the cycle and permanently restore the list.

- [ ] Solved
- **Target:** O(n) time, O(1) space

---

### 14. Check if a Linked List is a Palindrome
Example:

`1 → 2 → 3 → 2 → 1`

Result:

`true`

- [ ] Solved
- **Target:** O(n) time
- **Target:** O(1) extra space
- **Challenge:** Don't copy values into an array

---

### 15. Find Intersection of Two Linked Lists
Two lists eventually share the same nodes.

Find the first common node.

- [ ] Solved
- **Target:** O(n) time
- **Target:** O(1) space

---

### 16. Merge Two Sorted Linked Lists
Example:

`1 → 4 → 7`

`2 → 3 → 8`

Result:

`1 → 2 → 3 → 4 → 7 → 8`

- [ ] Solved
- **Constraint:** Don't create a new list of values
- **Target:** O(n + m)

---

### 17. Sort a Linked List
Given an unsorted linked list, sort it.

- [ ] Solved
- **Constraint:** Don't convert it to an array
- **Challenge:** Try to achieve O(n log n)

---

### 18. Reverse Nodes in Groups of K
Example:

`1 → 2 → 3 → 4 → 5 → 6`

`k = 3`

Result:

`3 → 2 → 1 → 6 → 5 → 4`

- [ ] Solved
- **Target:** O(n) time
- **Challenge:** No extra list

---

### 19. Rotate Linked List
Example:

`1 → 2 → 3 → 4 → 5`

`k = 2`

Result:

`4 → 5 → 1 → 2 → 3`

- [ ] Solved
- **Target:** O(n) time

---

### 20. Clone a Linked List with Random Pointer
Each node has:

- `next`
- `random`

Create a completely independent copy.

- [ ] Solved
- **Difficulty:** 🔴 Hard

---
