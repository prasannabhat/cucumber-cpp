#include "RPNCalculator.h"

double RPNCalculator::evaluate(string rpnExpression) {

	istringstream buffer(rpnExpression);

	vector<string> rpnTokens = { istream_iterator<string>(buffer),istream_iterator<string>() };

	vector<string>::iterator token = rpnTokens.begin();

	stack<double> numberStack;
	double temp;

	double firstNumber, secondNumber, result;

	while ( token != rpnTokens.end() ) {

		if ( *token == "+" ) {
			secondNumber = numberStack.top();
			numberStack.pop();
			firstNumber  = numberStack.top();
			numberStack.pop();

			result = firstNumber + secondNumber;

			numberStack.push ( result );
		}
		else if ( *token == "-" ) {
			secondNumber = numberStack.top();
			numberStack.pop();
			firstNumber  = numberStack.top();
			numberStack.pop();

			result = firstNumber - secondNumber;

			numberStack.push ( result );
		}
		else if ( *token == "*" ) {
			secondNumber = numberStack.top();
			numberStack.pop();
			firstNumber  = numberStack.top();
			numberStack.pop();

			result = firstNumber * secondNumber;

			numberStack.push ( result );
		}
		else if ( *token == "/" ) {
			secondNumber = numberStack.top();
			numberStack.pop();
			firstNumber  = numberStack.top();
			numberStack.pop();

			result = firstNumber / secondNumber;

			numberStack.push ( result );
		}
		else {
			istringstream tempStream(*token);
			tempStream >> temp;
			numberStack.push (temp);
		}
		++token;
	}
	temp = numberStack.top();
	numberStack.pop();

	return temp;
}
