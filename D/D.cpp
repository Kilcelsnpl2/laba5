/*****************
* Часть D        *
*****************/

#include <iostream>
#include <string>

using namespace std;

int main() {
  int count;

  if (!(cin >> count) || count < 0 || count > 100) {
    cout << "INVALID";
    return 0;
  }

  cin.ignore(10000, '\n');

  for (int i = 0; i < count; ++i) {
    string name;
    string email;

    if (!getline(cin, name) || !getline(cin, email) ||
      name.empty() || email.empty()) {
      cout << "INVALID";
      return 0;
    }

    int atCount = 0;
    int atPosition = -1;
    bool hasSpace = false;

    for (int j = 0; j < static_cast<int>(email.length()); ++j) {
      if (email[j] == '@') {
        ++atCount;
        atPosition = j;
      }

      if (email[j] == ' ') {
        hasSpace = true;
      }
    }

    bool isValid = atCount == 1 &&
      atPosition > 0 &&
      atPosition < static_cast<int>(email.length()) - 1 &&
      !hasSpace;

    if (!isValid) {
      cout << name << '\n';
    }
  }

  return 0;
}
