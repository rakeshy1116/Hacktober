#include<stdio.h>

void swap(int *a ,int *b){
    int c;
    c = *a;
    *a = *b;
     *b = c;}

int main(){
    int n ,i , j,k;
    scanf("%d",&n);
    int a[n];
    for(i = 0 ; i < n ; i++)
    scanf("%d",&a[i]);
    for(i = 0 ; i < n ; i++){
    for(j = 0 ; j < n-1 ; j++){
    if(a[j] > a[j+1])
    swap(&a[j],&a[j+1]);}}
    for(i = 0 ; i < n ; i++)
     printf("%d ",a[i]);}
