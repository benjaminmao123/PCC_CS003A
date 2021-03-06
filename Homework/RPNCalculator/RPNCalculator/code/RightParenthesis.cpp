/*
 * Author: Benjamin Mao
 * Project: RPN
 * Purpose: Implementation of one of the
 *      operator child classes.
 *
 * Notes: None.
 */

#include "RightParenthesis.h"

/*
	@summary: Default constructor.
		Initializes precedence and tokenString.
*/
RightParenthesis::RightParenthesis()
{
	TokenString(")");
    SetTokenType(TokenType::RParenth);
}

/*
	@summary: Evaluates the current operation.
*/
double RightParenthesis::Evaluate()
{
	return 0.0;
}
