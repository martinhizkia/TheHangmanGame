#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include "hh.h"

int singleplayer(){
    srand(time(NULL));
    system("COLOR 70");
    char soal[100][100];
    char jawaban[100];
    char tebak;
    int nyawa = 5;
    int random = rand()%25;
    int selesai = 0;
    int hide[100];
    int count=0;


    FILE *fp = fopen("listkata.txt","r");
	int i=0;
	while(1){
		char r = (char)fgetc(fp);
		int k = 0;
		while (r!=44 && !feof(fp)){
			soal [i][k++]=r;
			r = (char)fgetc(fp);
		}
		soal[i][k]=0;
		if(feof(fp)){
			break;
		}
		i++;
	}
	fclose(fp);

	int panjang = strlen(soal[random]);

    int x;
    for( x=0;x<panjang;x++){
        jawaban[x] = soal[random][x];
    }

    for( x=0;x<panjang;++x){
        hide[x]=0;
    }

    while(nyawa>0 && !selesai){
        pajangan();
        printf("\n\n");
        fflush(stdin);
        tengah();
        int z;
         for( z=0;z<panjang;++z){
            if(hide[z]){
            printf("%c ",jawaban[z]);}
            if(hide[z]==0){
            printf("_ ");}}
        tengah();
        printf("\n");
        tengah();
        printf("Sisa Kesempatan Anda Tinggal %d\n",nyawa);
        tengah();
        scanf("%c",&tebak);
        system("cls");
        int k;
        for( k=0; k < panjang; ++k) {
            if (jawaban[k] == tebak) {
                hide[k] = 1;}}
        printf("\n\n");
        int y;
        for( y=0;y<panjang;y++){
             if(jawaban[y] == tebak){
                nyawa+=1;
                break;}}

        for( x=0;x<panjang;x++){
            if(jawaban[x] != tebak){
                nyawa-=1;
                break;}}

        selesai = 1;
        for( x=0;x<panjang;x++){
            if(!hide[x]){
            selesai = 0;}}
            showHangman(nyawa);}

tengah();
selesai == 1 ?menang() : kalah();


tengah();
printf("Kata yang sebenarnya adalah: ");
for(x=0;x<panjang;x++){
    printf("%c", jawaban[x]);}
printf("\n\n");
tengah();
system("pause");

    }
