/**
 * @package:   Player
 * @version:   0.2.0 11/24/2019
 * @file:      Main.cpp
 * @brief:     Player Generator
 * @author:    Justin D. Byrne <justin@byrne-systems.com>
 * @license:   MIT
 */

#include <iostream>
#include <time.h>
#include "include/MACRO.h"
#include "include/CHARACTER.h"

const char* version_no = "0.2.0";

void error(const char* msg);
void help();
void version();
void exit();

/// <summary>
/// Main Programs Entry Point
/// </summary>
/// <param name="argc">Argument Count: Number of command line arguments</param>
/// <param name="argv">Argument Vector: Actual arguments</param>
/// <returns>INT : Exit Code</returns>
int main(int argc, const char* argv[])
{
	if (argc > 1)
	{
		int number, rng;
		int itl, str, vit, dex, lck;
		CHARACTER player;

		srand(time(NULL));				// <! Seed srand() with time signature

		switch (argc)
		{
		case 2:
			if (strcmp(argv[1], "--help") == 0)
			{
				help();
			}
			else if (strcmp(argv[1], "--version") == 0)
			{
				version();
			}
			else
			{
				error("The amount of arguments for this function is not accurate.");
			}
			break;
		case 5:
			std::cout << "Player:\n" << std::endl;

			number = atoi(argv[1]);						//<! Converting string type to integer type
			rng    = atoi(argv[4]);

			player = player.generate_character(number, argv[2], argv[3], rng);

			player.display_character();
			player.display_attributes();

			break;
		case 10:
			std::cout << "Player:\n" << std::endl;

			number = atoi(argv[1]);						//<! Converting string type to integer type
			rng    = atoi(argv[4]);
			itl    = atoi(argv[5]);
			str    = atoi(argv[6]);
			vit    = atoi(argv[7]);
			dex    = atoi(argv[8]);
			lck    = atoi(argv[9]);

			player = player.generate_character(number, argv[2], argv[3], itl, str, vit, dex, lck);

			player.display_character();
			player.display_attributes();

			break;
		default:
			error("The amount of arguments for this function is not accurate.");
			break;
		}
	}

	exit();
}

/// <summary>
/// Displays error message
/// </summary>
/// <param name="msg">Message to Display</param>
void error(const char* msg)
{
	std::cout << "\n[error] " << msg << std::endl;
	std::cout << " : Please evaluate your previous command and try again!\n" << std::endl;
}

/// <summary>
/// Displays help and usage information for this program
/// </summary>
void help()
{
	std::cout << std::endl;
	std::cout << "Usage:\tPlayer <[option]||[no]> [name] [class] <[max]||[int] [str] [vit] [dex] [lck]>" << std::endl;
	std::cout << std::endl;
	std::cout << "\tOptions:\t" << std::endl;
	std::cout << "\t\t--help\t\tDisplay this help and exit" << std::endl;
	std::cout << "\t\t--version\tOutput version information and exit" << std::endl;
	std::cout << std::endl;
	std::cout << "\tParams:\t" << std::endl;
	std::cout << "\t\t[no]\t\tNumber associated with the generated character" << std::endl;
	std::cout << "\t\t[name]\t\tName of the generated character" << std::endl;
	std::cout << "\t\t[class]\t\tClass of the generated character" << std::endl;
	std::cout << "\t\t[max]\t\tMax boundary to couple with a minimum boundary of 1" << std::endl;
	std::cout << "\t\t\t\tfor a random number generator generating values for" << std::endl;
	std::cout << "\t\t\t\tall 5 attributes: <int> <str> <vit> <dex> <lck>" << std::endl;
	std::cout << "\t\t[int]\t\tSet the value for the intelligence attribute" << std::endl;
	std::cout << "\t\t[str]\t\tSet the value for the strength attribute" << std::endl;
	std::cout << "\t\t[vit]\t\tSet the value for the vitality attribute" << std::endl;
	std::cout << "\t\t[dex]\t\tSet the value for the dexterity attribute" << std::endl;
	std::cout << "\t\t[lck]\t\tSet the value for the luck attribute" << std::endl;
	std::cout << std::endl;
}

/// <summary>
/// Displays version information for this program
/// </summary>
void version()
{
	std::cout << "\nVersion: " << version_no << "\n" << std::endl;
}

/// <summary>
/// Exiting sequence
/// </summary>
void exit()
{
	std::cout << "Press any key to escape!" << std::endl;

	std::cin.get();
}