/*
** EPITECH PROJECT, 2022
** MiniLibC test
** File description:
** test_strstr.c
*/

#include <criterion/criterion.h>
#include <stdio.h>

Test(strstr, Simple_test)
{
    char *test_strstr(const char *haystack, const char *needle);
	char *s1 = strdup("Hello world!");
	char *s2 = strdup("o w");
    char *str = "tests";

	cr_assert_str_eq(test_strstr(s1, s2), strstr(s1, s2));
	cr_assert_eq(test_strstr(s2, s1), strstr(s2, s1));
	cr_assert_str_eq(test_strstr(s2, s2), strstr(s2, s2));
    cr_assert_str_eq(test_strstr("research", "re"), strstr("research", "re"));
    cr_assert_eq(test_strstr("research", "art"), strstr("research", "art"));
    cr_assert_str_eq(test_strstr(str, "test"), strstr(str, "test"));
    cr_assert_str_eq(test_strstr(str, "s"), strstr(str, "s"));
    cr_assert_str_eq(test_strstr("aze", "a"), strstr("aze", "a"));
    cr_assert_str_eq(test_strstr("aze", "\0"), strstr("aze", "\0"));
}

Test(strstr, Empty_string)
{
    char *test_strstr(const char *haystack, const char *needle);
	char *s1 = strdup("");
	char *s2 = strdup("o w");

	cr_assert_eq(test_strstr(s1, s2), strstr(s1, s2));
	cr_assert_str_eq(test_strstr(s2, s1), strstr(s2, s1));
	cr_assert_str_eq(test_strstr(s1, s1), strstr(s1, s1));
}

Test(strstr, Both_empty_string)
{
    char *test_strstr(const char *haystack, const char *needle);
	char *str1 = strdup("");
	char *str2 = strdup("");

	cr_assert_str_eq(test_strstr(str1, str2), strstr(str1, str2));
}

Test(strstr, Same_string)
{
    char *test_strstr(const char *haystack, const char *needle);
	char *s1 = strdup("Hello world!");
	char *s2 = strdup("Hello world!");

	cr_assert_str_eq(test_strstr(s1, s2), strstr(s1, s2));
	cr_assert_str_eq(test_strstr(s2, s2), strstr(s2, s2));
}