
---
## 🟢 Level 1 — Understand Recursion

### 50. Print Numbers 1 → N
Use recursion only.

- [ ] Solved

---

### 51. Print Numbers N → 1
Use recursion only.

- [x] Solved

---

### 52. Sum of First N Numbers
Calculate:

`1 + 2 + ... + N`

- [x] Solved

---

### 53. Factorial
Calculate `N!`.

- [x] Solved

---

### 54. Power Function
Calculate:

`x^n`

- [x] Solved

---

### 55. Sum of Digits
Example:

`12345 → 15`

- [ ] Solved

---

### 56. Count Digits
Example:

`123456 → 6`

- [ ] Solved

---

### 57. Reverse a Number
Example:

`12345 → 54321`

- [ ] Solved

---

### 58. Check Palindrome String
Example:

`madam → true`

- [ ] Solved

---

### 59. Fibonacci
Calculate nth Fibonacci number.

- [ ] Solved
- **Important:** Analyze why the naive recursive solution is slow.

---

# 🟡 Level 2 — Recursion + Problem Solving

### 60. Reverse a Linked List Recursively
- [ ] Solved
- **Important:** Understand pointer changes

---

### 61. Find Maximum in an Array Recursively
- [ ] Solved

---

### 62. Check if Array is Sorted
Determine recursively whether an array is sorted.

- [ ] Solved

---

### 63. Binary Search Recursively
- [ ] Solved
- **Target:** O(log n)

---

### 64. Sum of Array Elements Recursively
- [ ] Solved

---

### 65. Count Occurrences in Array
Count how many times `x` occurs.

- [ ] Solved

---

### 66. Generate All Subsequences
Example:

`ABC`

Generate:

`"", A, B, C, AB, AC, BC, ABC`

- [ ] Solved
- **Difficulty:** 🟡 Medium

---

### 67. Generate All Permutations
Example:

`ABC`

Generate all possible permutations.

- [ ] Solved
- **Difficulty:** 🟡 Medium

---

### 68. Tower of Hanoi
Solve for N disks.

- [ ] Solved
- **Important:** Draw the recursion tree.

---

### 69. Generate Balanced Parentheses
For `n = 3`:

`((()))`
`(()())`
`(())()`
`()(())`
`()()()`

- [ ] Solved
- **Difficulty:** 🔴 Hard

---

### 70. Maze Path
Given a grid, find all possible paths from start to destination.

- [ ] Solved
- **Pattern:** Backtracking

---

# 5. Mixed Problems — Strengthen Your Patterns

These are intentionally mixed. **Don't look at the data structure name before solving.**

### 71. Undo Operations
A text editor supports:

- Type
- Undo
- Redo

Design the data structure.

- [ ] Solved
- **Think first:** Which structures?

---

### 72. Browser Back and Forward
Support:

- Visit page
- Back
- Forward

- [ ] Solved
- **Think first:** Which structures?

---

### 73. Check Expression Validity
Given an expression such as:

`{[(a+b) * (c-d)]}`

determine whether brackets are valid.

- [ ] Solved
- **Think first:** Which structure?

---

### 74. Evaluate an Arithmetic Expression
Support:

`+ - * / ( )`

Example:

`2 + 3 * 4`

- [ ] Solved
- **Difficulty:** 🔴 Hard
- **Think first:** Which structure?

---

### 75. Implement an LRU Cache
Operations:

- `get(key)`
- `put(key,value)`

Both should be O(1).

- [ ] Solved
- **Difficulty:** 🔴 Hard
- **Think first:** Which data structures?

---

### 76. Detect Whether a Linked List Contains a Cycle
Solve it in **three different ways**:

1. Extra array
2. Hashing
3. Two pointers

- [ ] Solved
- **Goal:** Compare trade-offs

---

### 77. Reverse a Linked List
Solve it three ways:

1. Iterative
2. Recursive
3. Using an explicit stack

- [ ] Solved
- **Goal:** Compare time and space

---

### 78. Queue-Based CPU Scheduler
Given tasks arriving at different times, simulate Round-Robin scheduling.

- [ ] Solved
- **Think about:** Queue

---

### 79. Function Call Stack Simulator
Simulate function calls:

`main() → A() → B() → C()`

Track:

- Function name
- Return point
- Local data

- [ ] Solved
- **Think about:** Stack

---

### 80. Recursive Expression Parser
Build a simple parser capable of handling:

`2 + 3 * (4 + 5)`

- [ ] Solved
- **Difficulty:** 🔴 Hard
- **Think about:** Recursion + Stack