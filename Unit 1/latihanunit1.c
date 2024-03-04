#include <stdio.h>

int s1,s2,s3;
int v1,v2,v3;
int t1,t2,t3;

int main (){
    printf("masukan jarak\n");
    scanf("%d",&s1);
    printf("masukan waktu\n");
    scanf("%d",&t1);
    printf("masukan kecepatan\n");
    scanf("%d",&v1);
    printf("masukan waktu\n");
    scanf("%d",&t2);
    printf("masukan jarak\n");
    scanf("%d",&s2);
    printf("masukan kecepatan\n");
    scanf("%d",&v2);

    float v3 = (float)s1/t1;
    float s3 = (float)v1*t2;
    float t3 = (float)s2/v2;

    printf("hasil perhitungan kecepatan adalah\n");
    printf("%.2f\n",v3);
    printf("hasil perhitungan jarak adalah\n");
    printf("%.2f\n",s3);
    printf("hasil perhitungan waktu adalah\n");
    printf("%.2f\n",t3);

    return 0;

}
