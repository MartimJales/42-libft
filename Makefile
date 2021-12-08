NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra -I. -c




FILES		= clib/*.c auxlib/*.c

OBJ			= $(FILES:%.c=%.o)

BONUS_FILES = lllib/*.c

OBJ_BONUS 	= $(BONUS_FILES:%.c=%.o)

all: $(NAME)

copy:
	cp -f clib/*.c .
	cp -f lllib/*.c .
	cp -f auxlib/*.c .

# This won't run if the .o files don't exist or are not modified
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)

# This won't run if the source files don't exist or are not modified
$(OBJ): $(FILES)
	gcc $(CFLAGS) $(FILES)

clean:
	rm -f $(OBJ)
	rm -f $(OBJ_BONUS)
	rm -f $(FILES)

fclean: clean
	rm -f $(NAME)

bonus:


