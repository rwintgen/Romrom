#include "romrom.h"

void	Input::setLiteral(const std::string& input)
{
	this->literal = input;
}

std::string	Input::getLiteral(void)
{
	return (this->literal);
}

void	Input::setType(int type)
{
	this->type = type;
}

int	Input::getType(void)
{
	return (this->type);
}

// TODO transform strings to lowercase before comparison to clarify code
void	Input::findAndSetType(void)
{
	std::string& str = this->literal;
	if (str == STR_EXIT0 || str == STR_EXIT1 || str == STR_EXIT2 || str == STR_EXIT3 \
		|| str == STR_EXIT4 || str == STR_EXIT5 || str == STR_EXIT6 || str == STR_EXIT7 \
		|| str == STR_EXIT8)
		this->setType(EXIT);
	else if (str == STR_HELP0 || str == STR_HELP1 || str == STR_HELP2 || str == STR_HELP3 \
			|| str == STR_HELP4 || str == STR_HELP5 || str == STR_HELP6)
		this->setType(HELP);
	else if (str == STR_STORY0 || str == STR_STORY1 || str == STR_STORY2 || str == STR_STORY3)
		this->setType(STORY);
	else if (str == STR_QUOTE0 || str == STR_QUOTE1 || str == STR_QUOTE2 || str == STR_QUOTE3 \
			|| str == STR_QUOTE4 || str == STR_QUOTE5)
		this->setType(QUOTE);
	else if (str == STR_DRAW0 || str == STR_DRAW1 || str == STR_DRAW2 || str == STR_DRAW3 \
			|| str == STR_DRAW4 || str == STR_DRAW5 || str == STR_DRAW6 || str == STR_DRAW7)
		this->setType(DRAW);
	else if (str == STR_LOVE0 || str == STR_LOVE1 || str == STR_LOVE2 || str == STR_LOVE3)
		this->setType(LOVE);
	else
		this->setType(ERROR);
}
