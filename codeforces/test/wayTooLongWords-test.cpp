#include "gtest/gtest.h"
#include <iostream>
#include <chrono>
#include <utility>
#include <vector>

#include "problems.h"


TEST(wayTooLongWords, test) {

    // Prepare the inputs and the expected output
    std::istringstream input(
        "4\nword\nlocalization\ninternationalization\npneumonoultramicroscopicsilicovolcanoconiosis\n");
    std::ostringstream output;
    std::string expected_output = "word\nl10n\ni18n\np43s\n";

    // Begin to measure the time spent by the function
    auto start = std::chrono::steady_clock::now();

    // Call the function
    wayTooLongWords::wayTooLongWords(input, output);

    // End measuring the time spent by the function
    auto end = std::chrono::steady_clock::now();

    // Get the measured time in microseconds
    auto elapsed_microseconds = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    // Check the result
    EXPECT_EQ(expected_output, output.str());

    // Check the time
    EXPECT_LT(elapsed_microseconds, 1000000);
}