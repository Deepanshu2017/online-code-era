/*
 ============================================================================
 Name        : Project Euler 2.c
 Author      : Deepanshu Thakur
 Version     : 1.0
 Copyright   : None
 Description : Project Eular problem 2
 ============================================================================
 */

#include <stdio.h>

int main(int argc, char** argv) {
	unsigned long long int i=0,j=1,sum=0,sum2=0,result=0;
	while(sum<=4000000){
		sum=i+j;
		i=j;
		j=sum;
		if(sum<=4000000){
			sum2=sum;
			if(sum2%2==0)
				result+=sum2;
			//printf("%llu\t",sum2);
		}
	}
	printf("\n%llu",result);
	return 0;
}


/* Remember this in Fibonacci series every third element will be even
 * 1	1	   2		   3		 	     5				      8...
 * x	y  (x+y)  (x+y)+(y)  (x+y)+(x+2y)  (2x+3y)+(x+2y)
 * x	y	  x+y		  x+2y		   2x+3y			    3x+5y
 *
 * */
