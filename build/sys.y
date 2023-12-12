int fib(int n) {
  int a = 1;
  int b =1;
  int c = 1;
  if (n <= 2) {
    return 1;
  } else {
    return fib(n - 1) + fib(n - 2);
  }
}

int main() {
  int input = getint();
  putint(fib(input));
  putch(10);
  return 0;
}