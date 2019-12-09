/*
 * =====================================================================================
 *
 *       Filename:  HelloBDDStep.cpp
 *
 *    Description:  This is a Google Test Framework based Cucumber Steps File
 *
 *        Version:  1.0
 *        Created:  04/01/2017 04:08:37 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jeganathan Swaminathan <jegan@tektutor.org> 
 *   Organization:  <http://www.tektutor.org> 
 *
 * =====================================================================================
 */
#include <gtest/gtest.h>
#include <cucumber-cpp/autodetect.hpp>

#include <Hello.h>

using cucumber::ScenarioScope;

struct HelloCtx {
	Hello *ptrHello;
	string actualResponse;
};

GIVEN("^An instance of Hello class is created$") {
	ScenarioScope<HelloCtx> context;
	context->ptrHello = new Hello();
}


WHEN("^the sayHello method is invoked$") {
	ScenarioScope<HelloCtx> context;
	context->actualResponse = context->ptrHello->sayHello();
}


THEN("^it should return$") {
	string expectedResponse = "Hello BDD!";
	ScenarioScope<HelloCtx> context;
	EXPECT_EQ(expectedResponse, context->actualResponse);
}