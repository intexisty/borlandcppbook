// Compute the cost of a pizza
#include <iostream>

/* this example used to use conio.h,
 * however iostream provides the equiv functionality.
 * #include <conio.h> */

// Toppings are always $2 each
const int PricePerTopping = 2;
// A plain pizza costs $10
const int PlainPrice = 10;

class Pizza {
public:
    int NumberOfToppings;
    int CostForToppings;
    int Cost;
};

int main() {
    Pizza MyPizzaInfo;

    // Find the number of toppings
    std::cout << "How many toppings do you want?\n";
    std::cin >> MyPizzaInfo.NumberOfToppings;

    /* Calculate the cost for the toppings.
     * Use the constant so that it is easier to read */
    MyPizzaInfo.CostForToppings = MyPizzaInfo.NumberOfToppings * PricePerTopping;

    /* Calculate the total cost.
     * Note that the constant makes it easier to read */
    MyPizzaInfo.Cost = PlainPrice + MyPizzaInfo.CostForToppings;

    // Print the result
    std::cout << "Your pizza costs $" << MyPizzaInfo.Cost << "\n";

    /* legacy DOS code incoming...
     * cout << "\nPress any key to end";
     * while(!kbhit()); */

    return 0;
}
