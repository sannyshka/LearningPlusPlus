#include <cstdlib>
#include <iostream>
#include <ctime>

int main()
{
	int userNumber;
	int secretNumber;
	int attempts = 0;
	int highscore = -1;

	srand(static_cast<unsigned int>(time(nullptr)));

	while (true) {
		std::cout << "Welcome to the Magical Number Quest! Enter a number from 0 to 50 (or -1 to embark on a different adventure): ";
		std::cin >> userNumber;

		if (userNumber == -1) {
			std::cout << "Farewell, brave adventurer! Untill our paths cross again." << std::endl;
			break;
		}

		secretNumber = rand() % 51;

		while (userNumber != secretNumber) {
			attempts++;

			if (userNumber > secretNumber + 20) {
				std::cout << "Too grandiose! The magic whispers of a smaller number." << std::endl;
			}
			else if (userNumber > secretNumber + 10) {
				std::cout << "A bit extravagant! Seek a more humble number." << std::endl;
			}
			else if (secretNumber > userNumber + 20) {
				std::cout << "Too modest! The magic craves a larger number." << std::endl;
			}
			else if (secretNumber > userNumber + 10) {
				std::cout << "A bit reserved! Aim for a more splendid number." << std::endl;
			}
			else {
				std::cout << "Intriguing, but not quite right! The mystical number eludes you." << std::endl;
			}

			std::cout << "Embark on another attempt: ";
			std::cin >> userNumber;
			}
			
			std::cout << "Huzzah! You've unveiled the Magical number! Congratulations, mighty adventurer!" << std::endl;
			std::cout << "Number of attemps : " << attempts << std::endl;

			if (highscore == -1 || attempts < highscore) {
				highscore = attempts;
				std::cout << "You've set a new record in the enchanted realm!" << std::endl;
			}
			else {
				std::cout << "Current highscore in the magical realm: " << highscore << " attempts" << std::endl;
			}

			attempts = 0;
	}

	return 0;
}

