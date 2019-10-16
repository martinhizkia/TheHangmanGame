#include <stdio.h>
#include <windows.h>
#include "SingleHangman.c"
#include "Multitest.c"


int main(){

system("cls");
fflush(stdin);
system("COLOR 70");
 gambar();
 menu();

}

void gambar(){

    int i,j;
    int key=0;
    int posisi=1;
    boxBorder(35,0,55,1,a,1,1);//tiang horizontal
    boxBorder(33,0,2,16,a,1,1);//tiang vertikal
    //boxBorder(65,1,1,4,22,1,1);//tiang kecil
    boxBorder(85,5,7,3,b,4,1);//kepala
    boxFill(87,8,3,6,b);//badan
    boxBorder(82,9,13,1,b,1,1);//tangan
    boxBorder(83,14,11,1,b,1,1);//tangan//kaki atas
    boxBorder(82,14,2,2,b,1,1);//kaki kiri
    boxBorder(93,14,2,2,b,1,1);//kaki kanan
    //boxBorder(35,19,24,1,22,1,1);//lantai
    boxFill(88,1,2,4,a);//tiang vertikal //88,1,3,5,22,1,1
// boxBorder(45,1,20,1,22,1,1);//tiang horizontal
  //  boxBorder(45,1,1,20,22,1,1);//tiang vertikal

    boxBorder(37,4,8,1,a,1,1);//hri
    boxBorder(37,2,2,5,a,1,1);//ver
    boxBorder(45,2,2,5,a,1,1);// H

    boxBorder(48,4,2,3,a,1,1);
    boxBorder(48,2,8,1,a,1,1);
    boxBorder(48,4,8,1,a,1,1);
    boxBorder(55,2,2,5,a,1,1);
    boxBorder(48,6,8,1,a,1,1);
    //a

    boxBorder(58,2,8,1,a,1,1);
    boxBorder(58,2,2,5,a,1,1);
    boxBorder(58,2,2,5,a,1,1);
    boxFill(65,2,2,5,a);

    boxFill(68,2,2,3,a);
    boxFill(74,2,2,5,a);
    boxFill(68,2,6,1,a);
    boxFill(68,4,6,1,a);
    boxFill(68,6,6,1,a);

    //m bawah
    boxFill(37,8,10,1,b);
    boxFill(37,8,2,5,b);
    boxFill(41,8,2,5,b);
    boxFill(45,8,2,5,b);

    //a bawah
    boxBorder(48,10,2,3,b,1,1);
    boxBorder(48,8,8,1,b,1,1);
    boxBorder(48,10,8,1,b,1,1);
    boxBorder(55,8,2,5,b,1,1);
    boxBorder(48,12,8,1,b,1,1);

    boxBorder(58,8,8,1,b,1,1);
    boxBorder(58,8,2,5,b,1,1);
    boxBorder(58,8,2,5,b,1,1);
    boxFill(65,8,2,5,b);


    printf("\n\n\n\n\n\n\n\n");}

void menu(){
    int posisi =1;
    int key =0;


    while(key!=13){

    boxFill(33,17,16,7,arrow(1,posisi));

    boxFill(35,18,12,1,c);
    boxFill(35,18,2,2,c);
    boxFill(35,20,12,1,c);
    boxFill(45,20,2,2,c);
    boxFill(35,22,12,1,c);
    gotoxy(34,24);
    printf("SINGLE PLAYER");
    boxFill(52,17,16,7,arrow(2,posisi));

    boxFill(54,18,11,1,c);
    boxFill(54,18,2,5,c);
    boxFill(59,18,2,5,c);
    boxFill(64,18,2,5,c);
    gotoxy(54,24);
    printf("MULTIPLAYER");

    boxFill(70,17,16,7,arrow(3,posisi));
    boxBorder(72,20,10,1,c,1,1);//hri
    boxBorder(72,18,2,5,c,1,1);//ver
    boxBorder(82,18,2,5,c,1,1);// H
    gotoxy(75,24);
    printf("HELP");


    boxFill(88,17,16,7,arrow(4,posisi));
    boxBorder(90,18,12,1,c,1,1);//hri
    boxBorder(90,18,2,5,c,1,1);//ver
    boxBorder(90,20,12,1,c,1,1);//hri
    boxBorder(90,22,12,1,c,1,1);//hri
    gotoxy(91,24);
    printf("EXIT GAME");



    key=getch();
    if(key == 77 && posisi != 4){
        posisi++;
    }
    else if(key == 75 && posisi !=1){
        posisi--;
            }
    else if(key ==75 && posisi ==1){
    posisi =4;
        }
        else if(key ==77 && posisi ==4){
    posisi =1;}




    }
if(posisi==1){
    system("cls");
    singleplayer();
    printf("\n\n\n");
    return main();
}
if(posisi==2){
    system("cls");
    multiplayer();
    printf("\n\n\n");
    system("pause");
    return main();
}
if(posisi==3){
    help();
    printf("\n\n\n\n\n\n\n\n\n");
    tengah();
    system("pause");
    tengah();
    return main();
}
if(posisi==4){
    exit(0);
}


}

void tulisan(){
    gotoxy(35,20);

    printf("SINGLE PLAYER");




}





       /* while(key!=13){
        boxFill(40,1,10,5,arrow(1,posisi));
        boxFill(40,7,10,5,arrow(2,posisi));
        boxFill(40,13,10,5,arrow(3,posisi));
        boxFill(40,19,10,5,arrow(4,posisi));
        key=getch();
  if(key == 80 && posisi != 4){
    posisi++;
  }
else if(key == 72 && posisi !=1){
  posisi--;
}
else if(key ==72 && posisi ==1){
  posisi =4;
}
else if(key ==80 && posisi ==4){
  posisi =1;
}


        }

}*/

int arrow(int urutan,int posisi){

	if(urutan==posisi){
        return b;

  }
    else{
       return a;
  }

}

void help(){
system("cls");
gotoxy(35,22);
printf("Tebak Kata yang sudah diinput (multiplayer) / kata acak (singleplayer)\n");
gotoxy(35,24);
printf("Masukkan tebakan anda huruf demi huruf\n");
gotoxy(35,26);
printf("Batas salah dalam menebak adalah 5");
gotoxy(35,28);
printf("Jika manusianya telah tergantung, maka kalah\n\n\n");
mejeng();








}
