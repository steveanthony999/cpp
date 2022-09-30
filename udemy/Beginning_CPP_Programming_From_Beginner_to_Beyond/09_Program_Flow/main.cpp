#include <iostream>
#include <vector>
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
// int main() {
//     int num {};
//     int target {10};
    
//     cout << "Enter an integer to compare to target: ";
//     cin >> num;

//     if (num >= target)
//     {
//         cout << num << " is greater than or equal to " << target << endl;
//     }
//     else
//     {
//         cout << num << " is less than " << target << endl;
//     }
// }


// nested if statement
// int main() {
//     int score_team_a {0};
//     int score_team_b {0};

//     cout << "Enter the score for team a: ";
//     cin >> score_team_a;

//     cout << "Enter the score for team b: ";
//     cin >> score_team_b;

//     if (score_team_a != score_team_b)
//         if (score_team_a > score_team_b)
//             cout << "Team a has won!" << endl;
//         else
//             cout << "Team b has won!" << endl;
//     else
//         cout << "It's a tie!" << endl;

//     // Written in ternary
//     // score_team_a != score_team_b ? score_team_a > score_team_b ? cout << "Team a has won!" << endl : cout << "Team b has won!" << endl : cout << "It's a tie!" << endl;
// }


// Switch statement
// int main() {
    // char random_letter {};

    // cout << "Enter a random letter from (A-F) to receive a compliment: ";
    // cin >> random_letter;

    // switch (random_letter)
    // {
    // case 'a':
    // case 'A':
    //     cout << "You are smart!" << endl;
    //     break;
    // case 'b':
    // case 'B':
    //     cout << "You are beautiful!" << endl;
    //     break;
    // case 'c':
    // case 'C':
    //     cout << "You are going to rule the world!" << endl;
    //     break;
    // case 'd':
    // case 'D':
    //     cout << "You are doing great!" << endl;
    //     break;
    // case 'e':
    // case 'E':
    //     cout << "You are a genius!" << endl;
    //     break;
    // case 'f':
    // case 'F':
    //     cout << "You are an amazing person!" << endl;
    //     break;
    
    // default:
    //     cout << "Invalid entry" << endl;
    // }


    // Switch with enumeration
    // enum Direction {
    //     left, right, up, down
    // };

    // Direction heading {right};

    // switch (heading)
    // {
    // case left:
    //     cout << "Moving left";
    //     cout << endl;
    //     break;
    // case up:
    //     cout << "Moving up";
    //     cout << endl;
    //     break;
    // case down:
    //     cout << "Moving down";
    //     cout << endl;
    //     break;
    // case right:
    //     cout << "Moving right";
    //     cout << endl;
    //     break;
    
    // default:
    //     cout << "No direction chose" << endl;
    // }
// }


// ITERATORS

// for loop
int main() {
    // increment by 1
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << i << endl;
    // }
    

    // decrement by 1
    // for (size_t i = 10; i > 0; --i)
    // {
    //     cout << i << endl;
    // }
    
    
    // increment by 2
    // for (size_t i = 0; i < 100; i += 2)
    // {
    //     cout << i << endl;
    // }
    

    // increment by 10 and output only what's divisible by 15
    // for (size_t i = 0; i < 500; i += 10)
    // {
    //     if (i % 15 == 0)
    //     {
    //         cout << i << endl;
    //     }
        
    // }
    

    // comma separated for loop
    // for (size_t i = 0, j = 10; i < 10; ++i, ++ j)
    // {
    //     cout << i << " " << j << endl;
    // }
    

    // for loop that outputs in a table style
    // for (size_t i = 0; i <= 100; ++i)
    // {
    //     if (i % 10 == 0)
    //     {
    //         cout << i << endl;
    //     } else {
    //         cout << i << " ";
    //     }
        
    // }
    

    // loop through vector
    // vector <int> my_vec {100,200,300,400,500,600,700,800,900,1000};

    // for (size_t i = 0; i < my_vec.size(); ++i)
    // {
    //     cout << my_vec.at(i) << " ";
    // }
}