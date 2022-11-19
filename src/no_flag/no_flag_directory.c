/*
** MY_LS PROJECT, 2022
** ./my_ls no flag
** File description:
** ./my_ls
*/

#include "../../includes/lib.h"

int no_flag_directory(int ac, char **av)
{
    int i = 0;
    DIR *dir = opendir(av[1]);
    if (dir == NULL) {
        exit(84);
    }
    if (dir == NULL)
        return 84;
    struct dirent *file = readdir(dir);
    while (file != NULL) {
        if (file->d_name[0] != '.') {
            my_putstr(file->d_name);
            my_putstr("  ");
        }
        file = readdir(dir);
    }
    my_putchar('\n');
    closedir(dir);
    return 0;
}
