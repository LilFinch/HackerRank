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
    char stairs[n][n];
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            if(i<n-j-1){
            stairs[j][i]=' ';    
            }
            else{
            stairs[j][i]='#';    
            }
            printf("%c", stairs[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}
