#include <iostream>
#include <iomanip>
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

        // Check if ways is zero, meaning it's impossible to draw
        if (ways == 0) {
            cout << "Impossible scenario!" << endl;
            return 1;
        }

        // Compute the probability of winning
        double probability = 1.0 / ways;

        // Compute the odds of winning
        double odds = ways - 1;

        // Output the results with fixed precision
        cout << fixed << setprecision(4);  // Set precision to 4 decimal places
        cout << "Probability of winning is " << probability << endl;
        cout << "Odds of winning are 1 in " << odds << endl;

        // Ask if the user wants to calculate another scenario
        cout << "\nWould you like to calculate the probability of another scenario? (y/n): ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');

    return 0;
}

