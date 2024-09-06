#include <stdio.h>

enum Status { LOW = 25, MEDIUM = 50 , HIGH = 75 };
enum Semana { Seg = 1, Ter , Qua , Qui , Sex , Sab , Dom};

/*
ENUM é uma lista de numeros, cujos podemos dar nomes também
*/
int main() 
{
    enum Status resultado = MEDIUM;
    enum Semana dia = Ter;
    
    switch(resultado) 
    {
        case 25:
            printf("morto\n");
            break;
        case 50:
            printf("dormindo\n");
            break;
        case 75:
            printf("acordado\n");
            break;
    }
    
    switch(dia) 
    {
        case 1:
            printf("Segunda\n");
            break;
        case 2:
            printf("Terça\n");
            break;
        case 3:
            printf("Quarta\n");
            break;
        case 4:
            printf("Quinta\n");
            break;
        case 5:
            printf("Sexta\n");
            break;
        case 6:
            printf("Sabado\n");
            break;
        case 7:
            printf("Domingo\n");
            break;
    }
    return 0;
}
