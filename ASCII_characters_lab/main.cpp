#include <iostream>

int main()
//May comment out one of the parts to run the other.
{
	//*Part one of the lab:
	std::cout << "Enter any character (numeric, alphabetic, or symbols), but 'q' ends the program. " 
		<< std::endl;

	char userInput;

	std::cin >> userInput;
	
	int numberOfCharacters = 1;

	while (userInput != 'q')
	{
		std::cout << "Enter an additonal character (but enter 'q' to quit) " << std::endl;
		std::cin >> userInput;
		numberOfCharacters++; //Incrementation by 1.
	}
	std::cout << "You entered " << numberOfCharacters << " characters total " << std::endl;


	//*Part two of the lab:
	for (char currentLetter = 'a'; currentLetter <= 'z'; currentLetter++) /*Adding += 2 at the 
		incrementation portion skips by 2.
		*/
		std::cout << currentLetter << std::endl;

	//May do the following code as an alternative. It is known as type casting:
	//One more line of code here using SetConsoleOutput[...] with extra equivalent #include statements
	//for (int i = 97; i <= 125; i++)
	//	std::cout << (char)i << std::endl;
}