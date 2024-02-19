/*
** EPITECH PROJECT, 2022
** MiniLibC test
** File description:
** test_strcmp.c
*/

#include <criterion/criterion.h>

Test(strcmp, basic_strings)
{
    extern int test_strcmp(const char *s1, const char *s2);

    cr_assert_eq(test_strcmp("Hello world!", "Hello world!"), strcmp("Hello world!", "Hello world!"));
    cr_assert_eq(test_strcmp("Hello\nworld!", "Hello\nworld!"), strcmp("Hello\nworld!", "Hello\nworld!"));
    cr_assert_gt(0, test_strcmp("Hello warld!", "Hello world!"));
}

Test(strcmp, advanced_strings)
{
    extern int test_strcmp(const char *s1, const char *s2);

    cr_assert_eq(test_strcmp("Test\0a", "Test\0a"), strcmp("Test\0a", "Test\0a"));
    cr_assert_eq(test_strcmp("Test\0o", "Test\0o"), strcmp("Test\0o", "Test\0o"));
}
