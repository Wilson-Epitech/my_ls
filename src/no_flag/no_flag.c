/*
** MY_LS PROJECT, 2022
** ./my_ls no flag
** File description:
** ./my_ls
*/

#include "../../includes/lib.h"

int no_flag(int ac, char **av)
{
    int i = 0;
    DIR *dir = opendir(".");
    if (dir == NULL)
        return 84;
    struct dirent *file = readdir(dir);
    while (file != NULL) {
        if (file->d_name[0] != '.') {
            my_putstr(file->d_name);
            my_putchar('\n');
        }
        file = readdir(dir);
    }
    closedir(dir);
    return 0;
}
