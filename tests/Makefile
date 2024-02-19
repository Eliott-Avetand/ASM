##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Avetand Eliott's tests Makefile
##

SRC	=	tests_files/test_strlen.c	\
		tests_files/test_strchr.c	\
		tests_files/test_strrchr.c	\
		tests_files/test_memset.c	\
		tests_files/test_memcpy.c	\
		tests_files/test_strcmp.c	\
		tests_files/test_memmove.c	\
		tests_files/test_strncmp.c	\
		tests_files/test_strstr.c	\
		tests_files/test_strpbrk.c	\
		tests_files/test_strcspn.c	\
		tests_files/test_strcasecmp.c

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