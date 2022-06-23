#pragma once

#include <iostream>

class Cube
{
	int dimOfCube = 0;
	bool isScrambled = false;

	enum AlgorithmLevel
	{
		Begginer,
		Low,
		Medium,
		Hard,
		Pro
	};

	enum BasicMoves //C - clockwise
	{
		Right = 1,
		RightC = -1,

		Left = 2,
		LeftC = -2,

		Up = 3,
		UpC = -3,

		Down = 4,
		DownC = -4,

		Front = 5,
		FrontC = -5,

		Back = 6,
		BackC = -6
	};

	Cube()
	{

	}

	void Solve()
	{

	}
};