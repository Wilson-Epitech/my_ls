/*
** MY_LS PROJECT, 2022
** flag -l directory
** File description:
** ls -l src/
*/

#include "../../../includes/lib.h"

int func_flag_l_directory(int ac, char **av)
{
    int i = 0;
    const char *restrict pathname = av[2];
    DIR *dir = opendir(av[2]);
    if (dir == NULL)
        return 84;
    struct dirent *file = readdir(dir);
    while (file != NULL) {
        if (file->d_name[0] != '.') {
        pathname = file->d_name;
        func_display_flag_l_directory(ac, av, pathname);
        }
        file = readdir(dir);
    }
    closedir(dir);
    return 0;
}
