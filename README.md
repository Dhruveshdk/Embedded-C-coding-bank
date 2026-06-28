## 👋 About This Repository

I created this repo to track my preparation for Embedded Software interviews.
I have tried to collect the imp C Coding problems, that are more likely to come up in embedded interviews and coding tests based on what I found across various sources.

Solving them one by one as I learn, pushing `.c` solutions with notes on approach
as I go. If you're preparing for similar roles and find this useful, feel free to fork it.
Will add advanced topics later..

> 🚧 Work in progress — solutions being added gradually.

# 🔧 My Ultimate C / Embedded C Coding Bank

> A structured, interview-focused coding practice repository for **entry-level Embedded Software roles**.
> Each topic folder contains `.c` solutions with notes. This README acts as the master tracker.

---

## 📌 How to Use This Repo

- ✅ Check the box when a problem is solved and `.c` file is pushed
- 🔴 **Basic** = must-know for fresher / entry-level interviews → focus here first
- 🟣 **Advanced** = good-to-have for senior roles or competitive rounds
- Priority : `⭐⭐⭐` = very high · `⭐⭐` = medium · `⭐` = good to know

---

## 📂 Folder Structure

```
embedded-c-coding-bank/
│
├── 01-bit-manipulation/
├── 02-pointers-arrays-memory/
├── 03-strings/
├── 04-math-number-problems/
├── 05-linked-lists/
├── 06-stack-queue-circular-buffer/
├── 07-structs-unions-bitfields/
├── 08-2d-arrays-matrices/
├── 09-sorting-searching/
└── 10-patterns-state-machines/
```

---

## 🗓️ Phase 1 — Foundations (Week 1)

---

### ⚙️ Topic 1: Bit Manipulation
📁 `01-bit-manipulation/`

> *Why it matters: Register-level programming, flag setting, peripheral control — daily bread for embedded engineers. TI, NXP, STMicro interviewers love this area.*

#### 🔴 Basic — Must Know (Entry Level)

| # | Problem | Priority | Done |
|---|---------|----------|------|
| 1 | Check if a number is odd/even using bitwise AND | ⭐⭐⭐ | [Done] |
| 2 | Set, clear, and toggle the Nth bit of a number | ⭐⭐⭐ | [Done] |
| 3 | Count the number of set bits (Hamming weight) | ⭐⭐⭐ | [Done] |
| 4 | Check if a number is a power of 2 | ⭐⭐⭐ | [Done] |
| 5 | Swap two numbers without a temp variable (XOR swap) | ⭐⭐⭐ | [Done] |
| 6 | Find the only non-repeating element in an array (XOR trick) | ⭐⭐⭐ | [Done] |
| 7 | Extract a bit field from a register value (mask + shift) | ⭐⭐⭐ | [Done] |
| 8 | Reverse all bits of a 32-bit integer | ⭐⭐ | [Done] |

#### 🟣 Advanced — Senior / Competitive

| # | Problem | Priority | Done |
|---|---------|----------|------|
| 9 | Find position of the rightmost set bit | ⭐⭐ | [ ] |
| 10 | Clear all bits from MSB up to a given position | ⭐⭐ | [ ] |
| 11 | Count bits to flip to convert integer A to integer B | ⭐⭐ | [ ] |

---

### 📌 Topic 2: Pointers, Arrays & Memory
📁 `02-pointers-arrays-memory/`

> *Why it matters: Bare-metal code is entirely pointer-driven. Interviewers at TI, NXP, and Renesas specifically ask about pointer arithmetic and memory layout.*

#### 🔴 Basic — Must Know (Entry Level)

| # | Problem | Priority | Done |
|---|---------|----------|------|
| 12 | Find the largest and smallest element in an array | ⭐⭐⭐ | [Done] |
| 13 | Reverse an array in-place | ⭐⭐⭐ | [Done] |
| 14 | Find second largest element without sorting | ⭐⭐⭐ | [Done] |
| 15 | Implement `memcpy`, `memset`, `memmove` from scratch | ⭐⭐⭐ | [ ] |
| 16 | Remove duplicates from a sorted array | ⭐⭐ | [ ] |
| 17 | Rotate an array by K positions | ⭐⭐ | [ ] |

