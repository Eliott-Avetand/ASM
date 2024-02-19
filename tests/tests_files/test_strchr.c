/*
** EPITECH PROJECT, 2022
** MiniLibC test
** File description:
** test_strchr.c
*/

#include <criterion/criterion.h>

Test(strchr, basic_strings)
{
    extern char *test_strchr(const char *s, int c);

    cr_assert_eq(test_strchr("Hello world!", 'o'), strchr("Hello world!", 'o'));
    cr_assert_eq(test_strchr("Hello world!", 'z'), strchr("Hello world!", 'z'));
    cr_assert_eq(test_strchr("Hello world!", ' '), strchr("Hello world!", ' '));
    cr_assert_eq(test_strchr("Hello world!", 0), strchr("Hello world!", 0));
    cr_assert_eq(test_strchr("Hello world!", 900), strchr("Hello world!", 900));
}

Test(strchr, advanced_strings)
{
    extern char *test_strchr(const char *s, int c);

    cr_assert_eq(test_strchr("ooooooooooooo", 'o'), strchr("ooooooooooooo", 'o'));
}

Test(strchr, expert_strings)
{
    extern char *test_strchr(const char *s, int c);

    cr_assert_eq(test_strchr("Hello\nWorld!", 'W'), strchr("Hello\nWorld!", 'W'));
    cr_assert_eq(test_strchr("Hello\nWorld!\0Zerror", 'Z'), strchr("Hello\nWorld!\0Zerror", 'Z'));
}