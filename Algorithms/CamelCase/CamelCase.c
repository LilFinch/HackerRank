#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    int i=0;
    int count;
    int upper;
    while (i<strlen(s)){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            upper++;
        }
        i++;
    }
    count=upper+1;
    printf("%d",count);
    return 0;
}
