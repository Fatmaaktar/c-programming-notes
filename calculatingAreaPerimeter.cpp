#include <iostream>
#include <stdio.h>
#include <conio.h>
#define pi 3.14
main(){
	
	
int edge=8;
printf("karenin cevresi : %d\n" , edge*4);
printf("karenin alani : %d\n" , edge*8);


	
int shortEdge=8;
int longEdge=12;

printf("Dikdorgenin cevresi : %d\n" , shortEdge*2+longEdge*2);
printf("Dikdorgenin alani : %d\n" , shortEdge+longEdge);
	
	
int radius=2;
printf("Dairenin cevresi %f\n" ,2*(pi*radius));
printf("Dairenin alani %f\n" , pi*(radius*radius));

	
int r=3;
printf("kurenin hacmi : %f\n" , 4/3*(pi*r*r*r));

}
