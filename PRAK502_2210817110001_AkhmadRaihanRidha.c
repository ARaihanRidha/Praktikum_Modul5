#include <stdio.h>
#include <math.h>
int hitung(int nilai1, int nilai2){
   return nilai1 - nilai2;
  
}
int mutlak(int angka){
   return abs(angka);
}
int main(void)
{ 
 int a,b,x,y,Hasil;
 scanf("%i",&a);
 scanf("%i",&x);
 scanf("%i",&b);
 scanf("%i",&y);
 Hasil = hitung(a,b) + hitung(x,y);
 printf("%i",mutlak(Hasil));
 return 0;
}