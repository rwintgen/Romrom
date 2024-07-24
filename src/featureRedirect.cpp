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
    std::vector<std::string> usageMessages = {
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

int tellStory(void)
{
	std::cout << "Once upon a time, Romrom was in the car coming back from holidays. \
He was coding a stupid program to entertain his girlfriend, and this program could tell stories \
-among other things. As he ran low on battery, he decided to tell a story about himself \
and finish it very quickly so he could make his stupid program functional. The end." << std::endl;

	return (0);
}

int quoteDwight(void)
{
	std::vector<std::string> quotes = {
		"Bears, beets, Battlestar Galactica.",
		"I am fast. To give you a reference point, I am somewhere between a snake and a mongoose... And a panther.",
		"Identity theft is not a joke, Jim! Millions of families suffer every year!",
		"Fact: Bears eat beets. Bears. Beets. Battlestar Galactica.",
		"Through concentration, I can raise and lower my cholesterol at will.",
		"Whenever I'm about to do something, I think, 'Would an idiot do that?' And if they would, I do not do that thing.",
		"I am ready to face any challenge that might be foolish enough to face me.",
		"I am running away from my responsibilities. And it feels good.",
		"I am Beyoncé, always.",
		"I am dead inside.",
		"I am better than you have ever been or ever will be.",
		"I am a black belt in gift wrapping.",
		"I am a huge Woody Allen fan. Although I've only seen Antz.",
		"I am a Schrute. And Schrutes don't smile.",
	};

	std::srand(std::time(0));
	int randomIndex = std::rand() % quotes.size();

	std::cout << quotes[randomIndex] << std::endl;
    return (0);
}

int drawStuff(void)
{
    std::cout << "  **     **  " << std::endl;
    std::cout << " ****   **** " << std::endl;
    std::cout << "****** ******" << std::endl;
    std::cout << " *********** " << std::endl;
    std::cout << "  *********  " << std::endl;
    std::cout << "   *******   " << std::endl;
    std::cout << "    *****    " << std::endl;
    std::cout << "     ***     " << std::endl;
    std::cout << "      *      " << std::endl;

    return (0);
}

int sayILY(void)
{
	std::cout << "Of course I love you, and I miss you too!" << std::endl;
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
		return (drawStuff());
	else if (input.getType() == LOVE)
		return (sayILY());
	else
		return (ERROR);
}
