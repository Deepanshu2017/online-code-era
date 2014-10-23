/*
 ============================================================================
 Name        : code2.c
 Author      : Deepanshu Thakur
 Version     : 1.0
 Copyright   : None
 Description : Codeforces #274-2
 ============================================================================
 */

#include<stdio.h>

inline int max(int arr[],int temp,int n){
    int i,j=0,maxva;
    maxva=arr[0];
    for(i=0;i<n;i++)
        if(maxva<arr[i]){
            maxva=arr[i];
            j=i;
        }
    return j;
}

inline int min(int arr[],int temp,int n){
    int i,j=0,minva;
    minva=arr[0];
    for(i=0;i<n;i++)
        if(minva>arr[i]){
            minva=arr[i];
            j=i;
        }
    return j;
}

inline void sort(int arr[],int temp,int n){
    int i,j;
    for(i=0;i<n-1;i++)
        for(j=i;j<n;j++)
            if(arr[j]<arr[i]){
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
}

inline int call(int arr[],int temp2,int n,int m){
    int i=0,count=0;
    m=0;
    int arrco[100],arrco1[100];
    for(i=0;i<n;i++){
        arrco[i]=arr[i];
        arrco1[i]=arr[i];
    }

    int temp=arrco[0];
    for(i=0;i<n;i++){
        if (temp==arrco[i])
            count+=1;
    }
    if(count>=n){
            m+=2;
            return m;
    }
    m=0;
    count=0;
    sort(arrco,100,n);
    arrco[i-1]-=1;
    arrco[0]+=1;
    sort(arrco,100,n);
    sort(arrco1,100,n);
    m=0;
    count=0;
    temp=arrco[0];
    for(i=0;i<n;i++){
        if (temp==arrco[i])
            count+=1;
    }
    if(count>=n){
        m+=1;
        return m;
    }

    count=0;
    m=0;
    for(i=0;i<n;i++)
        if(arrco1[i]==arrco[i])
            count+=1;
    if(count>=n){
        m+=2;
        return m;
    }
    return m;
}

int main(void){

    int n=0,k=0,m=0,tempmax[1000],tempmin[1000],i=0,arr[100];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<k;i++){
        tempmax[i]=max(arr,100,n);
        tempmin[i]=min(arr,100,n);
        if(tempmin[i]==tempmax[i])
            break;
        m=call(arr,100,n,m);
        if(m==2){
            break;
        }
        if(m==1){
            arr[tempmax[i]]-=1;
            arr[tempmin[i]]+=1;
            break;
        }
        m=0;
        arr[tempmax[i]]-=1;
        arr[tempmin[i]]+=1;
    }

    int lasttemp=0;
    if(m==1){
        printf("%d %d\n",arr[tempmax[i]]-arr[tempmin[i]],i+1);
        for(lasttemp=0;lasttemp<=i;lasttemp++)
            printf("%d %d\n",tempmax[lasttemp]+1,tempmin[lasttemp]+1);
    }
    else if(m==2){
        printf("%d %d\n",arr[tempmax[i]]-arr[tempmin[i]],i);
            for(lasttemp=0;lasttemp<i;lasttemp++)
                printf("%d %d\n",tempmax[lasttemp]+1,tempmin[lasttemp]+1);
    }
    else{
        int alpha=max(arr,100,n);
        int beta=min(arr,100,n);
        printf("%d %d\n",arr[alpha]-arr[beta],i);
        for(lasttemp=0;lasttemp<i;lasttemp++)
            printf("%d %d\n",tempmax[lasttemp]+1,tempmin[lasttemp]+1);
    }
    return 0;
}
