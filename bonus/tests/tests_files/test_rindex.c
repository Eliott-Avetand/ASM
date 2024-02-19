/*
** EPITECH PROJECT, 2022
** MiniLibC test
** File description:
** test_rindex.c
*/

#include <criterion/criterion.h>
#include <stdio.h>

Test(rindex, basic_strings)
{
    extern char *test_rindex(const char *s, int c);

    cr_assert_str_eq(test_rindex("Hello world!", 'H'), rindex("Hello world!", 'H'));
    cr_assert_str_eq(test_rindex("Hello world!", '!'), rindex("Hello world!", '!'));
    cr_assert_str_eq(test_rindex("Hello world!", 'o'), rindex("Hello world!", 'o'));
    cr_assert_str_eq(test_rindex("Hello world!", '\0'), rindex("Hello world!", '\0'));
    cr_assert_eq(rindex("", '1'), test_rindex("", '1'));
    cr_assert_str_eq(rindex("test", 's'), test_rindex("test", 's'));
    cr_assert_str_eq(rindex("01234512", '1'), test_rindex("01234512", '1'));
    cr_assert_str_eq(rindex("azare", 'a'), test_rindex("azare", 'a'));
    cr_assert_eq(rindex("tests", '\0'), test_rindex("tests", '\0'));
    cr_assert_eq(rindex("tests", -1), test_rindex("tests", -1));
    cr_assert_eq(rindex("aeropxcns", 'o'), test_rindex("aeropxcns", 'o'));
    cr_assert_str_eq(rindex("Tests", 'T'), test_rindex("Tests", 'T'));
}