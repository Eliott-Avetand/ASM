/*
** EPITECH PROJECT, 2022
** MiniLibC test
** File description:
** test_strcasecmp.c
*/

#include <criterion/criterion.h>
#include <stdio.h>

Test(strcasecmp, basic_strings)
{
    extern int test_strcasecmp(const char *s1, const char *s2);
}