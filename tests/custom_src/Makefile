##
## EPITECH PROJECT, 2020
## MiniLibC tests' sources
## File description:
## Makefile
##

SRC		=	strlen.asm	\
			strchr.asm	\
			strrchr.asm	\
			memset.asm	\
			memcpy.asm	\
			strcmp.asm	\
			memmove.asm	\
			strncmp.asm	\
			strstr.asm	\
			strpbrk.asm	\
			strcspn.asm	\
			strcasecmp.asm

NAME	=	libasm.so

OBJ	=	$(SRC:.asm=.o)

all: $(OBJ)
	gcc -o $(NAME) $(OBJ) -fpic -nostdlib -shared

%.o : %.asm
	nasm -f elf64 -o $@ $<

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re