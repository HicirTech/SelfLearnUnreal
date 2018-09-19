// LearnC++Basic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "main.h"
#include "FGame.h";

int printWelcome();
std::string getGuest();
void playGame();
bool AskToPlayAgain();
	
int main()
{	
	
	
	do {
		printWelcome();
		playGame();
	}while (AskToPlayAgain());
	
    return 0;
}

bool AskToPlayAgain()
{
	std ::cout << "Play again? [y/n]";
	char again;
	std ::cin >> again;
	return again == 'y';
}
void playGame()
{
	FGame a;
	

	int numberOfTurns = 5;
	for (int i = 0; i != numberOfTurns; i++)
	{
		std ::cout << "you still have" << numberOfTurns - i <<  std :: endl;
		std::string input = getGuest();
		std ::cout << input <<  std :: endl <<  std :: endl;
	}
}

std::string getGuest()
{
	std ::cout << "your input is :";
	std::string input;
	std ::getline(std ::cin, input);
	return input;
}
int printWelcome()
{
	constexpr int WORD_LENGTH = 5;
	std ::cout << "Welcome, guest word " <<  std :: endl;
	std ::cout << "Word length is " << WORD_LENGTH <<  std :: endl;
	return WORD_LENGTH;
}
