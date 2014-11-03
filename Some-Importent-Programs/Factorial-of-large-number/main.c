
/*
 ============================================================================
 Name        : Factorial.c
 Author      : Deepanshu Thakur
 Version     : 1.0
 Copyright   : None
 Description : Factorial of a lagre number
 ============================================================================
 */

#include <stdio.h>

int main(void){
    
    int  N;
    scanf("%d", &N);
    int result[1000];
    result[0] = 1;
    int length = 1, i, j, temp, carry = 0;

    for(i = 2; i <= N; i++) {
    	for(j = 0; j < length; j++) {
        	temp = carry + result[j] * i;
            carry = temp / 10;
            result[j] = temp % 10;
     	}
    	
    	while(carry) {
    		result[j] = carry % 10;
    		carry /= 10;
    		j++;
 		  }
      
      length = j;
    }

    for(i = length - 1; i >= 0; i--)
		  printf("%d", result[i]);
    
    printf("\n");
  
  return 0;
}

