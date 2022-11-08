#include <stdio.h>
void Biodata(int tahunLahir,char Nama[20] ,char asal[15]){
    int tahun_sekarang = 2020;
     printf("Perkenalkan Nama Saya : %s\n ",Nama);
     printf("Umur Saya  : %d\n",tahun_sekarang-tahunLahir);
     printf("Saya Adalah Angkatan : 2020\n");
     printf("Asal Saya Dari : %s",asal);
}
int main() {
  int tahunLahir;
  char Nama[20],asal[15];
  scanf(" %d",&tahunLahir);
  scanf("%s",&Nama);
  scanf("%s",&asal);
  Biodata(tahunLahir,Nama,asal);
  return 0;
}
