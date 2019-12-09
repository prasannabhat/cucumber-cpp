
#include <gtest/gtest.h>
#include <cucumber-cpp/autodetect.hpp>
#include "RPNCalculator.h"
using cucumber::ScenarioScope;

struct RPNCalculatorCtx {
	RPNCalculator rpnCalculator;
	string rpnExpression;
	double actualResult;
};

GIVEN("^the input math expression is \"([^\"]*)\"$") {
	REGEX_PARAM(string, rpnExpression);
	ScenarioScope<RPNCalculatorCtx> context;
	context->rpnExpression = rpnExpression;
}

WHEN("^the evaluate method is invoked$") {
	ScenarioScope<RPNCalculatorCtx> context;
	context->actualResult = context->rpnCalculator.evaluate(context->rpnExpression);
}

THEN("^the actualResult should match the (\\d+)\\.(\\d+)$") {
	REGEX_PARAM(double, expectedResult);
	ScenarioScope<RPNCalculatorCtx> context;
	EXPECT_EQ ( expectedResult, context->actualResult );
}
