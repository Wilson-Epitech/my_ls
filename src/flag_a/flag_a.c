/*
** MY_LS PROJECT, 2022
** ./my_ls no flag
** File description:
** ./my_ls
*/

#include "../../includes/lib.h"

int func_display_flag_a(int ac, char **av)
{
    int i = 0;
    DIR *dir = opendir(".");
    if (dir == NULL)
        return 84;
    struct dirent *file = readdir(dir);
    while (file != NULL) {
        my_putstr(file->d_name);
        my_putchar('\n');
        file = readdir(dir);
    }
    closedir(dir);
    return 0;
}
