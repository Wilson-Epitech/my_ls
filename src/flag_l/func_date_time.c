/*
** MY_LS PROJECT, 2022
** find date tame
** File description:
** date_time.c
*/

#include "../../includes/lib.h"

void func_find_date_time(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (i >= 4 && i <= 15) {
            my_putchar(str[i]);
        }
        i++;
    }
}
