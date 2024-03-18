#include "stdio.h"
int fibonacci(int n) {
  if (n == 0 || n == 1) {
    return n;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}
void loop(int n) {
  if (n == 0) {
    printf("%d ", 0);
    return;
  }
  loop(n - 1);
  printf("%d ", fibonacci(n));
  return;
}
int main(void) {
  int n;
  puts("Enter a number: ");
  scanf("%d", &n);
  loop(n);
  return 0;
}
