NAME		= ex03
SRCS_DIR	= src/
OBJS_DIR	= obj/
INCS_DIR	= src/
SRCS_F		= main.cpp  ClapTrap.cpp ScavTrap.cpp FlagTrap.cpp DiamondTrap.cpp

SRCS		= $(addprefix $(SRCS_DIR), $(SRCS_F))
OBJS_F		= $(patsubst %.cpp, %.o, $(SRCS_F))
DEPS_F		= $(patsubst %.cpp, %.d, $(SRCS_F))
OBJS		= $(addprefix $(OBJS_DIR), $(OBJS_F))
DEPS		= $(addprefix $(OBJS_DIR), $(DEPS_F))

CC			= clang++
# CFLAGS		= 
CFLAGS		= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(OBJS_DIR)%.o : $(SRCS_DIR)%.cpp
		@$(CC) $(CFLAGS) -I$(INCS_DIR) -c $< -o $@

$(OBJS_DIR) :
		mkdir -p $@

$(NAME):  $(OBJS_DIR) $(OBJS) 
		@$(CC) $(CFLAGS) $(OBJS)  -o $(NAME)
clean :
	rm -rf $(OBJS_DIR)

fclean : clean
	rm -f $(NAME)

re: fclean all

.PHONY:
		all clean fclean re 

-include $(DEPS) $(DEPS_B)
