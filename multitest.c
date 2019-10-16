#include <stdio.h>
#include <string.h>
#include <windows.h>


int multiplayer(){
    int key = 0;
    system("COLOR 70");
    srand(time(NULL));
    int random1 = 0;
    int random2 = 0;
    char soal[100][100];
    char soal1[10];
    char soal2[10];
    int poin1 = 0;
    int poin2 = 0;


    FILE *fp = fopen("listkata.txt","r");
	int i=0;
	while(1){
		char r = (char)fgetc(fp);
		int k = 0;
		while (r!=44 && !feof(fp)){
			soal[i][k++]=r;
			r = (char)fgetc(fp);}

		soal[i][k]=0;
		if(feof(fp)){
			break;
		}
		i++;
	}
	fclose(fp);

    int x;
    random1 = rand()%25;
    int panjang1 = strlen(soal[random1]);
    for( x=0;x<panjang1;x++){
        soal1[x] = soal[random1][x];}
    int panjang2 = 0;

    do{
        random2 = rand()%25;
        panjang2 = strlen(soal[random2]);
    }
    while (random2==random1 || panjang2!=panjang1);

    for( x=0;x<panjang1;x++){
        soal2[x] = soal[random2][x];
    }


    char jawaban[100];
    char tebak;
    int nyawa = 5;
    int selesai = 0;
    int hide[100];
    int count=0;
    tengah();
    pajangan();
    printf("\n");
    tengah();
    printf("\n");
    tengah();
    pajangan();


    for(int x=0;x<panjang1;++x){
        hide[x]=0;
    }

    while(nyawa>0 && !selesai){
        tengah();
        printf("PLAYER 1\n\n");
        fflush(stdin);
        tengah();
         for(int z=0;z<panjang1;++z){
            if(hide[z]){
            printf("%c ",soal1[z]);}
            if(hide[z]==0){
            printf("_ ");}}
        tengah();
        printf("\n");
        tengah();
        printf("Kesempatan Anda Tinggal %d\n",nyawa);
        tengah();
        scanf("%c",&tebak);
        if (tebak=='-'){
            tengah();
            for(int x=0;x<panjang1;x++){
                printf("%c",soal1[x]);
            }
        nyawa+=1;
        printf("\n");
        tengah();
        system("pause");
        }
        system("cls");
        for(int k=0; k < panjang1; ++k) {
            if (soal1[k] == tebak) {
                hide[k] = 1;}}
        printf("\n\n");
        for(int y=0;y<panjang1;y++){
             if(soal1[y] == tebak){
                nyawa +=1;
                poin1 +=nyawa*100;
                break;}}

        for(int x=0;x<panjang1;x++){
            if(soal1[x] != tebak){
                nyawa -=1;
                poin1 -=nyawa*50;
                break;}}
        showHangman(nyawa);
        selesai = 1;
        for(int x=0;x<panjang1;x++){
            if(!hide[x]){
                selesai = 0;}}
    }
    tengah();
  //  selesai == 1 ?menang() : kalah();

    printf("\n\n");
    tengah();
    printf("Poin Player1 = %d\n ",poin1);
    tengah();
    printf("Kata yang sebenarnya adalah: ");
    for(int x=0;x<panjang1;x++){
        printf("%c", soal1[x]);}

    printf("\n");
    system("PAUSE");
    system("cls");
    tengah();
    pajangan();

    for(int x=0;x<panjang1;++x){
        hide[x]=0;
    }
    selesai = 0;
    nyawa = 5;

    while(nyawa>0 && !selesai){
        tengah();
        printf("PLAYER 2\n");
        fflush(stdin);
        tengah();
         for(int z=0;z<panjang2;++z){
            if(hide[z]){
            printf("%c ",soal2[z]);}
            if(hide[z]==0){
            printf("_ ");}}
        tengah();
        printf("\n");
        tengah();
        printf("Kesempatan Anda Tinggal %d\n",nyawa);
        tengah();
        scanf("%c",&tebak);
          if (tebak=='-'){
            tengah();
            for(int x=0;x<panjang1;x++){
                printf("%c",soal2[x]);
            }
        nyawa+=1;
        printf("\n");
        tengah();
        system("pause");
        }
        system("cls");
        for(int k=0; k < panjang2; ++k) {
            if (soal2[k] == tebak) {
                hide[k] = 1;}}
        printf("\n\n");
        for(int y=0;y<panjang1;y++){
             if(soal2[y] == tebak){
                nyawa+=1;
                poin2 += nyawa*100;
                break;}}

        for(int x=0;x<panjang1;x++){
            if(soal2[x] != tebak){
                nyawa-=1;
                poin2 -= nyawa*50;
                break;}}
        showHangman(nyawa);
        selesai = 1;
        for(int x=0;x<panjang2;x++){
            if(!hide[x]){
                selesai = 0;}}}

 //   selesai == 1 ?menang() : kalah();

    tengah();
    printf("Poin Player2 = %d\n", poin2);
    tengah();
    printf("Kata yang sebenarnya adalah: ");
    for(int x=0;x<panjang1;x++){
    printf("%c", soal2[x]);


    }
printf("\n\n");
tengah();
if(poin1>poin2){
    printf(" PLAYER 1 WIN !!!!");
}
else if (poin2>poin1){
    printf("PLAYER 2 WIN !!!!");
}
else if (poin1 == poin2){
    printf("DRAW !!!!");
}




}


