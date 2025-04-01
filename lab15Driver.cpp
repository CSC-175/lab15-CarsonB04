#include <iostream>
#include "lab15.cpp"  // Include the lab15.cpp file for functions

using namespace std;

int main() {
    int n, k;
    char choice;

    do {
        // Get lottery information from the user
        getInfo(n, k);

        // Compute the number of possible ways
        double ways = computeWays(n, k);

        // Compute the probability of winning
        double probability = 1.0 / ways;

        // Compute the odds of winning
        double odds = ways - 1;

        // Output the results
        cout << "Probability of winning is " << probability << endl;
        cout << "Odds of winning are 1 in " << odds << endl;

        // Ask if the user wants to calculate another scenario
        cout << "Would you like to calculate the probability of another scenario? (y/n): ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');

    return 0;
}
