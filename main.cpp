#include <romrom.h>

int main(void)
{
	Input input;

	std::cout << WELCOME_MSG << std::endl;

	while (true)
	{
		std::string strInput;
		std::cout << "> ";
		std::getline(std::cin, strInput);
		input.setLiteral(strInput);
		input.findAndSetType();

		if (input.getType() == ERROR)
		{
			std::cout << ERR_MSG_INVALID_INPUT << std::endl;
			continue ;
		}
		else if (input.getType() == EXIT)
			break ;

		// TODO check if possible to do a try/catch on this one
		if (execFeature(input) == ERROR)
			return (EXIT_FAILURE);
	}

	std::cout << EXIT_MSG << std::endl;
	return (EXIT_SUCCESS);
}
