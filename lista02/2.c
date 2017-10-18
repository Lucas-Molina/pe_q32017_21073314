#include <stdio.h>
int main ()
{
float altura, largura, comprimento, volume;
printf("digite 3 numeros: ");
scanf("%f %f %f",&altura, &largura, &comprimento);

volume =(altura * largura * comprimento);
printf("O volume e: %.2f * %.2f * %.2f = %.2f",altura,largura,comprimento,volume);

return 0;
}
