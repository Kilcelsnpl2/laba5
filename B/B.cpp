/*****************
* Часть B        *
*****************/
 
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int count;
  vector<int> numbers;

  if (!(cin >> count) || count < 0 || count > 100) {
    cout << "INVALID";
    return 0;
  }

  for (int i = 0; i < count; ++i) {
    int number;

    if (!(cin >> number) || number < -1000 || number > 1000) {
      cout << "INVALID";
      return 0;
    }

    numbers.push_back(number);
  }

  if (numbers.empty()) {
    cout << "EMPTY";
    return 0;
  }

  for (int i = count - 1; i >= 0; --i) {
    if (i != count - 1) {
      cout << ' ';
    }

    cout << numbers[i];
  }

  return 0;
}
