#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int addme(int array[], int size){
    int sum=0;
    for(int i = 0; i < size; i++){
    sum+=array[i];
    }
    return sum;
}
int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    int add;
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
            }
    add=addme(arr, n);
    printf("%d",add);
    return 0;
}