#### 🟣 Advanced — Senior / Competitive

| # | Problem | Priority | Done |
|---|---------|----------|------|
| 18 | Pointer to a function — write a generic sort using function pointer | ⭐⭐ | [ ] |
| 19 | Pointer to array vs array of pointers — size and access demo | ⭐⭐ | [ ] |
| 20 | Implement a simple memory pool allocator (fixed-block) | ⭐⭐ | [ ] |

---

### 🔤 Topic 3: Strings (without `<string.h>`)
📁 `03-strings/`

> *Why it matters: Embedded systems often avoid stdlib. Writing your own string functions is a very common live coding ask at embedded companies.*

#### 🔴 Basic — Must Know (Entry Level)

| # | Problem | Priority | Done |
|---|---------|----------|------|
| 21 | Implement `strlen`, `strcpy`, `strcmp`, `strrev` | ⭐⭐⭐ | [ ] |
| 22 | Check if a string is a palindrome | ⭐⭐⭐ | [ ] |
| 23 | Reverse words in a sentence | ⭐⭐⭐ | [ ] |
| 24 | Convert integer to string and string to integer (no `atoi`/`itoa`) | ⭐⭐⭐ | [ ] |
| 25 | Count vowels, consonants, and words in a string | ⭐⭐ | [ ] |
| 26 | Check if two strings are anagrams | ⭐⭐ | [ ] |

#### 🟣 Advanced — Senior / Competitive

| # | Problem | Priority | Done |
|---|---------|----------|------|
| 27 | Implement `strstr` — find substring without using library | ⭐⭐ | [ ] |
| 28 | Tokenize a string on a custom delimiter (no `strtok`) | ⭐⭐ | [ ] |

---

### 🔢 Topic 4: Math & Number Problems
📁 `04-math-number-problems/`

> *Why it matters: Quick math coding tests algorithmic thinking without requiring advanced DSA. Primes, GCD, and patterns are common warm-up/screening questions.*

#### 🔴 Basic — Must Know (Entry Level)

| # | Problem | Priority | Done |
|---|---------|----------|------|
| 29 | Factorial (iterative + recursive) | ⭐⭐⭐ | [ ] |
| 30 | Fibonacci series (iterative + recursive) | ⭐⭐⭐ | [ ] |
| 31 | Check if a number is prime | ⭐⭐⭐ | [ ] |
| 32 | Find GCD and LCM | ⭐⭐⭐ | [ ] |
| 33 | Reverse digits of a number | ⭐⭐ | [ ] |
| 34 | Print all prime numbers up to N (Sieve of Eratosthenes) | ⭐⭐ | [ ] |

#### 🟣 Advanced — Senior / Competitive

| # | Problem | Priority | Done |
|---|---------|----------|------|
| 35 | Check if a number is an Armstrong number | ⭐⭐ | [ ] |
| 36 | Fast power (x^n) using binary exponentiation | ⭐⭐ | [ ] |

---

## 🗓️ Phase 2 — Core Data Structures (Week 2)

---

### 🔗 Topic 5: Linked Lists
📁 `05-linked-lists/`

> *Why it matters: Hardware buffer descriptors (DMA scatter-gather lists, UART FIFOs) are essentially linked lists. Standard interview topic at TI, STM, and Broadcom.*

#### 🔴 Basic — Must Know (Entry Level)

