/*
** MY_LS PROJECT, 2022
** find flag ls
** File description:
** func_find_flag
*/

#include "../includes/lib.h"

void func_find_flag(int ac, char **av)
{
    const char *flag = av[1];
    int i = 0;

    while (flag[i] != '\0') {
        if (flag[i] == '-') {
            switch (flag[i + 1]) {
            case 'l':
                func_display_flag_l(ac, av);
                break;
            case 'a':
                func_display_flag_a(ac, av);
                break;
            }
            i++;
        }
        i++;
    }
}
