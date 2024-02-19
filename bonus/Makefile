##
## EPITECH PROJECT, 2020
## MiniLibC
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
	@$(MAKE) -C tests/ clean

fclean:	clean
	rm -f $(NAME)
	@$(MAKE) -C tests/ fclean

re:	fclean all

tests_run:
	@$(MAKE) -C tests/ tests_run

.PHONY: all clean fclean re tests_run