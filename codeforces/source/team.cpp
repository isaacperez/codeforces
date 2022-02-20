#include "problems.h"
#include <iostream>
#include <algorithm>


void team::team(std::istream& input, std::ostream& output)
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
