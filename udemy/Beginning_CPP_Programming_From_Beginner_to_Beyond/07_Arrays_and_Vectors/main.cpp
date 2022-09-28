#include <iostream>

int main() {
    // Declare an array named vowels and initialize with char elements 'a', 'e', 'i', 'o', 'u'
    // char vowels[] {'a', 'e', 'i', 'o', 'u'};

    // Access vowel at index 0
    // std::cout << vowels[0] << std::endl; // a

    // Access vowel at index 1
    // std::cout << vowels[1] << std::endl; // e

    // Trying to access vowel at index 5
    // std::cout << vowels[5] << std::endl; // array index 5 is past the end of the array (which contains 5 elements) [-Warray-bounds]gcc

    // Override the value of vowels at index 0 with user input (will only accept 1 char)
    // std::cin >> vowels[0];
    // std::cout << vowels[0] <<std::endl;

    // Trying to input a value at vowels at index 6
    // std::cin >> vowels[6];
    // std::cout << vowels[6] <<std::endl; // It accepts it, as arrays in C++ have no bounds check, but may either crash or behave unexpectedly

    // ========================================================================================================================

    // Declare an array names test_scores with size of 5, but not initialized
    // int test_scores[5];

    // std::cout << "The test score at index 0 is: " << test_scores[0] << std::endl; // returns junk value
    // std::cout << "The test score at index 1 is: " << test_scores[1] << std::endl; // returns junk value
    // std::cout << "The test score at index 2 is: " << test_scores[2] << std::endl; // returns junk value
    // std::cout << "The test score at index 3 is: " << test_scores[3] << std::endl; // returns junk value
    // std::cout << "The test score at index 4 is: " << test_scores[4] << std::endl; // returns junk value


    // Declare an array names test_scores with size of 5, but initialize every element to 0
    // int test_scores[5] {};

    // std::cout << "The test score at index 0 is: " << test_scores[0] << std::endl; // returns 0
    // std::cout << "The test score at index 1 is: " << test_scores[1] << std::endl; // returns 0
    // std::cout << "The test score at index 2 is: " << test_scores[2] << std::endl; // returns 0
    // std::cout << "The test score at index 3 is: " << test_scores[3] << std::endl; // returns 0
    // std::cout << "The test score at index 4 is: " << test_scores[4] << std::endl; // returns 0


    // NOTE - When declaring char arrays with size of x, whether or not you intialize with {}, each returns ' '
    // NOTE - the same applies for double, long, float, long long, etc. as int


    // Declare an array names test_scores with size of 5. When one number is used as the initializer, only the first index stores that value, while the rest store 0. Same behavior if you added a 2nd initializer, 2nd index would store the second initialized value.
    // int test_scores[5] {100};

    // std::cout << "The test score at index 0 is: " << test_scores[0] << std::endl; // returns 100
    // std::cout << "The test score at index 1 is: " << test_scores[1] << std::endl; // returns 0
    // std::cout << "The test score at index 2 is: " << test_scores[2] << std::endl; // returns 0
    // std::cout << "The test score at index 3 is: " << test_scores[3] << std::endl; // returns 0
    // std::cout << "The test score at index 4 is: " << test_scores[4] << std::endl; // returns 0


    // Declare and initialize the array at size 5. Input the test scores from the console either as "10 20 30 40 50" or "10 enter" "20 enter" "30 enter" "40 enter" "50 enter"
    // int test_scores[5] {};

    // std::cout << "Enter 5 test scores: " << std::endl;
    // std::cin >> test_scores[0];
    // std::cin >> test_scores[1];
    // std::cin >> test_scores[2];
    // std::cin >> test_scores[3];
    // std::cin >> test_scores[4];

    // std::cout << "The test score at index 0 is: " << test_scores[0] << std::endl;
    // std::cout << "The test score at index 1 is: " << test_scores[1] << std::endl;
    // std::cout << "The test score at index 2 is: " << test_scores[2] << std::endl;
    // std::cout << "The test score at index 3 is: " << test_scores[3] << std::endl;
    // std::cout << "The test score at index 4 is: " << test_scores[4] << std::endl;


    // int test_scores[5] {};

    // std::cout << "The value of the array name is: " << test_scores << std::endl; // Returns the memory address of the array // The value of the array name is: 0x7ff7b0aa13e0

    // ========================================================================================================================

    // Declaring and initializing a multidimensional array
    // int multidimensional_array[5][6]
    // {
    //     {0, 1, 2, 3, 4, 5},
    //     {6, 7, 8, 9, 10, 11},
    //     {12, 13, 14, 15, 16},
    //     {17, 18, 19, 20, 21},
    //     {22, 23, 24, 25, 26},
    // };

    // std::cout << multidimensional_array[2][3] << std::endl;
}