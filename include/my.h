/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** this file contains all of
** prototypes for the lib.
** created and edited by Antoine Orange.
** All rights reserved
*/

#ifndef MY_H_
    #define MY_H_

    #include <unistd.h>
    #include <stdlib.h>
    #include <stdarg.h>
    #include <stdio.h>
    #include <dirent.h>
    #include <sys/stat.h>
    #include <sys/sysmacros.h>
    #include <time.h>
    #include <fcntl.h>

int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_is_prime2(int nb);
int my_find_prime_sup(int nb);
int limits(int long a);
int my_getnbr(char const *str);
void my_putchar2(char c);
int my_isneg(int n);
int my_is_prime(int nb);
void my_putchar(char c);
void my_putchar3(char c);
int my_put_nbr(int nb);
void my_putchar4(char c);
int my_putstr(char const *str);
int my_strlen_rev(char const *str);
void my_swap2(char *a, char *b);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_swap_array(int *a, int *b);
void my_sort_int_array(int *array, int size);
char char_up_case(char a);
char char_low_case(char a);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strlencat(char const *str);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
int my_strlen_cpy(char const *str);
char *my_strncpy(char *dest, char const *src, int n);
int my_strncmp2(char const  *s1, char const *s2, int n);
int my_strlen_strstr(char const *str);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
char *my_strdup(char const *src);
char **my_str_to_word_array(char const *str);
int my_show_word_array(char *const *tab);
void my_pf_putchar(char c, int *count);
int my_pf_put_nbr(int nb, int *count);
int my_pf_putstr(char const *str, int *count);
int my_putnbr_base(int nbr, char const *base);
void my_pf_put_float(double nb, int p, int *count);
int my_putpointer_base_hexa(unsigned long long nbr,
    char const *base, int *count);
int my_pf_putnbr_base(int nbr, char const *base, int *count);
void my_put_float(double nb, int p);
void my_pf_put_float_pzero(double number, int *count);
void flag_c(va_list disp_params, int *count);
void flag_s(va_list disp_params, int *count);
void flag_pourcentage(va_list disp_params __attribute_maybe_unused__,
    int *count);
void flag_i(va_list disp_params, int *count);
void flag_d(va_list disp_params, int *count);
void flag_f(va_list disp_params, int precision, int *count);
void flag_f_upper(va_list disp_params, int precision, int *count);
void flag_n(va_list disp_params, int *count);
void flag_o(va_list disp_params, int *count);
void flag_u(va_list disp_params, int *count);
void flag_x(va_list disp_params, int *count);
void flag_x_upper(va_list disp_params, int *count);
void flag_p(va_list disp_params, int *count);
void flag_e(va_list disp_params, int p, int *count);
void flag_upper_e(va_list disp_params, int p, int *count);
int verif_pf(const char *format, int i, va_list disp_params, int *count);
int my_printf(const char *format, ...);
int verif_if(const char *format, int i, va_list disp_params, int *count);
int mini_printf(const char *format, ...);
int my_isnum(char c);
typedef struct function_struct {
    char flag;
    void (*function)();
} flag_functions;

static flag_functions const list_flags[] = {
    {'c', flag_c},
    {'s', flag_s},
    {'%', flag_pourcentage},
    {'i', flag_i},
    {'d', flag_d},
    {'n', flag_n},
    {'o', flag_o},
    {'u', flag_u},
    {'x', flag_x},
    {'X', flag_x_upper},
    {'p', flag_p},
    {'e', flag_e},
    {'E', flag_upper_e},
    {'f', flag_f},
    {'F', flag_f_upper}
};

#endif
