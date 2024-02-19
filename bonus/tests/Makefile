##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Avetand Eliott's tests Makefile
##

SRC	=	tests_files/test_index.c	\
		tests_files/test_rindex.c	\
		tests_files/test_memfrob.c

NAME	    = unit-tests

CFLAGS		+=	--coverage -lcriterion

INCLUDES 	=	-Lcustom_src -lasm

tests_run:
	@$(MAKE) -C custom_src/ re
	@gcc -o $(NAME) $(SRC) $(CFLAGS) $(INCLUDES)
	./unit-tests

clean:
	rm -f *.gcda *.gcno
	@$(MAKE) -C custom_src/ clean

fclean:
	rm -f $(NAME)
	@$(MAKE) -C custom_src/ fclean

.PHONY: tests_run clean fclean