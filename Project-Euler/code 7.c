/*
 ============================================================================
 Name        : Project-Eular
 Author      : Deepanshu Thakur
 Version     : 1.0
 Copyright   : None
 Description : Project Eular #7
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 210000
int main(void) {

    unsigned long int arr[SIZE]={0},i=0,j=0,N=10001;
    for(i=0;i<(SIZE/2)-1;i++)
        arr[i]=i;
    for(i=2;i<((SIZE/2)-1);i++)
        if(arr[i]!=0)
            for(j=2;j<((SIZE/2)-1);j++){
                arr[j*arr[i]]=0;
                if(j*arr[i]>((SIZE/2)-1))
                    break;
            }
    j=0;
    for(i=2;j<N;i++)
    	if(arr[i]!=0)
    		j+=1;

    printf("%lu",i-1);
    return 0;
}

