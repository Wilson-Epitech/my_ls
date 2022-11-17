/*
** MY_LS PROJECT, 2022
** perm
** File description:
** -rwx-rw-r.
*/

#include "../../includes/lib.h"

void func_permissions(struct stat sb, const char *restrict pathname)
{
    stat(pathname, &sb);
    (sb.st_mode & S_IRUSR) ? my_putchar('r') : my_putchar('-');
    (sb.st_mode & S_IWUSR) ? my_putchar('w') : my_putchar('-');
    (sb.st_mode & S_IXUSR) ? my_putchar('x') : my_putchar('-');
    (sb.st_mode & S_IRGRP) ? my_putchar('r') : my_putchar('-');
    (sb.st_mode & S_IWGRP) ? my_putchar('w') : my_putchar('-');
    (sb.st_mode & S_IXGRP) ? my_putchar('x') : my_putchar('-');
    (sb.st_mode & S_IROTH) ? my_putchar('r') : my_putchar('-');
    (sb.st_mode & S_IWOTH) ? my_putchar('w') : my_putchar('-');
    (sb.st_mode & S_IXOTH) ? my_putchar('x') : my_putchar('-');
    my_putchar('.');
}
