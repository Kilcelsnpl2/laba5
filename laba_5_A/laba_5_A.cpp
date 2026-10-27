/****************************
* Автор: Карпов Кирилл      *
* Строки, векторы и словари *
* Вариант 10A               *
****************************/

#include <iostream>
#include <string>

using namespace std;

int main() {
  string text;

  if (!getline(cin, text) || text.length() > 200) {
    cout << "INVALID";
    return 0;
  }

  for (char& symbol : text) {
    if (symbol >= 'A' && symbol <= 'Z') {
      symbol = static_cast<char>(symbol - 'A' + 'a');
    }
  }

  if (text.empty()) {
    cout << "EMPTY";
  }
  else {
    cout << text;
  }

  return 0;
}