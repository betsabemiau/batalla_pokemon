// batalla_pokemon_betsa.cpp : 
//anay betsabe

#include <iostream>
#include <string>
#include <stdio.h>


int main()
{
	int mimikyu = 100, squirtle = 100, pikachu = 100;
	int pokemon = 0;
	int var_ata = 15;
	int var_def = 5;
	int OPC_2;

	std::cout << "Elige un pokemon \n";
	std::cout << "Op1: mimikyu \n";
	std::cout << "Op2: pikachu\n";
	std::cout << "Op3: squirtle\n";
	std::cout << "Tu opcion es: \n"; std::cin >> pokemon;
	switch (pokemon)
	{
	case 1:
		std::cout << "Elegiste a mimikyu \n";
		std::cout << "tiene 100 de vida \n";
		do
		{
			std::cout << "quieres pelear (1) \n";
			std::cout << "quieres huir (2) \n";
			std::cin >> OPC_2;
			switch (OPC_2)
			{
			case 1:
				std::cout << "Decidiste atacar \n";
				std::cout << "Daño eficaz! \n";
				squirtle = squirtle - var_ata;
				std::cout << "Squirtle tiene de vida: " << squirtle << std::endl;
				break;

			case 2:
				std::cout << "decidiste huir, pero no se puede \n";
				break;
			}
		} while (squirtle > 0);

		std::cout << "felicidades, ganaste \n";

		break;
	case 2:
		std::cout << "Elegiste a pikachu \n";
		std::cout << "tiene 100 de vida \n";
		do {
			std::cout << "quieres pelear (1) \n";
			std::cout << "quieres huir (2) \n";
			std::cin >> OPC_2;
			switch (OPC_2)
			{
			case 1:
				std::cout << "Decidiste atacar \n";
				std::cout << "Daño eficaz! \n";
				squirtle = squirtle - var_ata;
				std::cout << "Squirtle tiene de vida: " << squirtle << std::endl;
				break;

			case 2:
				std::cout << "decidiste huir, pero no se puede \n";
				break;
			}
		} while (squirtle > 0);
		std::cout << "felicidades, ganaste \n";
		break;

	case 3:
		std::cout << "Elegiste a Squirtle \n";
		std::cout << "tiene 100 de vida \n";
		do
		{
			std::cout << "quieres pelear (1) \n";
			std::cout << "quieres huir (2) \n";
			std::cin >> OPC_2;

			switch (OPC_2)
			{
			case 1:
				std::cout << "Decidiste atacar \n";
				std::cout << "Daño eficaz! \n";
				pikachu = pikachu - var_ata;
				std::cout << "pikachu tiene de vida: " << pikachu << std::endl;
				break;

			case 2:
				std::cout << "decidiste huir, pero no se puede \n";
				break;
			}

		} while (pikachu > 0);

		std::cout << "felicidades, ganaste \n"; break;

	}
}
