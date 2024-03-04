#include <stdio.h>

int transaksi;
int nominal;
int jumlah = 0;

int main(){
    printf("masukan jumlah transaksi:\n");
    scanf("%d", &transaksi);
    if(transaksi<=0){
        printf("tidak ada transaksi hari ini.");
    }else{
        printf("masukan nominalnya: \n");
        for(int i=0;i<transaksi;i++){
            scanf("%d",&nominal);
            jumlah += nominal;
        }
        printf("total pengeuaran anda hari ini %d\n",jumlah);
    }
    return 0;
}
