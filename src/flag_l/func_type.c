/*
** MY_LS PROJECT, 2022
** func_type.c
** File description:
** find type
*/

#include "../../includes/lib.h"

void func_type_case(struct stat sb, const char *restrict pathname)
{
    stat(pathname, &sb);
    switch (sb.st_mode & S_IFMT) {
    case S_IFBLK:
        my_putstr("b");
        break;
    case S_IFCHR:
        my_putstr("c");
        break;
    case S_IFDIR:
        my_putstr("d");
        break;
    }
}

void func_type_case2(struct stat sb, const char *restrict pathname)
{
    stat(pathname, &sb);
    switch (sb.st_mode & S_IFMT) {
    case S_IFIFO:
        my_putstr("p");
        break;
    case S_IFLNK:
        my_putstr("l");
        break;
    case S_IFREG:
        my_putstr("-");
        break;
    case S_IFSOCK:
        my_putstr("s");
        break;
    default:
        my_putstr("u");
        break;
    }
}
