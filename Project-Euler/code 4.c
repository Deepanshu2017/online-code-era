/*
 ============================================================================
 Name        : ProjectEular.c
 Author      : Deepanshu Thakur
 Version     : 1.0
 Copyright   : None
 Description : Project Eular 4th question solution
 ============================================================================
 */

#include <stdio.h>

inline int palin(unsigned long int res){
	unsigned long int x=0,s=0,a=0,max=res;
	while(res){
		a=res%10;
		s=s*10+a;
		res/=10;
	}
	if(s==max)
		return 1;
	return 0;
}

int main(void){
	unsigned long int x=0,y=0,num=0,res=0,max=0,xs=0,ys=0;
	for(x=100;x<=999;x++){
		for(y=x;y<=999;y++){
			res=x*y;
			if(palin(res))
				if(max<res){
					xs=x;ys=y;
					max=res;
				}
		}
	}
	printf("%llu",max);
	return 0;
}
