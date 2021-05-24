/*
* Name        : line.cpp
* Author      : Luke Sathrum
* Description : A driver to assist in testing your Queue class.
*/

#include <iostream>
#include <cstdlib>
#include "queue.h"
using std::cout;
using std::endl;
using std::cin;
using std::string;

void ClearScreen();

int main() {
  Queue line;
  string input;
  do {
    ClearScreen();
    cout << "There are currently " << line.size() << " people in line." << endl;
    cout << "First in Line: " << line.GetFront() << endl;
    cout << "Last in Line : " << line.GetEnd() << endl;
    cout << "The Line     : " << line.ToString() << endl;

    cout << "(1) Add a person to the end of the line\n"
         << "(2) Remove the person at the beginning of the line\n"
         << "(3) Clear the line\n" << "Hit <enter> to Exit\n";
    getline(cin, input);
    if (input.length() > 0) {
      switch (input.at(0)) {
        case '1':
          cout << "Enter the name of the person to add: ";
          getline(cin, input);
          line.Push(input);
          break;
        case '2':
          line.Pop();
          break;
        case '3':
          line.Clear();
          break;
      }
    }
  } while (input.length() > 0);
}

// For testing (DO NOT ALTER)
void ClearScreen() {
  system("printf \"\\033c\"");
}
