#include "problems.h"
#include <algorithm>


int team::team(std::vector<std::string> inputs)
{
	int num_problems_will_be_solved = 0;
	for (auto& current_input : inputs) {
		// '1' means one of them is able to solve, so if we find more than one, it means they can solve
		num_problems_will_be_solved += int(std::count(current_input.begin(), current_input.end(), '1') > 1);
	}
	return num_problems_will_be_solved;
}
