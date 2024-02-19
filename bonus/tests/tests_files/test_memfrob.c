/*
** EPITECH PROJECT, 2022
** MiniLibC test
** File description:
** test_memfrob.c
*/
#define _GNU_SOURCE
#include <criterion/criterion.h>
#include <stdlib.h>
#include <string.h>

Test(memfrob, basic_memory)
{
    extern void *test_memfrob(void *s, size_t n);
    char *str = malloc(sizeof(char) * 13);

    memcpy(str, "aello World!\0", 13);
    cr_assert_eq(test_memfrob(str, 5), memfrob(str, 5));
    cr_assert_eq(test_memfrob(str,5), memfrob(str, 5));
    cr_assert_eq(test_memfrob(str, 50), memfrob(str, 50));
    cr_assert_eq(test_memfrob(str, 0), memfrob(str, 0));
}

Test(memfrob, advanced_memory)
{
    extern void *test_memfrob(void *s, size_t n);
    char *str = malloc(sizeof(char) * 13);

    memcpy(str, "a z eaze\0\0lo World!\0", 13);
    cr_assert_eq(test_memfrob(str, 5), memfrob(str, 5));
    cr_assert_eq(test_memfrob(str, 5), memfrob(str, 5));
    cr_assert_eq(test_memfrob(str, 5), memfrob(str, 5));
}