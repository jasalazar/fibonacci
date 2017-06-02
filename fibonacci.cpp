#include <iostream>
#include <cassert>

// The following code calls a naive algorithm for computing a Fibonacci number.

int fibonacci_naive(int n) {
    if (n <= 1)
        return n;

    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}

// The following code calls a faster algorithm for computing a Fibonacci number.

int fibonacci_fast(int n) {
    int fib[45];
    fib[0] = 0;
    fib[1] = 1;
    if (n >= 0 && n <= 45){

    	for (int i = 2; i <= n; ++i){

			     fib[i] = fib[i-1] + fib[i-2];
      }

		return fib[n];
    } else {

    	return 0;

    }
    return 0;
}

int main() {
    int n = 0;
    std::cin >> n;
    std::cout << fibonacci_fast(n) << '\n';
    return 0;
}
