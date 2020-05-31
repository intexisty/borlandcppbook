#include <iostream>

/* this example used to use conio.h,
 * however iostream provides the equiv functionality.
 * #include <conio.h> */

int main() {
    // toppings are always $2 each
    const int PricePerTopping = 2;
    // A plain pizza costs $10
    const int PlainPrice = 10;

    int NumberOfToppings, CostForToppings, Cost;

    // find the number of toppings
    std::cout << "How many toppings do you want?\n";
    std::cin >> NumberOfToppings;

    /* calculate the cost for the toppings
     * use the constant so that it is easier to read */

    CostForToppings = NumberOfToppings * PricePerTopping;

    Cost = PlainPrice + CostForToppings;

    // print the result
    std::cout << "Your pizza costs $" << Cost << "\n";

    /* legacy DOS code incoming...
     * cout << "\nPress any key to end";
     * while(!kbhit()); */
    return 0;
}
