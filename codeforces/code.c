/*
 ============================================================================
 Name        : codeForces1.c
 Author      : Deepanshu Thakur
 Version     : 1.0
 Copyright   : None
 Description : CodeForces #274-1 (Div 2)
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	
	int a=0,b=0,c=0,max=0;
	scanf("%d\n%d\n%d",&a,&b,&c);
	max=a+b+c;
	
	if(max<(a*b*c))
		max=a*b*c;
	
	if(max<(a+(b*c)))
		max=a+(b*c);
	
	if(max<(a*(b+c)))
		max=a*(b+c);
	
	if(max<((a+b)*c))
		max=((a+b)*c);
	
	printf("%d",max);
	return 0;
}
