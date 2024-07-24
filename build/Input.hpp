#ifndef INPUT_HPP
# define INPUT_HPP

# include "romrom.h"

class Input
{
	public:
		void		setLiteral(const std::string& input);
		std::string	getLiteral(void);
		void		setType(int);
		int			getType(void);

		void		findAndSetType(void);

	private:
		std::string	literal;
		int			type;
};

#endif
