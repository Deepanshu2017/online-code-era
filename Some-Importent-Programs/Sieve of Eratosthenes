
/*
============================================================================
Name : SieveEratosthenes.c
Author : Deepanshu Thakur
Version : 1.0
Copyright : None
Description : Prime number generator using Sieve of eratosthenes
============================================================================
*/

#include <stdio.h>
#include <malloc.h>

int main(int argc, char** argv){
  int i=0,j=0,k=2;
  unsigned long int n=0;
  scanf("%lu",&n);
  
  unsigned long int *prime;
  
  prime=(unsigned long int *)malloc(sizeof(unsigned long int)*2*n);

  for(i=0;i<n;i++)
    prime[i]=i;
      for(i=2;i<n;i++)
        if(prime[i]!=0)
          for(j=2;j<n;j++){
            prime[j*prime[i]]=0;
              if(prime[i]*j>n)
                break;
          }

  for(i=0;i<n;i++)
    if(prime[i]!=0)
      printf("%lu\n",prime[i]);

  return(0);

}
