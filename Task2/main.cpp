#include <iostream>
using namespace std;

int main()
{
  int input;
  cout << "Enter a number to print pattern: ";
  cin >> input;

  // Upper Triangle
  // j controls the rows, from 1 up to the input size
  for (int j = 1; j <= input; j++)
  {
    // Inner loop A: Prints leading spaces to center the row
    for (int space = 1; space <= input - j; space++)
    {
      cout << " ";
    }

    // Inner loop B: Prints asterisks followed by a space
    for (int i = 1; i <= j; i++)
    {
      cout << '*' << " "; 
    }

    // Move to the next line after completing a row
    cout << endl;
  }

  // Inverted Triangle
  // j controls the rows, starting from (input - 1) down to 1
  for (int j = input - 1; j >= 1; j--)
  {
    // Inner loop A: Prints leading spaces
    for (int space = 1; space <= input - j; space++)
    {
      cout << " ";
    }

    // Inner loop B: Prints asterisks followed by a space
    for (int i = 1; i <= j; i++)
    {
      cout << '*' << " ";
    }

    // Move to the next line after completing a row
    cout << endl;
  }

  return 0;
}
