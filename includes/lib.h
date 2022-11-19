/*
** MY_LS PROJECT, 2022
** lib
** File description:
** lib.my_ls
*/

#ifndef LIB_H
    #define LIB_H
    #include <stdio.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include <sys/sysmacros.h>
    #include <time.h>
    #include <pwd.h>
    #include <grp.h>
    #include <stdint.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <errno.h>
    #include <dirent.h>
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int func_display_flag_l(int ac, char **av);
int func_display_flag_a(int ac, char **av);
void func_permissions(struct stat sb, const char *restrict pathname);
void func_type_case(struct stat sb, const char *restrict pathname);
void func_type_case2(struct stat sb, const char *restrict pathname);
void func_id(int ac, char **av, const char *restrict pathname);
void func_gid(int ac, char **av, const char *restrict pathname);
void func_find_date_time(char const *str);
void func_find_flag(int ac, char **av);
int no_flag(int ac, char **av);
int no_flag_directory(int ac, char **av);
int func_flag_l_basic(int ac, char **av);
int func_display_flag_l_basic(int ac, char **av, const char *restrict pathname);
int func_flag_l_directory(int ac, char **av);
int func_display_flag_l_directory(int ac, char **av,
                                const char *restrict pathname);
#endif //lib.h
