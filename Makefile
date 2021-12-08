NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra -I. -c
FILES		= *.c
#ft_memset.c \
#				ft_bzero.c \
#				ft_memcpy.c \
#				ft_memccpy.c \
#				ft_strlen.c \
#				ft_memmove.c \
#				ft_memchr.c \
#				ft_memcmp.c \
#				ft_strcpy.c \
#				ft_strdup.c \
#				ft_strcat.c \
#				ft_strncat.c \
#				ft_strlcat.c \
#				ft_strchr.c \
#				ft_strrchr.c \
#				ft_strstr.c \
#				ft_strnstr.c \
#				ft_strcmp.c \
#				ft_strncmp.c \
#				ft_atoi.c \
#				ft_islower.c \
#				ft_isupper.c \
#				ft_isalpha.c \
#				ft_isdigit.c \
#				ft_isalnum.c \
#				ft_isprint.c \
#				ft_toupper.c \
#				ft_tolower.c \
#				ft_strncpy.c \
#				ft_isascii.c \
#				ft_memalloc.c \
#				ft_memdel.c \
#				ft_strnew.c \
#				ft_strdel.c \
#				ft_strclr.c \
#				ft_striter.c \
#				ft_striteri.c \
#				ft_strmap.c \
#				ft_strmapi.c \
#				ft_strequ.c \
#				ft_strnequ.c \
#				ft_strsub.c \
#				ft_strjoin.c \
#				ft_strtrim.c \
#				ft_strsplit.c \
#				ft_itoa.c \
#				ft_putchar.c \
#				ft_putchar_fd.c \
#				ft_countwords.c \
#				ft_putstr.c \
#				ft_putendl.c \
#				ft_putnbr.c \
#				ft_putnbr_fd.c \
#				ft_putstr_fd.c \
#				ft_putendl_fd.c \
#				ft_lstnew.c \
#				ft_lstdelone.c \
#				ft_lstdel.c \
#				ft_lstadd.c \
#				ft_lstiter.c \
#				ft_lstmap.c \
#				ft_strndup.c \
#				ft_capitalize.c \
#				ft_lst_reverse.c \
#				ft_realloc.c \
#				ft_strjoinch.c \
#				ft_strnchr.c \
#				ft_copyuntil.c \
#				ft_strstartswith.c \
#				ft_intlen.c \
#				ft_strendswith.c \
#				ft_pathjoin.c \
#				ft_lstaddback.c \
#				get_next_line.c \
#				ft_putnstr.c \
#				ft_strreplace.c \
#				ft_isemptystr.c \
#				ft_strsplitall.c \
#				ft_countwordsall.c \
#				ft_freestrarr.c \
#				ft_strjoincl.c \
#				ft_strjoinchcl.c \
#				ft_count2darray.c \
#				ft_strarrmax.c \
#				ft_get_parent_path.c
OBJ			= $(FILES:%.c=%.o)

all: $(NAME)

copy:
	cp -f clib/*.c .
	cp -f lllib/*.c .
	cp -f auxlib/*.c .

# This won't run if the .o files don't exist or are not modified
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# This won't run if the source files don't exist or are not modified
$(OBJ): $(FILES)
	gcc $(CFLAGS) $(FILES)

clean:
	rm -f $(OBJ)
	rm -f $(FILES) # comment this line if you don't want it to remove the source files from the root

fclean: clean
	rm -f $(NAME)

#re: fclean all

# I use .PHONY to make sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
#.PHONY: clean fclean all re





















## The name of the source files
#SOURCES = *.c

## The name of the executable
#EXE = libft.a

## Flags for compilation (adding warnings are always good)
#CFLAGS = -Wall -Werror -Wextra

## Use the GCC frontend program when linking
#LD = gcc

## This creates a list of object files from the source files
#OBJECTS = $(SOURCES:%.c=%.o)

## The first target, this will be the default target if none is specified
## This target tells "make" to make the "all" target
#default: all

## Having an "all" target is customary, so one could write "make all"
## It depends on the executable program
#all: $(EXE)

## This will link the executable from the object files
#$(EXE): $(OBJECTS)
#    $(LD) $(OBJECTS) -o  $(EXE) $(LIBS)

## This is a target that will compiler all needed source files into object files
## We don't need to specify a command or any rules, "make" will handle it automatically
#%.o: %.c

## Target to clean up after us
#clean:
#    -rm -f $(EXE)      # Remove the executable file
#    -rm -f $(OBJECTS)  # Remove the object files




##blabla
#ar r test.a *.c
