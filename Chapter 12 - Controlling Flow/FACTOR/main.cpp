// compute n!
#include <iostream>

/* this example used to use conio.h,
 * however iostream provides the equiv functionality.
 * #include <conio.h> */

int main() {
    int n, Result = 1, i;

    // Get the value
    std::cout << "What is the number?\n";
    std::cin >> n;

    /* Now loop through. Each time through the loop
     * multiply the result by i. This will give
     * 1*2*3...n because i starts at 1 and increases
     * until it is n */
    for (i = 1; i <= n; ++i) {
        Result *= i;
    }

    // print the result
    std::cout << "n! is " << Result << "\n";

    /* legacy DOS code incoming...
     * cout << "\nPress any key to end";
     * while(!kbhit()); */
    return 0;
}
