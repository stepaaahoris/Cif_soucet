#include <stdio.h>
// Ciferný součet pomocí smyčky while
int cif_soucet(int x) {
	int y, vysledek = 0;
	while (x > 0) {
		y = x % 10;
		vysledek = vysledek + y;
		x = x / 10;
	}
	return vysledek;
}
// Vypsání výsledku
int main() {
	printf("cif soucet je %d", cif_soucet(573));
}