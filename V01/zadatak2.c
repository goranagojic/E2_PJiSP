/*
Izračunati površinu trougla upotrebom Heronovog obrasca, 
vrednosti stranica uneti sa tastature. Na izlazu štampati 
vrednost površine trougla na dve decimale.
*/

#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c;
    double s,P;
    
	printf("Unesite vrednost stranice a: ");
	scanf("%d", &a);
	printf("Unesite vrednost stranice b: ");
	scanf("%d", &b);
	printf("Unesite vrednost stranice c: ");
	scanf("%d", &c);

    s = (a + b + c)/2;
    P = sqrt(s * (s-a) * (s-b) * (s-c));
    
    printf("P = %.2d\n",P);
    
    return 0;
}
