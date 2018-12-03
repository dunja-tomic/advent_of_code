#include <map>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string num;
  int doub = 0;
  int trip = 0;
  bool d = false;
  bool t = false;
  while (cin >> num) {
    map<char, int> sums;
    int len = num.length();

    for (int i = 0; i < len; i++) {
      if (sums.count(num[i]) != 0) sums[num[i]]++;
      else sums.insert( pair <char, int>(num[i], 1) );
    }
    for (auto it = sums.begin(); it != sums.end(); ++it ) {
      if (it->second == 2 && !d) {
          doub++;
          d = true;
      } else if (it->second == 3 && !t) {
          trip++;
          t = true;
      }
    }
    d = false;
    t = false;
    cout << "Doubles: " << doub;
    cout << " Triples: " << trip;
    cout << " Product: " << doub  * trip << endl;
  }
  cout << "Final product: " << doub * trip << endl;
}
