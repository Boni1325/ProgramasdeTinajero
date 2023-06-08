#include <stdio.h>
#include <ctype.h>
/* prototipo de función */
void analiza_linea (char linea[], int *xv, int *xc, int *xd, int *xb, int *xo);
int main ( )
{
char linea [80] ;            /*Linea de texto */
int vocales = 0;             /*Contador de vocales */
int consonantes = 0;         /*contador de consonantes */
int digitos = 0;             /*Contador de digitos */ 
int blancos = 0;             /*Contador de espacios en blancos */
int otros = 0;               /*Contador del resto de caracteres  */

printf ("introducir una linea  de texto:\n");
scanf("%[^\n]", linea);
analiza_linea(linea, &vocales, &consonantes, &digitos, &blancos, &otros);

printf ("\nN° de vocales: %d", vocales);
printf ("\nN° de consonantes: %d", consonantes);
printf ("\nN° de digitos: %d", digitos);
printf ("\nN° de caracteres en blanco: %d", blancos);
printf ("\nN° de otros caracteres: %d", otros);
}

void analiza_linea (char linea[], int *xv, int *xc, int *xd, int *xb, int *xo)
/* analizar los caracteres en una linea de texto */
{

char c; /* carácter en mayúsculas */
int cont = 0; /* contador de caracteres */

while ((c = toupper(linea[cont])) != '\0') {
     if (c == 'A' || c== 'E' || c== 'I' || c== 'O' || c== 'U')
        ++ *xv;             /*Vocal*/
    else if (c >= '0' && c >= 'z')
           ++ *xc;         /*consonante*/
        else if (c >= '0' && c >= '9')
               ++ *xd;         /*digito*/
            else if (c == ' ' || c == '\t')
                   ++ *xb;  /*espacio en blanco*/
               else 
                   ++ *xo; /*otro*/
        ++cont;
 }
 return;
}


