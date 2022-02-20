#include "gtest/gtest.h"
#include <chrono>
#include <utility>
#include <vector>

#include "problems.h"


TEST(watermelon, test) {

    // Prepare the inputs
    std::vector<std::pair<std::string, std::string>> inputs_and_outputs = {
        {"0\n", "NO\n"},
        {"1\n", "NO\n"},
        {"2\n", "NO\n"},
        {"3\n", "NO\n"},
        {"4\n", "YES\n"},
        {"50\n", "YES\n"},
        {"51\n", "NO\n"},
        {"98\n", "YES\n"},
        {"99\n", "NO\n"}
    };

    // Test all inputs
    for (auto& input_and_output : inputs_and_outputs) {
        
        // Build the current input
        std::istringstream input(input_and_output.first);
        std::ostringstream output;

        // Begin to measure the time spent by the function
        auto start = std::chrono::steady_clock::now();

        // Call the function
        watermelon::watermelon(input, output);

        // End measuring the time spent by the function
        auto end = std::chrono::steady_clock::now();

        // Get the measured time in microseconds
        auto elapsed_microseconds = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

        // Check the result
        EXPECT_EQ(output.str(), input_and_output.second);

        // Check the time
        EXPECT_LT(elapsed_microseconds, 1000000);
    }
}