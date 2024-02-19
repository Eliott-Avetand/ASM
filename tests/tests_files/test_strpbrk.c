/*
** EPITECH PROJECT, 2022
** MiniLibC test
** File description:
** test_strpbrk.c
*/

#include <criterion/criterion.h>
#include <stdio.h>

Test(strpbrk, basic_strings)
{
    extern char *test_strpbrk(const char *s, const char *accept);
    char *test = "iAmATest";

    cr_assert_eq(test_strpbrk("Hello world!o atest", "o a"), strpbrk("Hello world!o atest", "o a"));
    cr_assert_eq(test_strpbrk("Hello world!o atest", "z a"), strpbrk("Hello world!o atest", "z a"));
    cr_assert_eq(test_strpbrk("Hello\nworld!o atest", "z\na"), strpbrk("Hello\nworld!o atest", "z\na"));
    cr_assert_eq(test_strpbrk("Hello\nworld!o atest", "z"), strpbrk("Hello\nworld!o atest", "z"));
    cr_assert_eq(test_strpbrk("zae", "aze"), strpbrk("zae", "aze"));
    cr_assert_eq(test_strpbrk(" ", "aze"), strpbrk(" ", "aze"));
    cr_assert_eq(test_strpbrk(" ", "aze "), strpbrk(" ", "aze "));
    cr_assert_eq(test_strpbrk(test, "dao"), strpbrk(test, "dao"));
    cr_assert_str_eq(test_strpbrk(test, "Amx"), strpbrk(test, "Amx"));
    cr_assert_str_eq(test_strpbrk(test, "gfdt"), strpbrk(test, "gfdt"));
    cr_assert_str_eq(test_strpbrk("aze", "z"), strpbrk("aze", "z"));
    cr_assert_eq(test_strpbrk("tests", ""), strpbrk("tests", ""));
}