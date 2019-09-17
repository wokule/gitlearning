#include <stdio.h>
#include <stdlib.h>
int main(){
    int a = 0;		//100ÒÔÄÚ 
    int b = 0;
    int i = 0;
    for(i=0;i<75;i++){ 
    a = rand()%100;
    b = rand()%100;
	printf("%2d¡¢%4d+%4d=\n",i+1,a+1,b+1);
	} 
	
	for(i=0;i<75;i++){ 
    a = rand()%100;
    b = rand()%100;
	printf("%2d¡¢%4d-%4d=\n",i+76,a+1,b+1);
	}
	
	for(i=0;i<75;i++){ 
    a = rand()%100;
    b = rand()%100;
	printf("%2d¡¢%4d*%4d=\n",i+151,a,b);
	}
	
	for(i=0;i<75;i++){ 
    a = rand()%100;
    b = rand()%100;
	printf("%2d¡¢%4d/%4d=\n",i+226,a,b);
	}
	
    return 0;
}
