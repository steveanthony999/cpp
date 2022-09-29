#include <iostream>
using namespace std;

// Control structures that allow you to control the flow of execution of the program.

// Sequential - Ordering statements sequentially.

// Selection - Making decisions.  Allow you to make decisions and executes parts of your program only when certain conditions are true or false.
// Selections statements:
//  if statement
//  if-else statement
//  nested if statements
//  switch statement
//  Conditional operator ?:

// Iteration - Looping or repeating.  These let you loop and repeat parts of your program.
// Iteration - Looping constructs:
//  for loop
//  Range-based for loop
//  while loop
//  do-while loop
//  continue and break
//  infinite loops
//  nested loops

// With these three control structures, you can implement ANY algorithm.


// if statements
// int main() {
//     int num {0};
//     int min {10};
//     int max {100};

//     // if statement executing one statement
//     if (num == 0)
//         ++num;

//     cout << num << endl;


//     // if statement executing more than one statement
//     if (num == 1)
//     {
//         ++num;
//         cout << num << endl;
//     }


//     // if statement checking logical AND
//     cout << "Enter an integer for num: ";
//     cin >> num;

//     if (num >= min && num <= max)
//     {
//         cout << num << " is in range." << endl;
//     }


//     // if statement checking logical OR
//     cout << "Enter an integer for num: ";
//     cin >> num;
    
//     if (num == min || num == max)
//     {
//         cout << num << " is on the boundary." << endl;
//     }
// }


// if-else statement
int main() {
    int num {};
    int target {10};
    
    cout << "Enter an integer to compare to target: ";
    cin >> num;

    if (num >= target)
    {
        cout << num << " is greater than or equal to " << target << endl;
    }
    else
    {
        cout << num << " is less than " << target << endl;
    }
    
}