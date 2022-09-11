/* The following is an example of using a loop 
to compute a mathematical quantity. The program
computes the greatest common divisor (GCD) among
two user-entered integers numA and numB, using
Euclid's algorithm: If numA > numB, set numA to numA - numB, else set numB to numB - numA.
These steps are repeated until numA equals numB, at which point numA and numB each equal the GCD. */

int main() {
   int numA;
   int numB;
   
   cout << "Enter first positive integer: ";
   cin  >> numA;
   
   cout << "Enter second positive integer: ";
   cin  >> numB;
   
   while (numA != numB) { // Euclid's algorithm
      if (numB > numA) {
         numB = numB - numA;
      }
      else {
         numA = numA - numB;
      }
   }
   
   cout << "GCD is: " << numA << endl;
   
   return 0;
}