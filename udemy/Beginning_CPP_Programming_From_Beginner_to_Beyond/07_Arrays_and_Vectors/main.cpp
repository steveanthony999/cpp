#include <iostream>
#include <vector>

int main() {

    // ARRAYS

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

    // ========================================================================================================================

    // VECTORS

    // When creating a vector, we're creating an object that we can ask to perform operations (methods)

    // Vectors must include the vector library #include <vector>

    // Declares an empty vector of type int 
    // std::vector <int> test_scores;

    // Declares a vector of type int and size 5
    // std::vector <int> test_scores (5); // using constructor initialization syntax, which provides information inside parentheses


    // Declaring and initializing vectors
    // std::vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

    // std::vector <int> test_scores {100, 98, 89, 79, 95};

    // When initializing this vector, the first value in the parentheses (parameter) is the initial size of the vector (365), while the 2nd value is what will be initialized in all 365 doubles
    // std::vector <double> high_temps (365, 100.2);

    // NOTE - There are many ways to declare vectors


    // Accessing vector elements

    // using array syntax
    // std::vector <int> test_scores {100, 98, 89, 79, 95};

    // std::cout << test_scores[0] << std::endl;
    // std::cout << test_scores[1] << std::endl;
    // std::cout << test_scores[2] << std::endl;
    // std::cout << test_scores[3] << std::endl;
    // std::cout << test_scores[4] << std::endl;


    // using vector syntax 'at' method
    // std::vector <int> test_scores {100, 98, 89, 79, 95};

    // std::cout << test_scores.at(0) << std::endl;
    // std::cout << test_scores.at(1) << std::endl;
    // std::cout << test_scores.at(2) << std::endl;
    // std::cout << test_scores.at(3) << std::endl;
    // std::cout << test_scores.at(4) << std::endl;


    // Changing the contents of a vector element
    // std::vector <int> test_scores {100, 98, 89, 79, 95};

    // std::cout << test_scores.at(0) << std::endl;
    // std::cout << test_scores.at(1) << std::endl;
    // std::cout << test_scores.at(2) << std::endl;
    // std::cout << test_scores.at(3) << std::endl;
    // std::cout << test_scores.at(4) << std::endl;

    // test_scores.at(0) = 90;

    // std::cout << test_scores.at(0) << std::endl; // 90


    // Growing vectors as needed
    // std::vector <int> test_scores {100, 98, 89, 79, 95}; // Initial size is 5

    // std::cout << test_scores.at(0) << std::endl;
    // std::cout << test_scores.at(1) << std::endl;
    // std::cout << test_scores.at(2) << std::endl;
    // std::cout << test_scores.at(3) << std::endl;
    // std::cout << test_scores.at(4) << std::endl;

    // test_scores.push_back(110);

    // std::cout << test_scores.at(5) << std::endl; // Increased vector size by 1. In this case, the new vector size is 6


    // Going out of bounds
    // std::vector <int> test_scores {100, 98};

    // std::cout << test_scores[2] << std::endl; // When using array syntax, provides no bounds checking
    // std::cout << test_scores.at(2) << std::endl; // libc++abi: terminating with uncaught exception of type std::out_of_range: vector


    // Get the size of the vector using the size() method
    // std::vector <int> test_scores {100, 98, 89, 79, 95};

    // std::cout << "The size of vector test_scores is: " << test_scores.size() << std::endl; // 5

    // test_scores.push_back(110);

    // std::cout << "The NEW size of vector test_scores is: " << test_scores.size() << std::endl; // 6


    // Taking user input and pushing to the vector
    // int num_to_add {0}; // Declare an int variable and initialize to 0

    // std::vector <int> num_vector; // Declare a vector with no initialization

    // std::cout << "Input a number to add to the vector" << std::endl; // Prompt user to enter a number
    // std::cin >> num_to_add;

    // num_vector.push_back(num_to_add); // Push to vector

    // // Do it all again
    // std::cout << "Input a number to add to the vector" << std::endl;
    // std::cin >> num_to_add;

    // num_vector.push_back(num_to_add);

    // // Iterate through vector and output numbers
    // for (int i = 0; i < num_vector.size(); i++) {
    //     std::cout << num_vector.at(i) << " ";
    // }

    // std::cout << std::endl;


    // 2D Vector
    // std::vector <std::vector <int>> vec
    // {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}
    // };

    // for (int i = 0; i < vec.size(); i++) {
    //     for (int j = 0; j < vec.size(); j++) {
    //         std::cout << vec.at(i).at(j) << " ";
    //     }
    // }


    // Section challenge
    // std::vector <int> vector_1;
    // std::vector <int> vector_2;
    // std::vector <std::vector <int>> vector_2d;

    // vector_1.push_back(10);
    // vector_1.push_back(20);

    // std::cout << vector_1.at(0) << " " << vector_1.at(1) << " " << vector_1.size() << std::endl; // 10 20 2

    // vector_2.push_back(100);
    // vector_2.push_back(200);

    // std::cout << vector_2.at(0) << " " << vector_2.at(1) << " " << vector_2.size() << std::endl; // 100 200 2

    // vector_2d.push_back(vector_1);
    // vector_2d.push_back(vector_2);

    // std::cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << std::endl; // 10 20
    // std::cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << std::endl; // 100 200

    // vector_1.at(0) = 1000;

    // std::cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << std::endl; // 10 20 // Although you'd expect the first element to be 1000, it's not as the vector_1 that was pushed into vector_2d is just a copy of vector_1
    // std::cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << std::endl; // 100 200

    // std::cout << vector_1.at(0) << " " << vector_1.at(1) << std::endl; // 1000 20
}