/*
** EPITECH PROJECT, 2022
** MiniLibC test
** File description:
** test_memmove.c
*/

#include <criterion/criterion.h>
#include <stdlib.h>
#include <stdio.h>

Test(memmove, Simple_test)
{
    void *test_memmove(void *dest, const void *src, size_t n);
	char *test1 = strdup("Hello world!");
	char *test2 = strdup("Hello world!");
	char *copy1 = strdup("New world!");
	char *copy2 = strdup("New world!");

	cr_assert_str_eq(memmove(test1, copy1, 4), test_memmove(test2, copy2, 4));
}

Test(memmove, Empty_string)
{
    void *test_memmove(void *dest, const void *src, size_t n);
	char *test1 = strdup("Hello world!");
	char *test2 = strdup("");
    char *test3 = strdup("");
	char *test4 = strdup("I'm a sandwich");

	cr_assert_str_eq(test_memmove(test1, test2, 1), test1);
	cr_assert_str_eq(test_memmove(test3, test4, 1), test3);
}

Test(memmove, Both_empty_string)
{
    void *test_memmove(void *dest, const void *src, size_t n);
	char *test1 = strdup("");
	char *test2 = strdup("");

	cr_assert_str_eq(test_memmove(test1, test2, 1), test1);
}

Test(memmove, Check_with_real_function)
{
    void *test_memmove(void *dest, const void *src, size_t n);
	char *test = strdup("Hello world! The famous programming sentence!");

	cr_assert_eq(test_memmove(test + 15, test + 20, 11), memmove(test + 15, test + 20, 11));
}

Test(memmove, Searching_crash)
{
    void *test_memmove(void *dest, const void *src, size_t n);
	char *test = strdup("Hello world! The famous programming sentence!");

    cr_assert_str_eq(memmove(test + 15, test + 20, 0), test_memmove(test + 15, test + 20, 0));
}