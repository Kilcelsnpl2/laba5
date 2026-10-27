/*****************
* Часть C        *
*****************/

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  int count;
  map<string, long long> dictionary;

  if (!(cin >> count) || count < 0 || count > 100) {
    cout << "INVALID";
    return 0;
  }

  for (int i = 0; i < count; ++i) {
    string key;
    long long value;

    if (!(cin >> key >> value) || key.empty()) {
      cout << "INVALID";
      return 0;
    }

    dictionary[key] = value;
  }

  string queryKey;
  long long increment;

  if (!(cin >> queryKey >> increment) ||
    queryKey.empty() || increment < -1000 || increment > 1000) {
    cout << "INVALID";
    return 0;
  }

  dictionary[queryKey] += increment;

  for (const auto& entry : dictionary) {
    cout << entry.first << ' ' << entry.second << '\n';
  }

  return 0;
}
