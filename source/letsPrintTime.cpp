#include <iostream>

using namespace std;

int one () {
  return 1;
}

int zero () {
  return 0;
}

// 10:11 AM -> printTime(10, 11, 0)
// 5:20 PM -> printTime(5, 20, 1)
void printTime (int hour, int minute, int period) {
  if (hour < 10) {
    cout << '0';
  }

  cout << hour;
  cout << ':';

  if (minute < 10) {
    cout << '0';
  }

  cout << minute;
  cout << ' ';

  if (period == 0) {
    cout << "AM";
  } else {
    cout << "PM";
  }
  cout << endl;
}

int main() {
  int n = 1;
  printTime(10,20, 0);
  printTime(5,4, 1);
  one();
  return zero();
}
