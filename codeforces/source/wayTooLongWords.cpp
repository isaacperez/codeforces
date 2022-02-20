#include "problems.h"

std::vector<std::string> wayTooLongWords::wayTooLongWords(std::vector<std::string> inputs) {

	std::vector<std::string> output;
	for (auto& current_input : inputs) {
		// Only inputs with more than 10 characters are replaced
		int input_length = current_input.length();
		if (input_length > 10) {
			output.push_back(
				current_input[0] + std::to_string(current_input.substr(1, input_length - 2).length()) + current_input[input_length - 1]);
		}
		else {
			output.push_back(current_input);
		}
	}
	return output;
}