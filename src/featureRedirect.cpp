#include <romrom.h>

/*
Features:
- What can I do
- Tell a story
- Quote Dwight
- Draw stuff
- Say ILY
*/

int printHelp(void)
{
    std::vector<std::string> usageMessages =
	{
        "Try asking me to tell you a story: \"Tell me a story\"",
        "Try asking me to quote Dwight: \"Quote Dwight\"",
        "Try asking me to draw something: \"Draw something\"",
        "Try asking me if I love you: \"Do you love me?\"",
    };

    std::srand(std::time(0));
    int randomIndex = std::rand() % usageMessages.size();

    std::cout << usageMessages[randomIndex] << std::endl;
    return (0);
}

// TODO replace with switch
int execFeature(Input input)
{
	if (input.getType() == HELP)
		return (printHelp());
	else if (input.getType() == STORY)
		return (tellStory());
	else if (input.getType() == QUOTE)
		return (quoteDwight());
	else if (input.getType() == DRAW)
		return (drawStuff();
	else if (input.getType() == LOVE)
		return (sayILY());
	else
		return (ERROR);
}
