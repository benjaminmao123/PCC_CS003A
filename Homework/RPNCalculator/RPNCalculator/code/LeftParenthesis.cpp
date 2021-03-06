/*
 * Author: Benjamin Mao
 * Project: RPN
 * Purpose: Implementation of one of the
 *      operator child classes.
 *
 * Notes: None.
 */

#include "LeftParenthesis.h"

/*
	@summary: Default constructor.
		Initializes precedence and tokenString.
*/
LeftParenthesis::LeftParenthesis()
{
	TokenString("(");
    SetTokenType(TokenType::LParenth);
}

/*
	@summary: Evaluates the current operation.
*/
double LeftParenthesis::Evaluate()
{
	return 0.0;
}
