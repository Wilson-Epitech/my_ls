/*
** MY_LS PROJECT, 2022
** test
** File description:
** my_ls
*/

#include "includes/lib.h"

int main(int ac, char **av)
{
    int i = 0;
    if (ac == 1) {
        no_flag(ac, av);
        return 0;
    }
    if (ac == 2 && av[1][0] != '-') {
        no_flag_directory(ac, av);
    }
    if (av[1][0] == '-' && av[1][1] == 'l' && ac == 2) {
        func_flag_l_basic(ac, av);
    }
    if (av[1][0] == '-' && av[1][1] == 'l' && ac == 3) {
        func_flag_l_directory(ac, av);
    }
    func_find_flag(ac, av);
    return 0;
}
