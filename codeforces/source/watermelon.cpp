#include "problems.h"
#include <iostream>


void watermelon::watermelon(std::istream& input, std::ostream& output)
{
    // Get the weight
    int weight;
    input >> weight;

    // If the number is even and greather than 2, the watermelon can be split in
    // two even parts
    if (weight > 2 && weight % 2 == 0) {
        output << "YES" << std::endl;
    }
    else {
        output << "NO" << std::endl;
    }
}