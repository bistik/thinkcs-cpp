#include <iostream>

using namespace std;

int factorial (int n) {
  if (n == 0) {
    return 1;
  } else {
    int recurse = factorial (n-1);
    int result = n * recurse;
    return result;
  }
}

int main () {
  for (int n = 5; n >= 0; n--) {
    cout << "factorial of " << n << " is " << factorial(n) << endl;  
  }
  return 0;
}
