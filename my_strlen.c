/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** Task03
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (*str != '\0') {
        i++;
        str++;
    }
    return (i);
}
