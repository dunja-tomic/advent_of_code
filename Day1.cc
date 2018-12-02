#include <iostream>
#include <string>
using namespace std;

int main() {
  int freq = 0;

  char op;
  int val;

  while (cin >> op) {
    cout << "Current frequency " << freq << ", ";
    cin >> val;
    cout << "change of " << op << val << "; ";
    if (op == '+') {
      freq += val;
    }
    else if (op == '-') {
      freq -= val;
    }
    cout << "resulting frequency " << freq << endl;
  }
  return 0;
}
