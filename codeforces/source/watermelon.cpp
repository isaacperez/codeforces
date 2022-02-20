#include "problems.h"

bool watermelon(int weight)
{
    // If the number is even and greather than 2, the watermelon can be split in
    // two even parts
    if (weight > 2 && weight % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}