#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k; 
    int count=0;
    scanf("%d %d",&n,&k);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    for(int j=0;j<n;j++){
            for (int i=j+1;i<n;i++){
        if((a[j]+a[i])%k==0){
            count++;
        }
    }
    }
    printf("%d",count);
    return 0;
}
