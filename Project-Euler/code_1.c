/*
 ============================================================================
 Name        : Project Euler_1.c
 Author      : Deepanshu Thakur
 Version     : 1.0
 Copyright   : None
 Description : Project Euler Problem 1
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int i=0;
	long int sum=0;
	for(i=0;i<1000;i++)
		if(i%3==0 && i%5!=0)
			sum+=i;
		else if(i%5==0 && i%3==0)
			sum+=i;
		else if(i%5==0 && i%3!=0)
			sum+=i;
	printf("%d",sum);
	return 0;
}


//More short code
/*

#include<stdio.h>
int main(void){
    unsigned long int sum = 0,i=0;
    for(i = 1; i < 1000; ++i)
        if(!(i % 3) || !(i % 5))
            sum += i;
    printf("%lu",sum);
    return 0;
}

*/
