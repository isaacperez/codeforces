#include "gtest/gtest.h"
#include <iostream>
#include <chrono>
#include <utility>
#include <vector>

#include "problems.h"


TEST(watermelon, test) {

    // Set the namespace for the current test
    using namespace Aproblems::watermelon;

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
        watermelon(input, output);

        // End measuring the time spent by the function
        auto end = std::chrono::steady_clock::now();

        // Get the measured time in microseconds
        auto elapsed_microseconds = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

        // Check the result
        EXPECT_EQ(output.str(), input_and_output.second);

        // Check the time
        EXPECT_LT(elapsed_microseconds, microsecondsLimit);
    }
}


TEST(wayTooLongWords, test) {

    // Set the namespace for the current test
    using namespace Aproblems::wayTooLongWords;

    // Prepare the inputs and the expected output
    std::istringstream input(
        "4\nword\nlocalization\ninternationalization\npneumonoultramicroscopicsilicovolcanoconiosis\n");
    std::ostringstream output;
    std::string expected_output = "word\nl10n\ni18n\np43s\n";

    // Begin to measure the time spent by the function
    auto start = std::chrono::steady_clock::now();

    // Call the function
    wayTooLongWords(input, output);

    // End measuring the time spent by the function
    auto end = std::chrono::steady_clock::now();

    // Get the measured time in microseconds
    auto elapsed_microseconds = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    // Check the result
    EXPECT_EQ(expected_output, output.str());

    // Check the time
    EXPECT_LT(elapsed_microseconds, microsecondsLimit);
}


TEST(team, test1) {

    // Set the namespace for the current test
    using namespace Aproblems::team;

    // Prepare the inputs and the expected output
    std::istringstream input("3\n1 1 0\n1 1 1\n1 0 0\n");
    std::ostringstream output;
    std::string expected_output = "2\n";  // The output always have a \n

    // Begin to measure the time spent by the function
    auto start = std::chrono::steady_clock::now();

    // Call the function
    team(input, output);

    // End measuring the time spent by the function
    auto end = std::chrono::steady_clock::now();

    // Get the measured time in microseconds
    auto elapsed_microseconds = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    // Check the result
    EXPECT_EQ(output.str(), expected_output);

    // Check the time
    EXPECT_LT(elapsed_microseconds, microsecondsLimit);

}


TEST(team, test2) {

    // Set the namespace for the current test
    using namespace Aproblems::team;

    // Prepare the inputs and the expected output
    std::istringstream input("2\n1 0 0\n0 1 1\n");
    std::ostringstream output;
    std::string expected_output = "1\n";  // The output always have a \n

    // Begin to measure the time spent by the function
    auto start = std::chrono::steady_clock::now();

    // Call the function
    team(input, output);

    // End measuring the time spent by the function
    auto end = std::chrono::steady_clock::now();

    // Get the measured time in microseconds
    auto elapsed_microseconds = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    // Check the result
    EXPECT_EQ(output.str(), expected_output);

    // Check the time
    EXPECT_LT(elapsed_microseconds, microsecondsLimit);
}


TEST(helpfulMaths, test1) {

    // Set the namespace for the current test
    using namespace Aproblems::helpfulMaths;

    // Prepare the inputs and the expected output
    std::istringstream input("3+2+1\n");
    std::ostringstream output;
    std::string expected_output = "1+2+3\n";  // The output always have a \n

    // Begin to measure the time spent by the function
    auto start = std::chrono::steady_clock::now();

    // Call the function
    helpfulMaths(input, output);

    // End measuring the time spent by the function
    auto end = std::chrono::steady_clock::now();

    // Get the measured time in microseconds
    auto elapsed_microseconds = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    // Check the result
    EXPECT_EQ(output.str(), expected_output);

    // Check the time
    EXPECT_LT(elapsed_microseconds, microsecondsLimit);
}



TEST(helpfulMaths, test2) {

    // Set the namespace for the current test
    using namespace Aproblems::helpfulMaths;

    // Prepare the inputs and the expected output
    std::istringstream input("1+1+3+1+3\n");
    std::ostringstream output;
    std::string expected_output = "1+1+1+3+3\n";  // The output always have a \n

    // Begin to measure the time spent by the function
    auto start = std::chrono::steady_clock::now();

    // Call the function
    helpfulMaths(input, output);

    // End measuring the time spent by the function
    auto end = std::chrono::steady_clock::now();

    // Get the measured time in microseconds
    auto elapsed_microseconds = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    // Check the result
    EXPECT_EQ(output.str(), expected_output);

    // Check the time
    EXPECT_LT(elapsed_microseconds, microsecondsLimit);
}



TEST(helpfulMaths, test3) {

    // Set the namespace for the current test
    using namespace Aproblems::helpfulMaths;

    // Prepare the inputs and the expected output
    std::istringstream input("2\n");
    std::ostringstream output;
    std::string expected_output = "2\n";  // The output always have a \n

    // Begin to measure the time spent by the function
    auto start = std::chrono::steady_clock::now();

    // Call the function
    helpfulMaths(input, output);

    // End measuring the time spent by the function
    auto end = std::chrono::steady_clock::now();

    // Get the measured time in microseconds
    auto elapsed_microseconds = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    // Check the result
    EXPECT_EQ(output.str(), expected_output);

    // Check the time
    EXPECT_LT(elapsed_microseconds, microsecondsLimit);
}



TEST(phoneNumbers, test1) {

    // Set the namespace for the current test
    using namespace Aproblems::phoneNumbers;

    // Prepare the inputs and the expected output
    std::istringstream input(
        "5\nJett 012345678\nViper 111111111\nNeon 987654321\nRaze 512610294\nReyna 192830492\n");
    std::ostringstream output;
    std::string expected_output = "Jett\nRaze\nReyna\n";  // The output always have a \n

    // Begin to measure the time spent by the function
    auto start = std::chrono::steady_clock::now();

    // Call the function
    phoneNumbers(input, output);

    // End measuring the time spent by the function
    auto end = std::chrono::steady_clock::now();

    // Get the measured time in microseconds
    auto elapsed_microseconds = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    // Check the result
    EXPECT_EQ(output.str(), expected_output);

    // Check the time
    EXPECT_LT(elapsed_microseconds, microsecondsLimit);
}
