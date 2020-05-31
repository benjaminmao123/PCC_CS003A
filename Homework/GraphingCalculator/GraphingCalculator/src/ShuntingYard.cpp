#include <iostream>
#include <sstream>
#include <cstdlib>
#include <cctype>

#include "ShuntingYard.h"

ShuntingYard::ShuntingYard()
	: errorState(ErrorState::NONE)
{

}

/*
	@summary: Parses the input into a postfix expression.

	@return <bool>: True if parse was successful, else false.
*/
queue<Token *> ShuntingYard::ToPostfix(const vector<Token *> &infix)
{
	ShuntingState state = ShuntingState::EXPECT_OPERAND;
	errorState = ErrorState::NONE;

	stack<Token *> tokens;
	queue<Token *> postfix;

	for (const auto &token : infix)
	{
		if (token)
		{
			switch (token->GetBaseTokenType())
			{
			case TokenType::OPERAND:
				if (state != ShuntingState::EXPECT_OPERAND)
				{
					errorState = ErrorState::INVALID_OPERAND;
					return queue<Token *>();
				}

				postfix.push(token);
				state = ShuntingState::EXPECT_OPERATOR;
				break;
			case TokenType::FUNC:
				if (state != ShuntingState::EXPECT_OPERAND)
				{
					errorState = ErrorState::INVALID_OPERAND;
					return queue<Token *>();
				}

				if (!tokens.empty())
				{
					Operator *op = dynamic_cast<Operator *>(token);
					Operator *top = dynamic_cast<Operator *>(tokens.top());

					if (op && top)
					{
						if (op->GetPrecedence() <= top->GetPrecedence())
							while (!tokens.empty() &&
								tokens.top()->GetTokenType() != TokenType::L_PARENTH)
								postfix.push(tokens.pop());
					}
				}

				tokens.push(token);
				state = ShuntingState::EXPECT_OPERAND;
				break;
			case TokenType::OPERATOR:
				if (state != ShuntingState::EXPECT_OPERATOR)
				{
					errorState = ErrorState::INVALID_OPERATOR;
					return queue<Token *>();
				}

				if (!tokens.empty())
				{
					Operator *op = dynamic_cast<Operator *>(token);
					Operator *top = dynamic_cast<Operator *>(tokens.top());

					if (op && top)
					{
						if (op->GetPrecedence() <= top->GetPrecedence())
							while (!tokens.empty() &&
								tokens.top()->GetTokenType() != TokenType::L_PARENTH)
								postfix.push(tokens.pop());
					}
				}

				tokens.push(token);
				state = ShuntingState::EXPECT_OPERAND;
				break;
			default:
				break;
			}

			switch (token->GetTokenType())
			{
			case TokenType::L_PARENTH:
				if (state != ShuntingState::EXPECT_OPERAND)
				{
					errorState = ErrorState::INVALID_OPERAND;
					return queue<Token *>();
				}

				tokens.push(token);
				state = ShuntingState::EXPECT_OPERAND;
				break;
			case TokenType::R_PARENTH:
				if (state != ShuntingState::EXPECT_OPERATOR)
				{
					errorState = ErrorState::INVALID_OPERAND;
					return queue<Token *>();
				}

				while (!tokens.empty() &&
					tokens.top()->GetTokenType() != TokenType::L_PARENTH)
					postfix.push(tokens.pop());

				if (!tokens.empty() &&
					tokens.top()->GetTokenType() == TokenType::L_PARENTH)
				{
					delete tokens.top();
					tokens.pop();
				}

				state = ShuntingState::EXPECT_OPERATOR;
				break;
			}
		}
	}

	while (!tokens.empty())
	{
		if (tokens.top()->GetTokenType() == TokenType::L_PARENTH ||
			tokens.top()->GetTokenType() == TokenType::R_PARENTH)
		{
			errorState = ErrorState::INVALID_PARENTHESIS;
			return queue<Token *>();
		}

		postfix.push(tokens.pop());
	}

	return postfix;
}

ErrorState ShuntingYard::GetErrorState() const
{
	return errorState;
}