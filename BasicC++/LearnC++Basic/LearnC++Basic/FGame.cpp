#include "stdafx.h"
#include "FGame.h"

void FGame::Reset()
{
}

int FGame::GetMaxTry()
{
	return MyMaxTry;
}

int FGame::GetCurrentTry()
{
	return MyCurrenyTry;
}

bool FGame::CheckGuest(std::string input)
{
	return false;
}

bool FGame::IsWon()
{
	return false;
}
