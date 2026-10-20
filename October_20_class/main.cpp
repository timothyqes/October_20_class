#include <iostream>
#include <string>

int main()
{
	while (true)
	{
		std::cout << "Enter a shape type. You may choose a rectangle, a circle, or a cylander."
			<< std::endl;

		std::string shapeEntry;
		std::cin >> shapeEntry; /*may use getline([cin, variable]) rather than cin.
				Cin reads up to the first space of a phrase.*/
		if (shapeEntry == "rectangle" || shapeEntry == "Rectangle") //A double equals sign double checks
		{
			float length = 0.0f;
			float width = 0.0f;

			std::cout << "Enter the length and the width. " << std::endl;
			std::cin >> length >> width;

			float area = length * width;

			std::cout << "\nThe area is equal to " << area << "\n" << std::endl;
		}
		else if (shapeEntry == "circle")
		{
			float radius = 0.0f;
			//float area = 0.0f;

			std::cout << "Enter the radius. " << std::endl;
			std::cin >> radius;

			std::cout << "\nThe area is equal to " << 3.14 * radius << "\n" << std::endl;
		}
		else if (shapeEntry == "cylander")
		{
			float radius = 0.0f; /*This variable has what is known as scope within these braces, so it 
			may function independantly within them.*/
			std::cout << "Enter the radius. " << std::endl;
			std::cin >> radius;

			std::cout << "\nThe volume of the cylandar is: " << "[blank space] " << 
				"\n" << std::endl;
		}
		else
		{
			std::cout << "An unrecognized shape has been entered. " << std::endl;
		}
	}
}