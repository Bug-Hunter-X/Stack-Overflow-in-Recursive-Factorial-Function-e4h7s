# Hack Recursion Bug

This repository demonstrates a common error in recursive functions written in Hack: stack overflow due to an incomplete base case. The `foo` function calculates the factorial, but its recursion only stops when `x` is 0.  For positive integers, the recursion continues indefinitely, leading to a stack overflow.

The solution demonstrates how to correctly handle the base case to prevent this error.  The solution adds handling for a wider range of input values to make the function more robust. 

## How to Reproduce

1. Clone this repository.
2. Compile and run `bug.hh` (you'll get a stack overflow for sufficiently large input). 
3. Examine `bugSolution.hh` to see the corrected code.