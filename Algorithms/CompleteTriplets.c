#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d",&a0,&a1,&a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d",&b0,&b1,&b2);
    int scoreA=0; int scoreB=0;
    if (a0>b0){
        scoreA+=1;
    }
    else if(a0<b0){
        scoreB+=1;
    }
    if (a1>b1){
        scoreA+=1;
    }
    else if(a1<b1){
        scoreB+=1;
    }
    if (a2>b2){
        scoreA+=1;
    }
    else if(a2<b2){
        scoreB+=1;
    }
    printf("%d %d",scoreA,scoreB);
    return 0;
}
