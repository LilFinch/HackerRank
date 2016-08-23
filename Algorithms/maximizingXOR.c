#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/*
 * Complete the function below.
 */
int maxXor(int l, int r) {
int XOR=0; int max=0;
    for(int j=l;j<=r;j++){
    for(int i=l;i<=r;i++){
    if(j<=i){
        XOR=j^i;
    }
        if (XOR>=max){
            max=XOR;
        }
}
}
    return max;
}
int main() {
    int res;
    int _l;
    scanf("%d", &_l);
    
    int _r;
    scanf("%d", &_r);
    
    res = maxXor(_l, _r);
    printf("%d", res);
    
    return 0;
}
