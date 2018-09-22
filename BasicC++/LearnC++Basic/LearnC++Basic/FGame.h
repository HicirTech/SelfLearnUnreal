#pragma once
#include <string>
using FText = std::string;
using int32 = int;
struct bcCount
{
	int32 bulls = 0;
	int32 cows = 0;
};
class FGame
{
	
	public :
	
		FGame();
		FGame(FText word, int32 maxTry);
		void playGame();

	private: 

		FText answer;
		int32 currenyTry;
		int32 MyMaxTry;
		bool isWin;

		int GetCurrentTry() const;
		int GetMaxTry() const;
	
		bool IsWon() const;
		void Reset();
		bool AskToPlayAgain() const ;
		void printWelcome();
		bool checkIsMatch(FText input);
		FText getGuest();
		void Game();
		bcCount Chcker(FText);
};

