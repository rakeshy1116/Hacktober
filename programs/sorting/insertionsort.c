/*after completion of 'i' iterations a[0,i-1] is sorted*/

#include<stdio.h>

int main(){
    int n , i , j,k;
    scanf("%d",&n);
    int a[n];
    for(i = 0 ; i < n ; i++)
    scanf("%d",&a[i]);
    for(j = 1; j < n ; j++){
    k = a[j];
    for(i = j-1; i >= 0 ; i--){
        if(a[i]> k){
            a[i+1] = a[i];}
        else{break;}}
    a[i+1] = k;
    for(i = 0 ; i < n ; i++)
    printf("%d ",a[i]);}

