#include "gtest/gtest.h"
#include <chrono>
#include <utility>
#include <vector>

#include "problems.h"


TEST(wayTooLongWords, test) {

    // Prepare the inputs and the expected output
    std::vector<std::string> input = {
        "word",
        "localization",
        "internationalization",
        "pneumonoultramicroscopicsilicovolcanoconiosis"
    };

    std::vector<std::string> expected_output = {
        "word",
        "l10n",
        "i18n",
        "p43s"
    };

    // Begin to measure the time spent by the function
    auto start = std::chrono::steady_clock::now();

    // Call the function
    auto output = wayTooLongWords(input);

    // End measuring the time spent by the function
    auto end = std::chrono::steady_clock::now();

    // Get the measured time in microseconds
    auto elapsed_microseconds = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    // Check the result
    ASSERT_EQ(expected_output.size(), output.size());

    for (int i = 0; i < output.size(); i++) {
        EXPECT_EQ(expected_output[i], output[i]);
    }

    // Check the time
    EXPECT_LT(elapsed_microseconds, 1000000);

}