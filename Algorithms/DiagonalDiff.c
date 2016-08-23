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
    int a[n][n];
    int sumprimary=0;
    int sumsecondary=0;
    int i=n-1;
    int diagdiff=0;
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          scanf("%d",&a[a_i][a_j]);
       }
        sumprimary+=a[a_i][a_i];
        sumsecondary+=a[a_i][i];
        i--;
    }
    int diff=sumprimary-sumsecondary;
    diagdiff=abs(diff);
    printf("%d",diagdiff);
    return 0;
}
