#include "gtest/gtest.h"
#include <chrono>
#include <utility>
#include <vector>

#include "problems.h"


TEST(team, test1) {

    // Prepare the inputs and the expected output
    std::vector<std::string> input = {
        "1 1 0",
        "1 1 1",
        "1 0 0"
    };

    int expected_output = 2;

    // Begin to measure the time spent by the function
    auto start = std::chrono::steady_clock::now();

    // Call the function
    auto output = team::team(input);

    // End measuring the time spent by the function
    auto end = std::chrono::steady_clock::now();

    // Get the measured time in microseconds
    auto elapsed_microseconds = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    // Check the result
    EXPECT_EQ(expected_output, output);

    // Check the time
    EXPECT_LT(elapsed_microseconds, 1000000);

}


TEST(team, test2) {

    // Prepare the inputs and the expected output
    std::vector<std::string> input = {
        "1 0 0",
        "0 1 1"
    };

    int expected_output = 1;

    // Begin to measure the time spent by the function
    auto start = std::chrono::steady_clock::now();

    // Call the function
    auto output = team::team(input);

    // End measuring the time spent by the function
    auto end = std::chrono::steady_clock::now();

    // Get the measured time in microseconds
    auto elapsed_microseconds = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    // Check the result
    EXPECT_EQ(expected_output, output);

    // Check the time
    EXPECT_LT(elapsed_microseconds, 1000000);

}