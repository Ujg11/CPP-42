# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ojimenez <ojimenez@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/13 12:02:52 by ojimenez          #+#    #+#              #
#    Updated: 2024/02/13 12:02:55 by ojimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CPP = c++
FLAGS = -Wall -Wextra -Werror -g -pedantic -std=c++98 -fsanitize=address
RM = rm -rf

#SOURCE
SRC = main.cpp Contact.cpp PhoneBook.cpp PhoneBook_utils.cpp
INC = $(addprefix -I, inc/)

#DIRECTORIES
D_SRC = src
D_OBJ = $(D_SRC)/obj
OBJ = $(addprefix $(D_OBJ)/, $(SRC:.cpp=.o))
DEP = $(addprefix $(D_OBJ)/, $(SRC:.cpp=.d))


all: dir $(NAME)

-include $(DEP) #el signo '-' evita problemas si no existen dependencias

dir:
	-mkdir $(D_OBJ)

#construimos los objetos en el directorio $(D_OBJ)/
#-MMD -c se usa para generar archivos de dependencia y compilar. El $< se refiera al archivo fuente y $@ al objeto
$(D_OBJ)/%.o: $(D_SRC)/%.cpp Makefile
		$(CPP) $(FLAGS) -MMD -c $< -o $@ $(INC)
		echo "file: $< to $@"

#Construimos el archivo ejecutable a partir de los objetos
$(NAME): $(OBJ)
		$(CPP) $(FLAGS) $(INC) $(OBJ) -o $(NAME)
		echo "Project $(NAME) successfully compiled!!"

clean:
		$(RM) $(D_OBJ)
		echo "$(NAME) object files cleaned successfully!"

fclean: clean
		$(RM) $(NAME)
		echo "All removed successfully!"

re: fclean all

.PHONY: all clean fclean re dir