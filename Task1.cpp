 #include <iostream>
 #include <cstdlib>
 #include <ctime>

 using namespace std;

 int main() {
     srand(time(0));
     int target = rand() % 100 + 1; // Random number between 1 and 100
     int guess;
     int attempts = 0;

     cout << "Welcome to the Number Guessing Game!\n";

     do {
         cout << "Guess the number (1-100): ";
         cin >> guess;
         attempts++;

         if (guess < target) {
             cout << "Too low! Try a higher number.\n";
         } else if (guess > target) {
             cout << "Too high! Try a lower number.\n";
         } else {
             cout << "Congratulations! You've guessed the number in " << attempts << " attempts!\n";
         }
     } while (guess != target);

     return 0;
 }
