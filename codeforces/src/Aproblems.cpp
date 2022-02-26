#include "problems.h"
#include <iostream>
#include <algorithm>


void Aproblems::watermelon::watermelon(std::istream& input, std::ostream& output)
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


void Aproblems::wayTooLongWords::wayTooLongWords(std::istream& input, std::ostream& output)
{
	// Read the number of inputs
	std::string current_input;
	std::getline(input, current_input);
	int number_of_inputs = std::stoi(current_input);

	// Read all the inputs
	for (int i = 0; i < number_of_inputs; i++) {

		// Read the current input
		std::getline(input, current_input);

		// Only inputs with more than 10 characters are replaced
		int input_length = current_input.length();
		if (input_length > 10) {
			output << current_input[0];
			output << std::to_string(current_input.substr(1, input_length - 2).length());
			output << current_input[input_length - 1];
			output << std::endl;
		}
		else {
			output << current_input << std::endl;
		}
	}
}


void Aproblems::team::team(std::istream& input, std::ostream& output)
{
	// Read the number of inputs
	std::string current_input;
	std::getline(input, current_input);
	int number_of_inputs = std::stoi(current_input);

	// Read all the inputs
	int num_problems_will_be_solved = 0;
	for (int i = 0; i < number_of_inputs; i++) {

		// Read the current input
		std::getline(input, current_input);

		// '1' means one of them is able to solve, so if we find more than one, it means they can solve
		num_problems_will_be_solved += int(std::count(current_input.begin(), current_input.end(), '1') > 1);
	}

	// Show the result
	output << num_problems_will_be_solved << std::endl;
}