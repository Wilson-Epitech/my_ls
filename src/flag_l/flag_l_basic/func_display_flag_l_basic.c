/*
** MY_LS PROJECT, 2022
** func_display
** File description:
** my_ls display
*/

#include "../../../includes/lib.h"

void my_putchar(char c);

int func_display_flag_l_basic(int ac, char **av, const char *restrict pathname)
{
    struct stat sb;
        stat(pathname, &sb);
    char const *str = ctime(&sb.st_ctime);
    func_type_case(sb, pathname);
    func_type_case2(sb, pathname);
    func_permissions(sb, pathname);
    my_putchar(' ');
    my_put_nbr(sb.st_nlink); my_putchar(' ');
    func_id(ac, av, pathname);
    func_gid(ac, av, pathname);
    my_put_nbr(sb.st_size); my_putchar(' ');
    func_find_date_time(str); my_putchar(' ');
    my_putstr(pathname);
    my_putchar('\n');
    return 0;
}
