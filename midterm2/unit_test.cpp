#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "natural_list.h"
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::setw;
using std::setfill;

void ClearScreen();

int main() {
  cout.setf(std::ios::left);
  NaturalList list(10);
  char choice;
  int input, value;
  do {
    ClearScreen();
    cout << setfill('-') << setw(62) << "" << "\n" << setfill(' ')
         << "|  Values: " << setw(50) << list.ToString() << "|\n"
         << "|    Size: " << setw(50) << list.GetSize() << "|\n"
         << "|Capacity: " << setw(50) << list.GetCapacity() << "|\n"
         << "|     Sum: " << setw(50) << list.Sum() << "|\n" << "| Average: "
         << setw(50) << list.Average() << "|\n" << setfill('-') << setw(62)
         << "" << endl;
    cout << "Which Operation to Perform?\n" << "(1) Add\n" << "(2) Get\n"
         << "(3) Empty\n" << "(4) Exit\n";
    cin >> choice;
    switch (choice) {
      case '1':
        cout << "Enter the value to add: ";
        cin >> input;
        if (list.Add(input))
          cout << "Added Successfully!";
        else
          cout << "List Full or Incorrect Value";
        cout << endl << "Hit enter to continue." << endl;
        cin.ignore(1000, '\n');
        cin.get();
        break;
      case '2':
        cout << "Enter the index to get: ";
        cin >> input;
        value = list.GetNumber(input);
        if (value == 0)
          cout << "That index does not exist or the list is empty.";
        else
          cout << "The value at index " << input << " is " << value;
        cout << endl << "Hit enter to continue." << endl;
        cin.ignore(1000, '\n');
        cin.get();
        break;
      case '3':
        cout << "New list size: ";
        cin >> input;
        list.Clear(input);
        break;
    }
  } while (choice != '4');
}

// For testing (DO NOT ALTER)
void ClearScreen() {
  system("printf \"\\033c\"");
}
