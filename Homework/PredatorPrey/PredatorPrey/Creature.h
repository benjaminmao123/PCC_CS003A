#pragma once

#include <random>
#include <ostream>

#include "Location.h"
#include "Vector.h"
#include "Settings.h"

enum class Type { None, Wall, Prey, Predator};

class Grid;

class Creature
{
public:
	Creature(const Settings &settings, const Location &location = { },
		char icon = 'C');
	virtual ~Creature();

	virtual void Move(Grid &grid);
	virtual void Breed(Grid &grid);
	void Kill(Grid &grid);

	Type GetType() const;
	const Location &GetLocation() const;
	bool HasMoved() const;
	void SetMoved(bool state);
	char GetIcon() const;

	friend std::ostream &operator<<(std::ostream &os, const Creature &c);

protected:
	void MoveTo(Grid &grid, const Location &dest);
	void FindBlank(const Grid &grid);
	void FindPredator(const Grid &grid);
	void FindPrey(const Grid &grid);
	int RandomNumber(int start, int end);

	Vector<Location> blankLoc;
	Vector<Location> predLoc;
	Vector<Location> preyLoc;
	Location oldPos;
	Location currPos;
	Type type;
	int breedStep;
	const Settings &settings;

private:
	char icon;
	std::random_device rd;
	std::mt19937 gen;
	bool hasMoved;
};