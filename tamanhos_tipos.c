#include <stdio.h>

int main(){
    unsigned char uchar;
    signed char schar; 
    double b_double;
    long double long_double;
    unsigned int u_int;
    signed int s_int;
    short b_short;
    long b_long;
    long long b_long2;
    void b_void();
    /*
    signed = todos os numeros positivos e negativos (padrao)
    unsigned = remove a quantidade de numeros negativos e adiciona na capacidade dos positivos
    */


    /* Tamanho do tipo de dado
       %lu: usado para valores 'unsigned long'
       %zu: usado para valores 'size_t' (unsigned long)
    */ 
    printf("Tamanho do uchar    : %zu bytes\n", sizeof(uchar));
    printf("Tamanho do schar    : %zu bytes\n", sizeof(schar));
    printf("Tamanho do double   : %zu bytes\n", sizeof(b_double));
    printf("Tamanho do ldouble  : %zu bytes\n", sizeof(long_double));
    printf("Tamanho do uint     : %zu bytes\n", sizeof(u_int));
    printf("Tamanho do sint     : %zu bytes\n", sizeof(s_int));
    printf("Tamanho do short    : %zu bytes\n", sizeof(b_short));
    printf("Tamanho do long     : %zu bytes\n", sizeof(b_long));
    printf("Tamanho do long long: %zu bytes\n", sizeof(b_long2));
    printf("Tamanho do void     : %zu bytes\n", sizeof(b_void()));
    printf("Tamanho do size_t   : %zu bytes\n", sizeof(size_t));

    return 0;
}
