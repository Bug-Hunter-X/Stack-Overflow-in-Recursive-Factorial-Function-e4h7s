function foo(x: int): int {
  if (x == 0) {
    return 1;
  } else {
    return x * foo(x - 1);
  }
}

function main(): void {
  echo foo(5);
}

This code will lead to a stack overflow error for large values of x, because it recursively calls itself without a base case to stop the recursion for values that are not 0.  The base case `if (x == 0)` will only stop the recursion for x = 0, while recursion continues for x>0. 