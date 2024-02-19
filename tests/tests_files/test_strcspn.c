/*
** EPITECH PROJECT, 2022
** MiniLibC test
** File description:
** test_strcspn.c
*/

#include <criterion/criterion.h>
#include <stdio.h>

Test(strcspn, basic_strings)
{
    extern size_t test_strcspn(const char *s, const char *reject);
    char *test = "iAmATest";

    cr_assert_eq(test_strcspn("Hello world!", "t"), strcspn("Hello world!", "t"));
    cr_assert_eq(test_strcspn("Hello world!", "o"), strcspn("Hello world!", "o"));
    cr_assert_eq(test_strcspn("Hello world!", "o a"), strcspn("Hello world!", "o a"));
    cr_assert_eq(test_strcspn(test, "ize"), strcspn(test, "ize"));
    cr_assert_eq(test_strcspn(test, "Amx"), strcspn(test, "Amx"));
    cr_assert_eq(test_strcspn(test, "gfdt"), strcspn(test, "gfdt"));
    cr_assert_eq(test_strcspn("aze", "z"), strcspn("aze", "z"));
    cr_assert_eq(test_strcspn("tests", ""), strcspn("tests", ""));
}