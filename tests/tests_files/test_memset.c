/*
** EPITECH PROJECT, 2022
** MiniLibC test
** File description:
** test_memset.c
*/

#include <criterion/criterion.h>
#include <stdlib.h>

Test(memset, basic_memory)
{
    extern void *test_memset(void *s, int c, size_t n);
    char *str = malloc(sizeof(char) * 13);

    memcpy(str, "Hello World!\0", 13);
    cr_assert_eq(test_memset(str, 'a', 5), memset(str, 'a', 5));
    cr_assert_eq(test_memset(str, ' ', 5), memset(str, ' ', 5));
    cr_assert_eq(test_memset(str, 'a', 50), memset(str, 'a', 50));
    cr_assert_eq(test_memset(str, 'a', 0), memset(str, 'a', 0));
}

Test(memset, advanced_memory)
{
    extern void *test_memset(void *s, int c, size_t n);
    char *str = malloc(sizeof(char) * 13);

    memcpy(str, "Hello World!\0", 13);
    cr_assert_eq(test_memset(str, '\n', 5), memset(str, '\n', 5));
    cr_assert_eq(test_memset(str, 4, 5), memset(str, 4, 5));
    cr_assert_eq(test_memset(str, 0, 5), memset(str, 0, 5));
}