/*
 ============================================================================
 Name        : Git.c
 Author      : Deepanshu Thakur
 Version     : 1.0
 Copyright   : None
 Description : CodeChef OCT Challenge! 1 problem, ANSI-style
 ============================================================================
 */

#include <stdio.h>

int main(void){
    
    int t,n,m,i,arr[100],max,count;
    scanf("%d",&t);
    while(t--){
    
    	count=0;
    	max=0;
    	scanf("%d%d",&n,&m);
    	for(i=0;i<n;i++){
    		scanf("%d",&arr[i]);
    		if(max<arr[i])
    			max=arr[i];
    	}

    	for(i=0;i<n;i++)
    		count+=max-arr[i];

    	if(count==m)
   			printf("Yes\n");

    	else if(((m-count)%n)==0)
    		printf("Yes\n");

    	else
   			printf("No\n");
    }
    return 0;
 }
