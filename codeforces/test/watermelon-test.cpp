#include "gtest/gtest.h"
#include <chrono>
#include <utility>
#include <vector>

#include "problems.h"


TEST(watermelon, test) {

    // Prepare the inputs
    std::vector<std::pair<int, bool>> inputs_and_outputs = {
        {0, false},
        {1, false},
        {2, false},
        {3, false},
        {4, true},
        {50, true},
        {51, false},
        {98, true},
        {99, false}
    };

    // Test all inputs
    for (auto& input_and_output : inputs_and_outputs) {
        // Begin to measure the time spent by the function
        auto start = std::chrono::steady_clock::now();

        // Call the function
        bool result = watermelon(input_and_output.first);

        // End measuring the time spent by the function
        auto end = std::chrono::steady_clock::now();

        // Get the measured time in microseconds
        auto elapsed_microseconds = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

        // Check the result
        EXPECT_EQ(result, input_and_output.second);

        // Check the time
        EXPECT_LT(elapsed_microseconds, 1000000);
    }
}