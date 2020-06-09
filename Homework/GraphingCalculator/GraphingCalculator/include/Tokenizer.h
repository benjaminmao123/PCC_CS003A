#pragma once

#include <string>
#include <vector>

#include "Vector.h"
#include "Token.h"
#include "ShuntingYard.h"

class Tokenizer
{
public:
	Tokenizer(const vector<std::string> &validTokens,
		const vector<std::string> &validOperators);

	vector<token_ptr> Tokenize(const std::string &input, double xVal = 0);

private:
	std::string SpaceInput(const std::string &input) const;

	const vector<std::string> &validTokens;
	const vector<std::string> &validOperands;
};