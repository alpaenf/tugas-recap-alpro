#include <stdio.h> 

int jumlah;
int elemen;

int main (){
    printf("masukan jumlah elemen array:\n");
    scanf("%d", &elemen);
    
    int array[elemen];
    printf("masukan value array:\n");
    for (int i=0;i<elemen;i++){
        scanf("%d",&array[i]);
    }
    for (int i=0;i<elemen;i++){
        jumlah += array[i];
    }
    printf("totalnya adalah: %d\n",jumlah);
}