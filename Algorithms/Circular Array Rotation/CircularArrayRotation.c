#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    int k;
    scanf("%d",&k);
    int q;
    scanf("%d",&q);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int m[q];
    for (int j=0;j<q;j++){
        scanf("%d",&m[j]);
    }
    k=(k%n);
        int temp[k];
    for(int x=0;x<k;x++){
        temp[x]=arr[n-k+x];
    }
        for(int i=n-1;i>k-1;i--){
            arr[i]=arr[i-k];
        }
    for(int i=0;i<k;i++){
        arr[i]=temp[i];
    }
    for (int j=0;j<q;j++){
        printf("%d\n",arr[m[j]]);
    }
    return 0;
}
