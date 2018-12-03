#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int frequency(string fname) {
  int freq = 0;
  vector<int> f;
  f.emplace_back(freq);

  char op;
  int val;
  
  ifstream file{fname};

  while (1) {
    // If EOF has been reached before the duplicate has been found, read from the file again
    if (file.eof()) {
        file.clear();
        file.seekg(0);
    }
    file >> op;
    cout << "Current frequency " << freq << ", ";
    file >> val;
    cout << "change of " << op << val << "; ";
    if (op == '+') {
      freq += val;
    }
    else if (op == '-') {
      freq -= val;
    }
    cout << "resulting frequency " << freq << endl;
    
    // See if this frequency has already been reached
    if (std::find(f.begin(), f.end(), freq) != f.end()) {
      cout << "Found duplicate: " << freq << endl;
      break;
    } else {
      f.emplace_back(freq);
    }
  }
  return freq;
}

// Takes the name of the file containing the frequencies as a command line argument
int main(int argc, char *argv[]) {
  int dupFreq = frequency(argv[1]);
  cout << "The duplicate frequency is: " << dupFreq << endl;

  return 0;
}
