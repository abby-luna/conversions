#include <iostream>
#include <math.h>
#include <string.h>
#include <sstream>
#include <algorithm>


class Conversions
{
private:
	std::string input;

	int decimalOut = 0;
	std::string octalOut = "";
	std::string binaryOut = "";

	char type;
	void octal()
	{

		for (int i = 0; i > input.length(); i++) {


		}


	}

	void binary()
	{
		for (int i = 0; i < input.length(); i++) 
		{
			int current = input[i] - 48;
			std::cout << current << std::endl;
			if (current) 
			{
				decimalOut += std::pow(2, input.length()-(i+1));
			}

		}

		std::cout << "decimal " << decimalOut << std::endl;


	}

	void decimal()
	{

		int start = stoi(input);

		while (start > 0) 
		{
			if (start % 2 == 0) 
			{
				binaryOut += "0";
				
			}
			else 
			{
				binaryOut += "1";
				start--;
			}
			start /= 2;

		}

		std::reverse(binaryOut.begin(), binaryOut.end());
		std::cout << binaryOut << std::endl;


	}
	void hexadecimal()
	{


	}

	void interpret() 
	{

		switch (type) 
		{
		case 'o':
			octal();
			return;
		case 'h':
			hexadecimal();
			return;
		case 'b':
			binary();
			return;
		default:
			decimal();
			return;


		}


	}

public:
	Conversions()
	{		
		std::cin >> this->type;
		std::cin >> this->input;

		this->interpret();

	}



};

int main()
{
	Conversions();

}
