#include <iostream>
#include <cmath>

using namespace std;


void countdown (int n) {
  if (n == 0) {
    cout << "blastoff!" << endl;
  } else {
    cout << n << endl;
    countdown (n - 1);
  }
}
int main() {

  countdown(20);
  cout << log(10) << endl;
  return 0;
}
