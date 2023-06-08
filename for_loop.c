 #include <stdio.h>

 int main(void)
 {

    int n, triangularNumer;
    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf(" n Sum from 1 to n\n");
    printf("--- ------------------------\n");

    triangularNumer = 0;

    for(n = 1; n<= 10; ++n)  {
        triangularNumer += n;
        printf(" %i                    %i\n", n,
        triangularNumer);
    }

    return 0;
 }