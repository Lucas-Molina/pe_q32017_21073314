#include <stdio.h>
#include <math.h>

main ()
{
float n1,n2,resultado;
char operador;

printf("\n Digite o primeiro numero:");
scanf ("%f",&n1);
printf("\n Digite o segundo numero:");
scanf ("%f",&n2);
printf("\n Digite o operador:");
scanf ("%s",&operador);

if (operador=='+') {
resultado=n1+n2;
printf ("\n O resultado e: %f",resultado);

}
else
if (operador=='-') {
resultado=n1-n2;
printf ("\n O resultado e: %f",resultado);
}

else
if (operador=='/') {
resultado=n1/n2;
printf ("\n O resultado e: %f",resultado);
}

else
if (operador=='*') {
resultado=n1*n2;
printf ("\n O resultado e: %.2f",resultado);
}


}
