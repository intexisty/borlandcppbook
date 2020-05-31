//Hang the system.
#include <iostream>

/* context:
 * Here's a simple program you can write that completely hangs your computer.
 * If you do this, you'll need to reboot.
 *
 * Why does this hang the computer? The program stays in the while loop until
 * expr1 is false. In this case, expr1 is 1, so it's never false. The computer
 * never exits the loop. Bummer. */

int main() {
    while(1) {}
    return 0;
}
