#include <iostream>
#include <cstdlib>
#include <conio.h>

void Game_1()
{
	char p = char(240);
	char Tab1[30][20];
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			Tab1[j][i] = ' ';
		}
	}
	Tab1[0][0] = char(240);
	int s;
	int x = 0, y = 0;
	while (1)
	{
		s = getch();
		switch (s)
		{
		case 97:
			x -= 1;
			Tab[x][y] = p;
			Tab[x + 1][y] = ' ';
			break;
		case 100:
			x += 1;
			Tab[x][y] = p;
			Tab[x - 1][y] = ' ';
			break;
		default:
			break;
		}
		for (int i = 0; i < 20; i++)
		{
			for (int j = 0; j < 30; j++)
			{
				std::cout<<Tab1[j][i];
			}
			std::cout << std::endl;
		}
	}
}

int main()
{
    std::cout << "Hello World!\n";
	std::cout << "Pieprzyc!";
	//nie ogarniam
	//zad 4:
	std::cout << "Wprowadz liczbe:";
	int liczba1;
	std::cin >> liczba1;
	std::cout << liczba1 + 1;
	std::cout << std::endl;
	system("cls");
}
