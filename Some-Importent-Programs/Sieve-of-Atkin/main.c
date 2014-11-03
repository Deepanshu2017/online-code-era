
/*
 ============================================================================
 Name        : SieveAtkin.c
 Author      : Deepanshu Thakur
 Version     : 1.0
 Copyright   : None
 Description : Implementation of Sieve of Atkin
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
#include <malloc.h>

int main(void)
{
	int limit;
	int wlimit;
	int i, j, x, y, z,*sieb;

	scanf("%d", &limit);

	sieb = (int *)calloc(limit, sizeof(int));

	wlimit = sqrt(limit);

	for(x=1; x<=wlimit; x++)
		for(y=1; y<=wlimit; y++)
		{
			z = 4*x*x + y*y;
			if(z<=limit && (z%60==1 || z%60==13 || z%60==17 || z%60==29 || z%60==37 || z%60==41 || z%60==49 || z%60==53))
				sieb[z] = 1;
			z = 3*x*x + y*y;
			if(z<=limit && (z%60==7 || z%60==19 || z%60==31 || z%60==43))
				sieb[z] = 1;
			z = 3*x*x - y*y;
			if(x>y && z<=limit && (z%60==11 || z%60==23 || z%60==47 || z%60==59))
				sieb[z] = 1;
		}

	for(i=5; i<=wlimit; i++)
		if(sieb[i]==1)
			for(j=1; j * i*i <= limit; j++)
				sieb[j*i*i] = 0;

	printf("2\n3\n5");
	for(i=5; i<=limit; i++)
		if(sieb[i]==1)
			printf("\n%d", i);
			
	return 0;
}
