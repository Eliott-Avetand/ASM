/*
** EPITECH PROJECT, 2022
** MiniLibC test
** File description:
** test_memcpy.c
*/

#include <criterion/criterion.h>
#include <stdlib.h>

Test(memcpy, basic_memory)
{
    extern void *test_memcpy(void *dest, const void *src, size_t n);
    char *dest = malloc(sizeof(char) * 13);
    char *src = malloc(sizeof(char) * 6);

    memcpy(dest, "Hello World!\0", 13);
    memcpy(src, "test\0", 6);
    cr_assert_eq(test_memcpy(dest, src, 5), memcpy(dest, src, 5));
    memcpy(src, "a", 13);
    cr_assert_eq(test_memcpy(dest, src, 5), memcpy(dest, src, 5));
    cr_assert_eq(test_memcpy(dest, src, 50), memcpy(dest, src, 50));
    cr_assert_eq(test_memcpy(dest, src, 0), memcpy(dest, src, 0));
}

Test(memcpy, advanced_memory)
{
    extern void *test_memcpy(void *dest, const void *src, size_t n);
    char *dest = malloc(sizeof(char) * 13);
    char *src = malloc(sizeof(char) * 6);

    memcpy(dest, "Hello World!\0", 13);
    memcpy(src, "\0", 6);
    cr_assert_eq(test_memcpy(dest, src, 5), memcpy(dest, src, 5));
}