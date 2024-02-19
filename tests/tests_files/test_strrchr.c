/*
** EPITECH PROJECT, 2022
** MiniLibC test
** File description:
** test_strchr.c
*/

#include <criterion/criterion.h>
#include <stdio.h>

Test(strrchr, basic_strings)
{
    extern char *test_strrchr(const char *s, int c);

    cr_assert_str_eq(test_strrchr("Hello world!", 'H'), strrchr("Hello world!", 'H'));
    cr_assert_str_eq(test_strrchr("Hello world!", '!'), strrchr("Hello world!", '!'));
    cr_assert_str_eq(test_strrchr("Hello world!", 'o'), strrchr("Hello world!", 'o'));
    cr_assert_str_eq(test_strrchr("Hello world!", '\0'), strrchr("Hello world!", '\0'));
    cr_assert_eq(strrchr("", '1'), test_strrchr("", '1'));
    cr_assert_str_eq(strrchr("test", 's'), test_strrchr("test", 's'));
    cr_assert_str_eq(strrchr("01234512", '1'), test_strrchr("01234512", '1'));
    cr_assert_str_eq(strrchr("azare", 'a'), test_strrchr("azare", 'a'));
    cr_assert_eq(strrchr("tests", '\0'), test_strrchr("tests", '\0'));
    cr_assert_eq(strrchr("tests", -1), test_strrchr("tests", -1));
    cr_assert_eq(strrchr("aeropxcns", 'o'), test_strrchr("aeropxcns", 'o'));
    cr_assert_str_eq(strrchr("Tests", 'T'), test_strrchr("Tests", 'T'));
}