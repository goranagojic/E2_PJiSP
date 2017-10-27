/*
*	Napisati program koji učitava matricu A i
*	razmenjuje vrstu koja sadrži element najveće
*	vrednosti i vrstu koja sadrži element najmanje
*	vrednosti.
*/

#include <stdio.h>
#define MAX_N 10
#define MAX_M 10

int main() {

	int n, m; //Dimenzije matrice
	int A[MAX_N][MAX_M]; //Matrica maksimalnih dimenzija MAX_N x MAX_M
	int i, j;
	int min, max; //Minimalni i maksimalni element
	int minV, maxV; //Redni broj vrsta koje sadrze min i max element

	do {
		printf("Unesite broj vrsta matrice [n<10]: ");
		scanf("%d", &n);
	} while (n < 0 || n > 10);

	do {
		printf("Unesite broj kolona matrice [m<10]: ");
		scanf("%d", &m);
	} while (m < 0 || m > 10);

	//Učitavanje matrice
	printf("Unesite elemente matrice: \n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf("A[%d][%d] = ", i, j);
			scanf("%d", &A[i][j]);
		}
	}

	// Ispisivanje matrice, cisto radi lakse preglednosti
    for(i = 0;i < n;i++) {
		for(j = 0;j < n;j++) {
			printf("%d\t", A[i][j]);
		}
	printf("\n");
    }


	//Nalaženje minimalnog elementa
	min = A[0][0]; //Proglasimo prvi element za minimum
	minV = 0; //Proglasimo prvu vrstu za vrstu koja ima minimum
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (A[i][j] < min) {
				min = A[i][j]; //Proglasenje novog minimuma
				minV = i; //Proglasenje nove vrste koja sadrzi minimum
			}
		}
	}

	max = A[0][0]; //Proglasimo prvi element za maksimum
	maxV = 0; //Proglasimo prvu vrstu za maksimum
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (A[i][j] > max) {
				max = A[i][j]; //Proglasenje novog maksimuma
				maxV = i; //Proglasenje nove vrste koja sadrzi maksimum
			}
		}
	}

	//Zamenimo mesta maxV i minV vrste
	for (j = 0; j < m; j++) {
		int t = A[maxV][j]; //Pomocna promenljiva koja cuva vrednost
		A[maxV][j] = A[minV][j];
		A[minV][j] = t;
	}

	//Ispis matrice
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}

	return 0;
}
