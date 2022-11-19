/*
** MY_LS PROJECT, 2022
** func_id_gid
** File description:
** find id gid
*/

#include "../../includes/lib.h"

void func_id(int ac, char **av, const char *restrict pathname)
{
    struct stat sb;
    struct passwd *result;

    stat(pathname, &sb);
    result = getpwuid(sb.st_uid);
    my_putstr(result->pw_name);
    my_putchar(' ');
}

void func_gid(int ac, char **av, const char *restrict pathname)
{

    struct stat sb;
    struct passwd *result2;

    stat(pathname, &sb);
    result2 = getpwuid(sb.st_gid);
    my_putstr(result2->pw_name);
    my_putchar(' ');
}
