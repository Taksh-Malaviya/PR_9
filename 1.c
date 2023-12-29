/*Q.1 Write a Program to write even & odd numbers from 50 to 70 into two separate files.
For example,k 
Output:
Even numbers from even_file.txt:
50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70

Odd numbers from odd_file.txt:
51, 53, 55, 57, 59, 61, 63, 65, 67, 69*/

#include<stdio.h>

void main(){
	
    char data[1000];
    int i,a;
	FILE *p;
	FILE *p1;
	
	p=fopen("even.txt","w");
	p1=fopen("odd.txt","w");
	
	
  for(i=50;i<=70;i++){
  
    if (i % 2 == 0) {  
printf("%d is an even number.\n\n",i);  
    } else {  
printf("%d is an odd number.\n\n", i);  
    }  
}
   
} 
	
	
/*	if(p==NULL){
		printf("Not open");
	}else{
		printf("Open");
		for(i=50;i<=70;i++){
			if(i%2==0){
				fputs(i,p);
			}else{
				fputs(i,p1);
			}
		}
	}
}
	/*		if(a%2==0 && b%2==0){
		while(fgets(data,10,p) != NULL){
		printf("%s",data);
	}
			
	}else{
		while(fgets(data,10,p1) != NULL){
		printf("%s",data);
	}
	
}
}*/
