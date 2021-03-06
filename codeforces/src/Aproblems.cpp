#include "problems.h"
#include <iostream>
#include <algorithm>
#include <map>


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


void Aproblems::helpfulMaths::helpfulMaths(std::istream& input, std::ostream& output)
{
	// Read the inputs and save then in the right position
	std::map<char, int> operands { {'+', 0},  {'1', 0},  {'2', 0},  {'3', 0}, };

	std::string inputLine;
	std::getline(input, inputLine);

	for (char& character : inputLine) {
		operands[character]++;
	}

	// Build the output
	std::string outputString = "";
	for (int i = 0; i < operands['1']; i++) {
		outputString += "1+";
	}

	for (int i = 0; i < operands['2']; i++) {
		outputString += "2+";
	}

	for (int i = 0; i < operands['3']; i++) {
		outputString += "3+";
	}
	
	// Remove last "+"
	outputString = outputString.substr(0, outputString.size() - 1);

	// Send the output
	output << outputString << std::endl;
}


void Aproblems::phoneNumbers::phoneNumbers(std::istream& input, std::ostream& output) {

	// Get the number of phones from the first line
	std::string inputLine;
	std::getline(input, inputLine);
	int numPhones = std::stoi(inputLine);

	// Read the rest of lines
	size_t idxSpace;
	std::string name, numbers;
	int sum;
	for (int i = 0; i < numPhones; i++) {
		std::getline(input, inputLine);

		// Get the position of the space character in the line
		idxSpace = inputLine.find(" ");

		// Extract the name and the number
		name = inputLine.substr(0, idxSpace);
		numbers = inputLine.substr(idxSpace);

		// Sum all numbers
		sum = 0;
		for (char& number : numbers) {
			sum += number - '0';
		}

		// Check the result is even
		if (sum % 2 == 0) {
			output << name << std::endl;
		}
	}
}