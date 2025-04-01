#include <iostream>
using namespace std;

// Function prototypes
void getInfo(int&, int&);
double computeWays(int, int);
double factorial(int);

/*******************************************************************
* getLotteryInfo                                                   *
* Gets and validates lottery info from the user and places it in   *
* reference parameters referencing variables in the main function. *
********************************************************************/
void getInfo(int &n, int &k) {
    bool validInput = false;

    // Get number of balls (1-12)
    do {
        cout << "How many balls (1-12) are in the pool to pick from? ";
        cin >> n;

        // Validate the input
        if(n < 1 || n > 12) {
            cout << "Input Error! There must be between 1 and 12 balls." << endl;
        } else {
            validInput = true;
        }
    } while(!validInput);

    validInput = false;

    // Get how many balls to be drawn
    do {
        cout << "How many balls (1-" << n << ") will be drawn? ";
        cin >> k;

        // Validate the input
        if(k < 1 || k > n) {
            cout << "Input Error! The number of balls to draw must be between 1 and " << n << "." << endl;
        } else {
            validInput = true;
        }
    } while(!validInput);
}

/*******************************************************************
* computeWays                                                      *
* Computes and returns the number of different possible sets       *
* of k numbers that can be chosen from a set of n numbers.         *
* The formula for this is     n! / (k!(n-k)!)                       *
* This formula calculates the number of combinations (n choose k). *
********************************************************************/
double computeWays(int n, int k) {
    if (k > n) {
        return 0;  // Can't choose more balls than available
    }

    // Return the number of combinations (n choose k) using the formula n! / (k!(n-k)!)
    return factorial(n) / (factorial(k) * factorial(n - k));
}

/*******************************************************************
* factorial                                                        *
* This function computes factorials recursively.                   *
*******************************************************************/
double factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}




