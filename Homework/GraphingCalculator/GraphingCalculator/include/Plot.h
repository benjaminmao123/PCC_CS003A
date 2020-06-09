#pragma once

#include <string>
#include <SFML\Graphics.hpp>
#include <vector>
#include <queue>

#include "Vector.h"
#include "Queue.h"
#include "Token.h"
#include "Constants.h"

struct GraphInformation;

class CoordinateTranslation
{
public:
	CoordinateTranslation(GraphInformation &info);

	sf::Vector2f ScreenPointToCartesian(const sf::Vector2f &point) const;
	sf::Vector2f operator()(const sf::Vector2f &point) const;

private:
	sf::Vector2f CartesianToScreenPoint(const sf::Vector2f &point) const;

	GraphInformation &info;
};

class Plot
{
public:
	Plot(GraphInformation &info);

	vector<sf::Vector2f> operator()();

private:
	GraphInformation &info;
	vector<token_ptr> postfix;
	vector<std::string> validTokens;
	vector<std::string> validOperands;
};