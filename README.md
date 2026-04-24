# Less-is-More-The-Sparse-Matrix

# Sparse Matrix Representation (Simple Approach)

## Overview

In this assignment, I worked with a matrix where most of the values were zero. Storing all values directly felt inefficient because a lot of space was being used just to store zeros.

So instead of keeping the full matrix, I focused on storing only the useful values (non-zero elements).

---

## Approach Used

I used a simple method where I scan the matrix row by row.

Whenever I find a non-zero value, I store:
- its row index
- its column index
- the actual value

Instead of using a complex structure, I used three arrays:
- one for row indices
- one for column indices
- one for values

This made the logic easier to understand and implement.

---

## Steps Followed

1. Take matrix input from the user (row-wise).
2. Print the matrix to verify correct input.
3. Traverse the matrix using loops.
4. Check each element:
   - If it is non-zero → store its position and value.
5. Print the sparse representation.
6. Compare memory usage of both methods.

---

## Example
0 0 0 0 1
0 2 0 0 0
0 0 0 1 0
0 0 0 3 0


### Sparse Output


0 4 1
1 1 2
2 3 1
3 3 3


---

## Memory Comparison

- Full matrix stores all values:

rows × columns × size of int


- Sparse representation stores only non-zero values:

non-zero elements × 3 × size of int


This helps reduce memory usage significantly when most values are zero.

---

## Observations

While working on this, I realized that:
- Many real-world datasets are sparse
- Storing unnecessary data increases memory usage
- A simple change in storage method can make a big difference

---

## Challenges Faced

Understanding how to correctly track row and column indices took some effort.  
I also had to test the code multiple times to make sure the input and output were aligned properly.

---

## Conclusion

This approach is simple but effective.  
It reduces memory usage and is easy to implement using basic concepts like arrays and loops.

It also helped me understand how thinking about data representation can improve efficiency.

### Input Matrix
