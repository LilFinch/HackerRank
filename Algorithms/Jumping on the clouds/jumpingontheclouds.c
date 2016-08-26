#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int count=0;
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    if(n==2){
        count=1;
        printf("%d",count);
        return 0;
    }
    for(int i=0;i<n;i++){
        if(c[i+2]==0){
            count++;
            i=i+1;
        }
        else if(c[i+1]==0){
            count++;
        }
    }
    printf("%d",count-1);
    return 0;
}