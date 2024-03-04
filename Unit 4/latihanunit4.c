#include <stdio.h>

int sisi;
void keliling(int x ){
    int hasil = 4 * x;
    printf("kelilingnya adalah %d\n",hasil);
}
void luas (int x){
    int hasil = x * x;
    printf("luasnya adalah%d\n",hasil);
}
void volume (int x){
    int hasil = x * x * x;
    printf("volumenya adalah %d\n",hasil);
}
int main (){
    printf("masukan panjang sisi:\n");
    scanf("%d", &sisi);
    printf("hasilnya adalah: \n\n");

    keliling(sisi);
    luas(sisi);
    volume(sisi);
}