#Executable name
NAME = bsq

#Source files
SRC = main.c check_map.c create_char_matrix.c create_int_matrix.c read_file.c solve_ang.c print.c row_column_count.c

#Convert to object files
OBJ = $(SRC:.c=.o)

#Compiler
CC = cc

#Flags
CFLAGS = -Wall -Wextra -Werror

#Rule to create separate object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#Create the executable
all: $(NAME)

#Instructions to create one executable combining all the object files
$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

#Remove all object files
clean:
	rm -f $(OBJ)

#Remove all object files and the executable
fclean:
	rm -f $(OBJ)
	rm -f $(NAME)

#Remove all object files and the executable and rebuild them
re: fclean all

#Prevent conflicts between these filenames and the make commands
.PHONY: all clean fclean re
