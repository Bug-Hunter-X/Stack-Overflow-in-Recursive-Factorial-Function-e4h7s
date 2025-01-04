function foo(x: int): int {
  if (x < 0) {
    return 0; // Handle negative input
  } else if (x == 0) {
    return 1;
  } else {
    return x * foo(x - 1);
  }
}

function main(): void {
  echo foo(5);
  echo foo(0);
  echo foo(-3); //test for negative input
}

This solution addresses the issue by adding checks for negative input and providing correct handling in the base case. Now, the recursion terminates properly for all integer inputs.