/*    This program reads a number T (test cases) and eact test case contain a String raw
 *    For every even character in raw add it into even string and add remaining into odd
 *    String and print seprated by space.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char *inputString(FILE* fp, size_t size){
    char *str;
    int ch;
    size_t len = 0;
    str = realloc(NULL, sizeof(char)*size);
    if(!str)return str;
    while(EOF!=(ch=fgetc(fp)) && ch != '\n'){
        str[len++]=ch;
        if(len==size){
            str = realloc(str, sizeof(char)*(size+=16));
            if(!str)return str;
        }
    }
    str[len++]='\0';
    return realloc(str, sizeof(char)*len);
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T = 0, i = 0, len, j = 0;
    scanf("%d", &T);
    inputString(stdin, 10);
    while(T--) {
      char *odd, *even, *raw;
      j = 0;
      raw = inputString(stdin, 10);
      len = strlen(raw);
      odd = malloc(sizeof(char) * len / 2 * 2 + 1);
      even = malloc(sizeof(char) * len / 2 * 2 + 1);
      for(i = 0; i < len; i += 2) {
        even[j++] = raw[i];
      }
      even[j] = '\0';
      j = 0;
      for(i = 1; i < len; i += 2) {
        odd[j++] = raw[i];
      }
      odd[j] = '\0';
      printf("%s %s\n", even, odd);
    }
    return 0;
}
