#include <stdio.h>

int main() {
 char uA[11] = {'J', '0', 'G', 'J', 'A', 'K', 'A', 'R', 'T', 'A', '10'};
 int frekuensi[26] = {0}; // inisialisasi array dengan 0
 int i, max = 0;
 char karakter;

 for(i = 0; i < 10; i++) {
 if(uA[i] >= 'A' && uA[i] <= 'Z') {
 frekuensi[uA[i] - 'A']++;
 }
 }

 for(i = 0; i < 26; i++) {
 if(frekuensi[i] > max) {
 max = frekuensi[i];
 karakter = i + 'A';
 }
 }

 printf("%c %d\n", karakter, max);
 return 0;
}
