#include "problems.h"

void wayTooLongWords::wayTooLongWords(std::istream& input, std::ostream& output)
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