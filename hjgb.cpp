/**
 * Solution for the "Primary Arithmetic" problem.
 * UVa ID: 10035
 */
#include <stdlib.h>
#include<iostream>
using namespace std;

int main() {
    unsigned long long n1; /* 1st number */
    unsigned long long n2; /* 2nd number */
    int carry = 0; /* carry */
    int sum = 0; /* temporary sum */
    int count = 0; /* carry counter */

    while(cin >> n1 >> n2 && ((n1 > 0) || (n2 > 0))) {
        carry = 0;
	count = 0;
	sum = 0;

	/* while there's still something.. */
	while ((n1 > 0) || (n2 > 0)) {
	    /* sum the two right-most digits */
	    sum = carry + (n1 % 10) + (n2 % 10);

	    if (sum >= 10) {
		count++;
	    }

	    /* get the carry by dividing the sum of the two digits */
	    carry = sum / 10;

	    /* 'reduce' the numbers by ten, to update the right-most digits */
	    n1 /= 10;
            n2 /= 10;
	}

	if (count == 0) {
            cout << "No carry operation." << endl;
	} else if (count == 1) {
	    cout << "1 carry operation." << endl;
	} else {
            cout << count << " carry operations." << endl;
        }
    }

    return 0;
}
