// COMSC210 | Lab 37 | Tanmayee Chalamalasetti
// IDE Used: VS Code
// Changed file names for ease

#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <string>
using namespace std;

int gen_hash_index(const string& str) {
  int sum = 0;

  for (char c : str) {
    sum += (int)c;
  }

  return sum;
}

int main() {
  // Testing for Milestone 1
  //   string input;
  //   cout << "Enter a string: ";
  //   cin >> input;
  //   cout << "Sum of ASCII values is " << sum_ascii(input) << ".\n";

  // opens and reads data file
  ifstream file("data.txt");
  if (!file) {
    cout << "Error opening the file.\n";
    return 1;
  }

  // initializing hash table
  map<int, list<string>> hash_table;

  // reads each code from data.txt and inserts it into the hash table
  string code;
  while (getline(file, code)) {
    int index = gen_hash_index(code);
    hash_table[index].push_back(code);
  }

  // outputs the first 100 entries
  int count = 0;
  for (const auto& entry : hash_table) {
    cout << count + 1 << ". " << entry.first << ": ";

    for (const auto& code : entry.second) {
      cout << " " << code << " ";
    }

    if (count++ == 100) {
      break;
    }
  }

  // Milestone 2 COMPLETE
  //   int total = 0;
  //   string line;

  //   while (getline(file, line)) {
  //     total += sum_ascii(line);
  //   }
  //   cout << "Total ASCII sum of data file is " << total << ".\n";

  return 0;
}

/*
These targets are present in the dataset and can be used for testing:
536B9DFC93AF
1DA9D64D02A0
666D109AA22E
E1D2665B21EA
*/
