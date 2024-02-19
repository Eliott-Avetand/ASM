/*
** EPITECH PROJECT, 2022
** MiniLibC test
** File description:
** test_strlen.c
*/

#include <criterion/criterion.h>

Test(strlen, basic_strings)
{
    extern int test_strlen(char const *str);

    cr_assert_eq(test_strlen("Hello World!"), strlen("Hello World!"));
    cr_assert_eq(test_strlen("This is a long sentence to test the function!"),
    strlen("This is a long sentence to test the function!"));
    cr_assert_eq(test_strlen("I"), strlen("I"));
}

Test(strlen, advanced_strings)
{
    extern int test_strlen(char const *str);

    cr_assert_eq(test_strlen("Hello\nWorld!"), strlen("Hello\nWorld!"));
    cr_assert_eq(test_strlen("This\t\tis a long\tsentence     to test the function!"),
    strlen("This\t\tis a long\tsentence     to test the function!"));
    cr_assert_eq(test_strlen("I\n"), strlen("I\n"));
}

Test(strlen, expert_string)
{
    extern int test_strlen(char const *str);

    cr_assert_eq(test_strlen("Hello\n\0World!"), strlen("Hello\n\0World!"));
}