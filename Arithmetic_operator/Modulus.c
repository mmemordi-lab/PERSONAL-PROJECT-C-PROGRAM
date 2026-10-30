
// C PROGRAMME USING MODULUS FOR USER INPUT
#include <stdio.h>

int main()
{

int FirstNumber;
int SecondNumber;
int MODULUS;


printf ("PROGRAM TO SHOW MODULUS \n\n");

printf (" Enter a FirstNumber: \n");
scanf("%d", &FirstNumber);
printf(" Enter a SecondNumber: \n ");
scanf("%d", &SecondNumber);    

MODULUS = FirstNumber % SecondNumber;

printf("=== FINAL RESULT ===\n");

printf("Modulos Result is %d\n", MODULUS);
getchar();
getchar();
    return 0;
}