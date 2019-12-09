# language: en

Feature: We need to develop an RPN Calculator that accepts math expressions
	 in the form of Reverse Polish Notation a.k.a postfix notation and
	 return the computed results.

	 RPN Calculator should support addition, subtraction, multiplication
	 and Division individually as well as all in one rpn math expression.

  Scenario Outline: Should be able to perform simple addition

     Given the input math expression is <rpn_input>
     When the evaluate method is invoked
     Then the actualResult should match the <expectedResult>

     Examples:
	| rpn_input                        | expectedResult |
        | "10 15 + "                       | 25.0           |
        | "100 15 - "                      | 85.0           |
        | "1000.0 5.0 * "                  | 5000.0         |
        | "1000.0 250.0 / "                | 4.0            |
        | "10.0 5.0 * 1.0 + 100.0 2.0 / - "| 1.0            |

