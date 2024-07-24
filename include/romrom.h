#ifndef ROMROM_H
# define ROMROM_H

/*****************************************************************************\
*                                  INCLUDES                                   *
\*****************************************************************************/

# include <iostream>
# include <string>
# include <vector>
# include <random>
# include <ctime>

# include "../build/Input.hpp"

/*****************************************************************************\
*                                  DEFINES                                    *
\*****************************************************************************/

# define SUCCESS 0
# define ERROR -1

// TODO replace with enum
# define HELP 0
# define EXIT 1
# define STORY 2
# define QUOTE 3
# define DRAW 4
# define LOVE 5

# define WELCOME_MSG "Hello, I am your virtual Romrom. To begin, ask me \"What can you do?\""
# define EXIT_MSG "See ya! ;)"

# define ERR_MSG_INVALID_INPUT "I didn't catch that. Just like the real Romrom, \
							my faculties are very limited. Ask me \"What can you do?\""

# define STR_EXIT0 "EXIT"
# define STR_EXIT1 "Exit"
# define STR_EXIT2 "exit"
# define STR_EXIT3 "QUIT"
# define STR_EXIT4 "Quit"
# define STR_EXIT5 "quit"
# define STR_EXIT6 "STOP"
# define STR_EXIT7 "Stop"
# define STR_EXIT8 "stop"

# define STR_HELP0 "What can you do?"
# define STR_HELP1 "What can you do"
# define STR_HELP2 "what can you do?"
# define STR_HELP3 "what can you do"
# define STR_HELP4 "HELP"
# define STR_HELP5 "Help"
# define STR_HELP6 "help"

# define STR_STORY0 "Tell me a story"
# define STR_STORY1 "tell me a story"
# define STR_STORY2 "Story"
# define STR_STORY3 "story"

# define STR_QUOTE0 "Quote Dwight"
# define STR_QUOTE1 "Quote dwight"
# define STR_QUOTE2 "quote Dwight"
# define STR_QUOTE3 "quote dwight"
# define STR_QUOTE4 "Quote"
# define STR_QUOTE5 "quote"

# define STR_DRAW0 "Draw something"
# define STR_DRAW1 "Draw me something"
# define STR_DRAW2 "Draw me sth"
# define STR_DRAW3 "draw something"
# define STR_DRAW4 "draw me something"
# define STR_DRAW5 "draw me sth"
# define STR_DRAW6 "Draw"
# define STR_DRAW7 "draw"

# define STR_LOVE0 "Do you love me?"
# define STR_LOVE1 "Do you love me"
# define STR_LOVE2 "do you love me?"
# define STR_LOVE3 "do you love me"

/*****************************************************************************\
*                                 PROTOTYPES                                  *
\*****************************************************************************/

int execFeature(Input input);

#endif