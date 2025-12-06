// COMSC210 | Lab 37 | Tanmayee Chalamalasetti
// IDE Used: VS Code
// Changed starter file name to main for ease

#include <iostream>
#include <string>
using namespace std;

int sum_ascii(const string& str) {
  int sum = 0;

  for (char c : str) {
    sum += (int)c;
  }

  return sum;
}

int main() {
  char a = 'A';
  cout << a << endl;
  cout << (int)a << endl;
  int b = 66;
  cout << b << endl;
  cout << (char)b << endl;

  string input;
  cout << "Enter a string: ";
  cin >> input;
  cout << "Sum of ASCII values is " << sum_ascii(input) << ".";

  return 0;
}

/*
These targets are present in the dataset and can be used for testing:
536B9DFC93AF
1DA9D64D02A0
666D109AA22E
E1D2665B21EA
*/
