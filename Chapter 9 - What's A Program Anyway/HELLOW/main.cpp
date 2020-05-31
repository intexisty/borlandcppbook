/* My first program
 * Prints "Hello 32-bit world" on the screen */

// Include definitions for cout
#include <iostream>

/* this example used to use conio.h,
 * however iostream provides the equiv functionality.
 * #include <conio.h> */

int main() {
    // print "Hello 32-Bit World" to the screen
    std::cout << "Hello 32-Bit World\n";

    /* legacy DOS code incoming...
     * cout << "\nPress any key to end";
     * while(!kbhit()); */
    return 0;
}
