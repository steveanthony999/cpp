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
// int main() {
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


    // Write code that uses a for loop to calculate the sum of the odd integers from 1 to 15, inclusive. The final result should be stored in an integer variable named sum .
    // int sum {0};
    
    // for (int i = 1; i <= 15; ++i) {
    //     if (i % 2 == 1) {
    //         sum += i;
    //     }
    // }

    // cout << sum << endl;


    // Range based for loops
    // The idea of range based for loops is to loop through a collection of elements and access each element without having to worry about the length of the collection, incrementing or decrementing looping variables or subscripting indexes.

    // int scores [] {100,200,300};

    // for (int score: scores)
    // {
    //     cout << score << endl;
    // }


    // We don't have to explicitly define the variable of the for loop, instead, we can use the auto keyword
    // int scores [] {100,200,300};

    // for (auto score: scores)
    // {
    //     cout << score << endl;
    // }


    // vector <double> temps {98.6, 100.5, 32.7, 99.5};

    // double avg_temp {};
    // double running_sum {};

    // for (auto temp : temps)
    // {
    //     running_sum += temp;
    // }

    // avg_temp = running_sum / temps.size();

    // cout << avg_temp << " " << running_sum << endl;


    // Use range-based for loop to iterate over a string
    // for (auto i : "Steve")
    // {
    //     cout << i << endl;
    // }

    // string steve {"Steve"};

    // for (auto i : steve)
    // {
    //     cout << i << endl;
    // }


    // Use a range-based for loop to loop through a given vector of integers and determine how many elements in the vector are evenly divisible by either 3 or by 5.
    // vector <int> my_vec {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    // int count {0};

    // for (auto i : my_vec)
    //     if (i % 3 == 0 || i % 5 == 0)
    //         count += 1;
        
    // cout << count << endl;


    // While Loops
    // The while loop is an example of a pre test loop, because the test is done at the beginning of the loop, so it's possible that if the test fails immediately, the loop body may never execute

    // Simple while loop
    // int i {1};

    // while (i <= 5)
    // {
    //     cout << i << endl;
    //     ++i;
    // }


    // int i {1};

    // while (i <= 100)
    // {
    //     if (i % 2 == 0) {
    //         cout << i << endl;
    //     }
    //     ++i;
    // }


    // while loop with array
    // int scores[] {100,101,102};
    // int i {0};

    // while (i < 3)
    // {
    //     cout << scores[i] << endl;
    //     ++i;
    // }
    
    
    // Input validation
    // int user_num {};

    // cout << "Enter a number less than 100: ";
    // cin >> user_num;

    // while (user_num >= 100)
    // {
    //     cout << "Enter a number less than 100: ";
    //     cin >> user_num;
    // }

    // cout << "Thanks" << endl;


    // Testing if user input is in range
    // int user_num {};

    // cout << "Enter a number between 1 and 5: ";
    // cin >> user_num;

    // while (user_num <= 1 || user_num >= 5)
    // {
    //     cout << "Enter a number between 1 and 5: ";
    //     cin >> user_num;
    // }

    // cout << "Thanks!" << endl;
    
    
    // Input validation with boolean flag
    // bool is_done {false};
    // int user_num {0};

    // while (!is_done)
    // {
    //     cout << "Enter a number between 1 and 5: ";
    //     cin >> user_num;

    //     if (user_num <= 1 || user_num >= 5)
    //     {
    //         cout << "Out of range, try again" << endl;
    //     } else {
    //         cout << "Thanks!" << endl;
    //         is_done = true;
    //     }
        
    // }
    

    // vector <int> vec {1,6,27,86,54,89,345,767,-99,25,44};
    // int count {0};
    // size_t index {0};
    
    // while (index < vec.size() && vec.at(index) != -99) {
    //     ++count;
    //     ++index;
    // }

    // cout << count << endl;


    // do-while loop
    // In do-while loops, the condition is checked at the end of each iteration


    // input validation
    // int number {};
    
    // do
    // {
    //     cout << "Enter a number between 1 and 5: ";
    //     cin >> number;
    // } while (number <= 1 || number >= 5);
    
    // cout << "Yay!" << endl;


    // Area calculation with calculate another
    // char selection {};

    // do
    // {
    //     double width {}, height {};

    //     cout << "Enter width and height, separated by a space: ";
    //     cin >> width >> height;

    //     double area {width * height};

    //     cout << "The area is " << area << endl;

    //     cout << "Calculate another? (Y/N): ";
    //     cin >> selection;
    // } while (selection == 'y' || selection == 'Y');

    // cout << "Have a great day!" << endl;
    

    // Simple menu system
    // char selection {};

    // do
    // {
    //     cout << "\n------------------------------" << endl;
    //     cout << "1: Add New Journal" << endl;
    //     cout << "2: Read Last Journal" << endl;
    //     cout << "3: See All Journals" << endl;
    //     cout << "4: Delete Last Journal" << endl;
    //     cin >> selection;

    //     switch (selection)
    //     {
    //     case '1':
    //         cout << "Add your journal entry" << endl;
    //         break;
    //     case '2':
    //         cout << "Read your last journal entry" << endl;
    //         break;
    //     case '3':
    //         cout << "See all of your journal entries" << endl;
    //         break;
    //     case '4':
    //         cout << "Delete your last journal entry" << endl;
    //         break;
    //     case 'q':
    //     case 'Q':
    //         cout << "Goodbye!" << endl;
    //         break;
        
    //     default:
    //         cout << "Illegal entry" << endl;
    //     }
    // } while (selection != 'q' && selection != 'Q');
    
// }


// continue and break statements

// continue - When a continue statement is executed in a loop, no further statements in the body of the loop are executed and control immediately goes directly to the beginning of the loop for the next iteration.  Skip processing in the rest of this iteration and go to the beginning of the loop.  In the case of the for loop and the while loop, the condition will be immediately tested again.

// break - When the break statement is executed in the loop, no further statements in the body are executed and the loop is terminated.  Control is transferred to the statement immediately following the loop.

// int main() {
//     vector <int> values {1,2,-1,69,420,-99,83,-4, 23, -1, 30};

//     for (auto val : values)
//     {
//         if (val == -99)
//         {
//             break; // break out of the statement immediately if condition is met
//         } else if (val == -1)
//         {
//             continue; // If condition is met, value is ignored, stops iteration and goes back to the beginning of the loop
//         } else {
//             cout << val << endl;
//         }
        
        
//     }
    
// }