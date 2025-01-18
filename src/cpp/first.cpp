// https://onlinegdb.com/hG7mufhwy (also in MyProjects for kocoyla)
// old and buggy: https://onlinegdb.com/mIrXpag0dV

#include <iostream>
#include <string>
#include <limits>
#include <string>

typedef unsigned long Num;

// const Num MaxNum = std::numeric_limits<Num>::max();
// used that MaxNum to figure out that fib(93) overflows the max().
const int MagicNumber = 92;
const int MagicNumber2 = 1476; // we don't need more memo than this. See numeric limit for doubles.

const int N = MagicNumber2;

Num memo[N+1]{};
double memo2[N+1]{};

Num fib(int n);
double fib2(int n);

void printAll(int n);
void printFib(int n);

using std::endl, std::cerr, std::cin, std::cout, std::stoi;

int main(int argc, char** argv) {
  if (argc < 2) {
    cerr << "Please input a number. Like so:\n\t"
	 << argv[0] << " 10\n"
	 << "or, \n\t"
	 << argv[0] << " -all 10\n";
    return 1;
  }
  bool printFullSequence = false;
  int n{};
  if (argc == 3) {
    printFullSequence = true;
    n = stoi(argv[2]);
  } else {
    n = stoi(argv[1]);
  }
  if (n > N) {
    cerr << "Sorry, we can only compute up to fib(" << N << ")." << endl;
    return 2;
  }
  if (printFullSequence) printAll(n);
  else {
    cout << "Fibonacci(" << n << ")=";
    printFib(n);
  }
  
  return 0;
}

void printFib(int n) {
  if (n > MagicNumber) printf("%.5e\n", fib2(n));
  else cout << fib(n) << endl;
}

void printAll(int n) {
  for (int i{}; i<n+1; ++i) {
    cout << i << " -> ";
    printFib(i);
  }
}

Num fib(int n) {
  if (n < 2) return 1;
  if (memo[n] != 0) return memo[n];
  return memo[n] = fib(n-1) + fib(n-2);
}

double fib2(int n) {
  if (memo[n] != 0) return double(memo[n]);
  if (memo2[n] != 0) return memo2[n];
  if (n <= MagicNumber) return double(fib(n));
  return memo2[n] = fib2(n-1) + fib2(n-2);
}  
