#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>

bool invalid_operator(char c)
{
	return (c != '/' && c != '*' && c != '+' && c != '-');
}


/*
bool is_operator(char c) {
	std::string operators = "*+-/";
	return operators.find(c) != std::string::npos;
}

*/

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cerr << "ERROR: invalid number of input" << std::endl;
		return 1;
	}

	std::string input(argv[1]);
	std::stack<int> myStack;
	int number = 0;

	std::string::size_type pos = 0;
	while (pos < input.size()) {
		std::string::size_type next_pos = input.find(' ', pos);
		std::string token = input.substr(pos, next_pos - pos);

		if (token.empty() || !isdigit(token[0])) {
			std::cerr << "ERROR 0" << std::endl;
			return 1;
		}

		while (isdigit(token[0])) {
			number = atoi(token.c_str());
			myStack.push(number);

			if (next_pos == std::string::npos) {
				break;
			}

			pos = next_pos + 1;
			next_pos = input.find(' ', pos);
			token = input.substr(pos, next_pos - pos);
		}

		if (myStack.size() == 1) {
			std::cerr << "ERROR 1" << std::endl;
			return 1;
		}

		if (next_pos == std::string::npos && myStack.size() > 1) {
			std::cerr << "ERROR 001" << std::endl;
			return 1;
		}

		int a = myStack.top();
		myStack.pop();
		int b = myStack.top();
		myStack.pop();

		if (token.size() != 1 || invalid_operator(token[0])) {
			std::cerr << "Error 2" << std::endl;
			return 1;
		}

		switch (token[0]) {
			case '+': myStack.push(b + a); break;
			case '-': myStack.push(b - a); break;
			case '*': myStack.push(b * a); break;
			case '/': myStack.push(b / a); break;
		}

		pos = next_pos + 1;
	}

	std::cout << myStack.top() << std::endl;
	return 0;
}