| # | Problem | Priority | Done |
|---|---------|----------|------|
| 37 | Implement a singly linked list (insert, delete, display) | ⭐⭐⭐ | [ ] |
| 38 | Reverse a linked list (iterative) | ⭐⭐⭐ | [ ] |
| 39 | Detect a cycle in a linked list (Floyd's algorithm) | ⭐⭐⭐ | [ ] |
| 40 | Find the middle of a linked list | ⭐⭐⭐ | [ ] |
| 41 | Merge two sorted linked lists | ⭐⭐ | [ ] |

#### 🟣 Advanced — Senior / Competitive

| # | Problem | Priority | Done |
|---|---------|----------|------|
| 42 | Reverse a linked list in groups of K | ⭐⭐ | [ ] |
| 43 | Find the intersection point of two linked lists | ⭐⭐ | [ ] |

---

### 📦 Topic 6: Stack, Queue & Circular Buffer
📁 `06-stack-queue-circular-buffer/`

> *Why it matters: FIFOs and circular buffers for UART/SPI data are queues. Interrupt call stacks are stacks. This maps directly to real embedded driver code.*

#### 🔴 Basic — Must Know (Entry Level)

| # | Problem | Priority | Done |
|---|---------|----------|------|
| 44 | Implement stack using an array (push, pop, peek, overflow check) | ⭐⭐⭐ | [ ] |
| 45 | Implement a circular buffer / ring buffer using an array | ⭐⭐⭐ | [ ] |
| 46 | Implement a queue using an array (enqueue, dequeue, full/empty check) | ⭐⭐⭐ | [ ] |
| 47 | Check for balanced parentheses using a stack | ⭐⭐⭐ | [ ] |

#### 🟣 Advanced — Senior / Competitive

| # | Problem | Priority | Done |
|---|---------|----------|------|
| 48 | Implement two stacks in a single array | ⭐⭐ | [ ] |
| 49 | Implement a priority queue using an array (RTOS task scheduling context) | ⭐⭐ | [ ] |

---

### 🧩 Topic 7: Structs, Unions, Typedef & Bit-fields
📁 `07-structs-unions-bitfields/`

> *Why it matters: Directly maps to register maps, hardware abstraction layers (HAL), and peripheral configuration structs. High-probability in embedded-specific interviews.*

#### 🔴 Basic — Must Know (Entry Level)

| # | Problem | Priority | Done |
|---|---------|----------|------|
| 50 | Model a GPIO or UART register using a struct with bit-fields | ⭐⭐⭐ | [ ] |
| 51 | Use a union to access individual bytes of a 32-bit integer (endianness check) | ⭐⭐⭐ | [ ] |
| 52 | Implement a simple stack using a struct | ⭐⭐ | [ ] |
| 53 | Write a typedef for a function pointer and use it in a callback | ⭐⭐⭐ | [ ] |

#### 🟣 Advanced — Senior / Competitive

| # | Problem | Priority | Done |
|---|---------|----------|------|
| 54 | Packed struct vs padded struct — demonstrate `sizeof` difference | ⭐⭐ | [ ] |
| 55 | Simulate a register map for a simple peripheral (e.g. SPI) with bit-fields and `volatile` | ⭐⭐ | [ ] |

---

### 🟦 Topic 8: 2D Arrays & Matrices
📁 `08-2d-arrays-matrices/`

> *Why it matters: DSP and image pipeline work (Qualcomm, Cadence, Renesas vision products) involves matrix operations.*

#### 🔴 Basic — Must Know (Entry Level)

| # | Problem | Priority | Done |
|---|---------|----------|------|
| 56 | Transpose a matrix | ⭐⭐⭐ | [ ] |
| 57 | Multiply two matrices | ⭐⭐⭐ | [ ] |
| 58 | Print a matrix in spiral order | ⭐⭐ | [ ] |

#### 🟣 Advanced — Senior / Competitive

| # | Problem | Priority | Done |
|---|---------|----------|------|
| 59 | Rotate a matrix 90 degrees in-place | ⭐⭐ | [ ] |
| 60 | Search in a row-wise and column-wise sorted matrix | ⭐⭐ | [ ] |

---

## 🗓️ Phase 3 — Algorithms (Week 3)

---

### 🔃 Topic 9: Sorting & Searching
📁 `09-sorting-searching/`

> *Why it matters: Knowing trade-offs (bubble = simple, merge = O(n log n)) signals engineering maturity. Binary search appears in calibration tables, LUT lookups, and bootloader image selection.*

#### 🔴 Basic — Must Know (Entry Level)

| # | Problem | Priority | Done |
|---|---------|----------|------|
| 61 | Bubble sort (explain when you'd use it in embedded) | ⭐⭐⭐ | [ ] |
| 62 | Selection sort | ⭐⭐⭐ | [ ] |
| 63 | Insertion sort | ⭐⭐⭐ | [ ] |
| 64 | Binary search (iterative) | ⭐⭐⭐ | [ ] |
| 65 | Find first and last occurrence of a number using binary search | ⭐⭐ | [ ] |

#### 🟣 Advanced — Senior / Competitive

| # | Problem | Priority | Done |
|---|---------|----------|------|
| 66 | Merge sort (recursion + merge step) | ⭐⭐ | [ ] |
| 67 | Quick sort (partition and pivot) | ⭐⭐ | [ ] |

---

### ⭐ Topic 10: Patterns, State Machines & Miscellaneous
📁 `10-patterns-state-machines/`

> *Why it matters: Pattern problems appear in screening rounds. State machines are fundamental to embedded firmware — button debounce, protocol parsers, and RTOS task logic all use FSMs.*

#### 🔴 Basic — Must Know (Entry Level)

| # | Problem | Priority | Done |
|---|---------|----------|------|
| 68 | Print right-angle triangle and pyramid patterns | ⭐⭐⭐ | [ ] |
| 69 | Print Pascal's triangle | ⭐⭐ | [ ] |
| 70 | Implement a simple finite state machine (e.g. traffic light / vending machine) | ⭐⭐⭐ | [ ] |
| 71 | Write an interrupt-safe flag check using the `volatile` keyword | ⭐⭐⭐ | [ ] |

#### 🟣 Advanced — Senior / Competitive

| # | Problem | Priority | Done |
|---|---------|----------|------|
| 72 | Implement a software debounce routine for a button (state machine approach) | ⭐⭐ | [ ] |
| 73 | Implement a simple round-robin scheduler (N tasks, function pointers) | ⭐⭐ | [ ] |

---

## 📊 Progress Tracker

| Phase | Topic | Basic | Advanced | Status |
|-------|-------|-------|----------|--------|
| Phase 1 | Bit Manipulation | 0 / 8 | 0 / 3 | 🔲 Not started |
| Phase 1 | Pointers, Arrays & Memory | 0 / 6 | 0 / 3 | 🔲 Not started |
| Phase 1 | Strings | 0 / 6 | 0 / 2 | 🔲 Not started |
| Phase 1 | Math & Number Problems | 0 / 6 | 0 / 2 | 🔲 Not started |
| Phase 2 | Linked Lists | 0 / 5 | 0 / 2 | 🔲 Not started |
| Phase 2 | Stack, Queue & Circular Buffer | 0 / 4 | 0 / 2 | 🔲 Not started |
| Phase 2 | Structs, Unions & Bit-fields | 0 / 4 | 0 / 2 | 🔲 Not started |
| Phase 2 | 2D Arrays & Matrices | 0 / 3 | 0 / 2 | 🔲 Not started |
| Phase 3 | Sorting & Searching | 0 / 5 | 0 / 2 | 🔲 Not started |
| Phase 3 | Patterns & State Machines | 0 / 4 | 0 / 2 | 🔲 Not started |
| **Total** | | **0 / 58** | **0 / 22** | |

> Update the tracker manually as you solve problems. Change `🔲 Not started` → `🟡 In progress` → `✅ Done`.

---

## 💡 Tips for Each `.c` File

Structure every solution file like this:

```c
/*
 * Problem XX: <Problem Title>
 * Topic: <Topic Name>
 * Difficulty: Basic / Advanced
 *
 * Approach:
 *   - Brief explanation of your logic
 *
 * Time Complexity : O(?)
 * Space Complexity: O(?)
 *
 * Embedded relevance (if any):
 *   - Where this pattern appears in real firmware
 */

#include <stdio.h>

// Your solution here

int main() {
    // Test cases
    return 0;
}
```

---

## 🔗 Reference Links

- [GeeksForGeeks C Practice](https://www.geeksforgeeks.org/explore?category=C)
- [Embedded C Exercises — ewskills](https://ewskills.com/embedded-c)
- [Compiler Explorer (test C online)](https://godbolt.org/)
- [OnlineGDB (run C online)](https://www.onlinegdb.com/online_c_compiler)

---

*Built as interview prep for entry-level Embedded Software roles. Focus on Basic problems first — they cover 80% of what actually appears in fresher-level interviews.*
