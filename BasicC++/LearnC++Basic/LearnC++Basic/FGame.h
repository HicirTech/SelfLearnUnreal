#pragma once
#include <string>
class FGame
{
public :
	void Reset();
	int GetMaxTry();
	int GetCurrentTry();
	bool CheckGuest(std::string input);
	bool IsWon();
	



private: 
	int MyCurrenyTry;
	int MyMaxTry;
	bool IsIsogram;


};

