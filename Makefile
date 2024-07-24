MAKEFLAGS	+=	--no-print-directory

NAME		=	romrom

HEADER		=	-I ./include

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++11 $(HEADER)

SRC_DIR		=	./src
BLD_DIR		=	./build
OBJ_DIR		=	./obj

SRC			=	main.cpp \
				$(SRC_DIR)/featureRedirect.cpp \
				$(BLD_DIR)/input.cpp


OBJ			=	$(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Compiling $@"
	@$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	@echo "Compiling $@"
	@$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	@echo "Cleaning object files"
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo "Cleaning $(NAME)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re