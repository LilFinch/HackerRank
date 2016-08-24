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
    int arr[n];
    float pos=0;float neg=0;float zer=0;
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
        if(arr[arr_i]<0){
            neg++;
        }
        else if(arr[arr_i]>0){
            pos++;
        }
        else{
            zer++;
        }
    }
    float posdec;
    float negdec;
    float zerdec;
    posdec=pos/n;
    negdec=neg/n;
    zerdec=zer/n;
    printf("%.6f\n",posdec);
    printf("%.6f\n",negdec);
    printf("%.6f",zerdec);
    return 0;
}