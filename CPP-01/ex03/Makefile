# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ojimenez <ojimenez@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/17 14:32:36 by ojimenez          #+#    #+#              #
#    Updated: 2024/02/18 17:58:51 by ojimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = humans
CPP = c++
FLAGS = -Wall -Wextra -Werror -g -pedantic -std=c++98 -fsanitize=address
RM = rm -rf

#SOURCE
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp 
INC = Weapon.hpp HumanA.hpp HumanB.hpp

#DIRECTORIES
D_OBJ = obj
OBJ = $(addprefix $(D_OBJ)/, $(SRC:.cpp=.o))
DEP = $(addprefix $(D_OBJ)/, $(SRC:.cpp=.d))

all : dir $(NAME)

-include $(DEP)

dir:
	@mkdir -p $(D_OBJ)

$(D_OBJ)/%.o: %.cpp Makefile
		$(CPP) $(FLAGS) -MMD -c $< -o $@
		echo "file: $< to $@"
	
$(NAME): $(OBJ) Makefile
		$(CPP) $(FLAGS) $(OBJ) -o $(NAME)
		echo "Project $(NAME) successfully compiled!!"

clean:
		$(RM) $(D_OBJ)
		echo "$(NAME) object files cleaned successfully!"

fclean: clean
		$(RM) $(NAME)
		echo "All removed successfully!"

re: fclean all

.PHONY: all clean fclean re dir