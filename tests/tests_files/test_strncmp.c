/*
** EPITECH PROJECT, 2022
** MiniLibC test
** File description:
** test_strncmp.c
*/

#include <criterion/criterion.h>

Test(strncmp, basic_strings)
{
    extern int test_strncmp(const char *s1, const char *s2, size_t n);

    cr_assert_eq(test_strncmp("Hello world!", "Hello world!", 12), strncmp("Hello world!", "Hello world!", 12));
    cr_assert_eq(test_strncmp("Hello\nworld!", "Hello\nworld!", 20), strncmp("Hello\nworld!", "Hello\nworld!", 20));
    cr_assert_gt(0, test_strncmp("Hello warld!", "Hello world!", 12));
    cr_assert_eq(0, test_strncmp("Hello warld!", "Hello world!", 3));
}

Test(strncmp, advanced_strings)
{
    extern int test_strncmp(const char *s1, const char *s2, size_t n);

    cr_assert_eq(test_strncmp("Test\0a", "Test\0a", 20), strncmp("Test\0a", "Test\0a", 20));
    cr_assert_eq(test_strncmp("Test\0o", "Test\0o", 4), strncmp("Test\0o", "Test\0o", 4));
}
