##
## EPITECH PROJECT, 2020
## MiniLibC tests' sources
## File description:
## Makefile
##

SRC		=	index.asm	\
			rindex.asm	\
			memfrob.asm

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