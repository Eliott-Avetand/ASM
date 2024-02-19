/*
** EPITECH PROJECT, 2022
** MiniLibC test
** File description:
** test_index.c
*/

#include <criterion/criterion.h>

Test(index, basic_strings)
{
    extern char *test_index(const char *s, int c);

    cr_assert_eq(test_index("Hello world!", 'o'), index("Hello world!", 'o'));
    cr_assert_eq(test_index("Hello world!", 'z'), index("Hello world!", 'z'));
    cr_assert_eq(test_index("Hello world!", ' '), index("Hello world!", ' '));
    cr_assert_eq(test_index("Hello world!", 0), index("Hello world!", 0));
    cr_assert_eq(test_index("Hello world!", 900), index("Hello world!", 900));
}

Test(index, advanced_strings)
{
    extern char *test_index(const char *s, int c);

    cr_assert_eq(test_index("ooooooooooooo", 'o'), index("ooooooooooooo", 'o'));
}

Test(index, expert_strings)
{
    extern char *test_index(const char *s, int c);

    cr_assert_eq(test_index("Hello\nWorld!", 'W'), index("Hello\nWorld!", 'W'));
    cr_assert_eq(test_index("Hello\nWorld!\0Zerror", 'Z'), index("Hello\nWorld!\0Zerror", 'Z'));
}