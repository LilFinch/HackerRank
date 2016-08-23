#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int V;
    
    int ans;
    scanf("%d", &V);
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        if(arr[i]==V){
            ans=i;
        }
    }
    printf("%d", ans);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}