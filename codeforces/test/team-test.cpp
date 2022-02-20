#include "gtest/gtest.h"
#include <iostream>
#include <chrono>
#include <utility>
#include <vector>

#include "problems.h"


TEST(team, test1) {

    // Prepare the inputs and the expected output
    std::istringstream input("3\n1 1 0\n1 1 1\n1 0 0\n");
    std::ostringstream output;
    std::string expected_output = "2\n";  // The output always have a \n

    // Begin to measure the time spent by the function
    auto start = std::chrono::steady_clock::now();

    // Call the function
    team::team(input, output);

    // End measuring the time spent by the function
    auto end = std::chrono::steady_clock::now();

    // Get the measured time in microseconds
    auto elapsed_microseconds = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    // Check the result
    EXPECT_EQ(output.str(), expected_output);

    // Check the time
    EXPECT_LT(elapsed_microseconds, 1000000);

}


TEST(team, test2) {

    // Prepare the inputs and the expected output
    std::istringstream input("2\n1 0 0\n0 1 1\n");
    std::ostringstream output;
    std::string expected_output = "1\n";  // The output always have a \n

    // Begin to measure the time spent by the function
    auto start = std::chrono::steady_clock::now();

    // Call the function
    team::team(input, output);

    // End measuring the time spent by the function
    auto end = std::chrono::steady_clock::now();

    // Get the measured time in microseconds
    auto elapsed_microseconds = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    // Check the result
    EXPECT_EQ(output.str(), expected_output);

    // Check the time
    EXPECT_LT(elapsed_microseconds, 1000000);
}