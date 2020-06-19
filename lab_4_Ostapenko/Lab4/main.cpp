#include "Header.h"
#include <iostream>
#include <time.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	char choose;
	do {
		std::cout << "�������� � ��� 0: ";
		std::cin >> choose;
	} while (choose != 'X' && choose != '0');
	Game mainGame = initGame(choose);
	while (!updateGame(&mainGame))
	{
		if (mainGame.isUserTurn) {
			userTurn(&mainGame);
		}
		else {
			botTurn(&mainGame);
		}
		updateDisplay(mainGame);
	}
	if (mainGame.status == USER_WIN) {
		std::cout << "�� ��������!";
	}
	else if (mainGame.status == BOT_WIN) {
		std::cout << "�� ���������!";
	}
	else {
		std::cout << "�����!";
	}
}