#include <stdio.h>
#include <stdlib.h>
int a = 0;		//100ÒÔÄÚ 
int b = 0;
int i = 0;
int main()
{
FILE *fp;
int x=1234;
fp=fopen("d:\\shiti.txt","w");
if(fp==NULL)
{
printf("create file failed\n");
return -1;
}


    for(i=0;i<75;i++){ 
    a = rand()%100;
    b = rand()%100;
	fprintf(fp,"%2d¡¢%4d+%4d=\n",i+1,a+1,b+1);
	} 
	
	for(i=0;i<75;i++){ 
    a = rand()%100;
    b = rand()%100;
	fprintf(fp,"%2d¡¢%4d-%4d=\n",i+76,a+1,b+1);
	}
	
	for(i=0;i<75;i++){ 
    a = rand()%100;
    b = rand()%100;
	fprintf(fp,"%2d¡¢%4d*%4d=\n",i+151,a,b);
	}
	
	for(i=0;i<75;i++){ 
    a = rand()%100;
    b = rand()%100;
    int c = a%b;
    while(!c){
    	a = rand()%100;
    	b = rand()%100;
    	c = a%b;
	}
	
	while(!b){
    	b = rand()%100;
	}
	
    if(a<b){
    	int t;
    	t=a;
    	a=b;
    	b=t;
	}
	fprintf(fp,"%2d¡¢%4d/%4d=\n",i+226,a,b);
	}
	fclose(fp);
	return 0;
}


