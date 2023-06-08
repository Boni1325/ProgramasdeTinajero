#include <stdio.h>

int main (void)
{
    char c;
    printf("ENTER a single character:\n");
    scanf ("%c", &c);

    if ( (c >='a'  &&  c <= 'z') || (c >= 'A'  &&   c <= 'Z'))

          printf("It's an alphabetic character.\n");
      else if (c >='0' && c <= '9')
          printf("It's s digit.\n");
      else
          printf("It's a special character.\n");
    return 0;
}