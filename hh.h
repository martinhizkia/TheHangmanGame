#include <stdio.h>
#include <windows.h>
#include "std.h"
int a=0;
int b=4;
int c = 15;

void showHangman(int nyawa)
 {

     switch(nyawa)
     {
    case 0:

    boxBorder(45,1,20,1,a,1,1);//tiang horizontal
    boxBorder(45,1,1,20,a,1,1);//tiang vertikal
    boxBorder(65,1,1,4,a,1,1);//tiang kecil
    boxBorder(62,5,7,3,b,4,1);//kepala
    boxBorder(64,8,3,6,b,1,1);//badan
    boxBorder(59,9,13,1,b,1,1);//tangan
    boxBorder(60,14,11,1,b,1,1);//tangan//kaki atas
    boxBorder(59,14,2,2,b,1,1);//kaki kiri
    boxBorder(70,14,2,2,b,1,1);//kaki kanan
    boxBorder(46,20,24,1,a,1,1);//lantai
	break;
     case 1:

    boxBorder(45,1,20,1,a,1,1);//tiang horizontal
    boxBorder(45,1,1,20,a,1,1);//tiang vertikal
   // boxBorder(65,1,1,4,22,1,1);//tiang kecil
    boxBorder(62,5,7,3,b,4,1);//kepala
    boxBorder(64,8,3,6,b,1,1);//badan
    boxBorder(59,9,13,1,b,1,1);//tangan
    boxBorder(60,14,11,1,b,1,1);//tangan//kaki atas
    boxBorder(59,14,2,2,b,1,1);//kaki kiri
    boxBorder(70,14,2,2,b,1,1);//kaki kanan
    boxBorder(46,20,24,1,a,1,1);//lantai
	break;
     case 2:

    boxBorder(45,1,20,1,a,1,1);//tiang horizontal
    boxBorder(45,1,1,20,a,1,1);//tiang vertikal
   // boxBorder(65,1,1,4,22,1,1);//tiang kecil
    boxBorder(62,5,7,3,b,4,1);//kepala
    boxBorder(64,8,3,6,b,1,1);//badan
    boxBorder(59,9,13,1,b,1,1);//tangan
    //boxBorder(60,14,11,1,5,1,1);//tangan//kaki atas
    //boxBorder(59,14,2,2,5,1,1);//kaki kiri
    //boxBorder(70,14,2,2,5,1,1);//kaki kanan
    boxBorder(46,20,24,1,a,1,1);//lantai
	break;
     case 3:

    boxBorder(45,1,20,1,a,1,1);//tiang horizontal
    boxBorder(45,1,1,20,a,1,1);//tiang vertikal
   // boxBorder(65,1,1,4,22,1,1);//tiang kecil
    boxBorder(62,5,7,3,b,4,1);//kepala
    boxBorder(64,8,3,6,b,1,1);//badan
    //boxBorder(59,9,13,1,5,1,1);//tangan
    //boxBorder(60,14,11,1,5,1,1);//tangan//kaki atas
    //boxBorder(59,14,2,2,5,1,1);//kaki kiri
    //boxBorder(70,14,2,2,5,1,1);//kaki kanan
    boxBorder(46,20,24,1,a,1,1);//lantai
	break;
     case 4:

    boxBorder(45,1,20,1,a,1,1);//tiang horizontal
    boxBorder(45,1,1,20,a,1,1);//tiang vertikal
   // boxBorder(65,1,1,4,22,1,1);//tiang kecil
    boxBorder(62,5,7,3,b,4,1);//kepala
    //boxBorder(64,8,3,6,5,1,1);//badan
    //boxBorder(59,9,13,1,5,1,1);//tangan
    //boxBorder(60,14,11,1,5,1,1);//tangan//kaki atas
    //boxBorder(59,14,2,2,5,1,1);//kaki kiri
    //boxBorder(70,14,2,2,5,1,1);//kaki kanan
    boxBorder(46,20,24,1,a,1,1);//lantai
    break;
     case 5:

    boxBorder(45,1,20,1,a,1,1);//tiang horizontal
    boxBorder(45,1,1,20,a,1,1);//tiang vertikal
   // boxBorder(65,1,1,4,22,1,1);//tiang kecil
    //1boxBorder(62,5,7,3,4,4,1);//kepala
    //boxBorder(64,8,3,6,5,1,1);//badan
    //boxBorder(59,9,13,1,5,1,1);//tangan
    //boxBorder(60,14,11,1,5,1,1);//tangan//kaki atas
    //boxBorder(59,14,2,2,5,1,1);//kaki kiri
    //boxBorder(70,14,2,2,5,1,1);//kaki kanan
    boxBorder(46,20,24,1,a,1,1);//lantai
	break;


      }
      return;
 }
void menang(){
printf("MENANG\n");}
void kalah(){
printf("kalah\n");
}
void tengah(){
printf("\t\t\t\t\t\t");
}
void bawah(){

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");}

void pajangan(){


    boxBorder(45,1,20,1,a,1,1);//tiang horizontal
    boxBorder(45,1,1,20,a,1,1);//tiang vertikal
    //boxBorder(65,1,1,4,22,1,1);//tiang kecil
   // boxBorder(62,5,7,3,4,4,1);//kepala
   // boxBorder(64,8,3,6,5,1,1);//badan
   // boxBorder(59,9,13,1,5,1,1);//tangan
   // boxBorder(60,14,11,1,5,1,1);//tangan//kaki atas
   // boxBorder(59,14,2,2,5,1,1);//kaki kiri
   // boxBorder(70,14,2,2,5,1,1);//kaki kanan
   boxBorder(46,20,24,1,a,1,1);//lantai



}
void mejeng(){
  boxBorder(45,1,20,1,a,1,1);//tiang horizontal
    boxBorder(45,1,1,20,a,1,1);//tiang vertikal
    boxBorder(65,1,1,4,a,1,1);//tiang kecil
    boxBorder(62,5,7,3,b,4,1);//kepala
    boxBorder(64,8,3,6,b,1,1);//badan
    boxBorder(59,9,13,1,b,1,1);//tangan
    boxBorder(60,14,11,1,b,1,1);//tangan//kaki atas
    boxBorder(59,14,2,2,b,1,1);//kaki kiri
    boxBorder(70,14,2,2,b,1,1);//kaki kanan
    boxBorder(46,20,24,1,a,1,1);//lantai
}








