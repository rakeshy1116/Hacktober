/* the loop inveriant for this is at the beginning of itreation of the ith loop the element is not present in the array[0:i-1] if the required element occurs only once in the given array*/

#include<stdio.h>

int main(){
    int n,k,i;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    for(i = 0 ; i < n ; i++){
        printf("enter elements");
        scanf("%d",&a[i]);}
    printf("required elements");
    scanf("%d",&k);
    for(i = 0 ; i < n ; i++){
        if(a[i] == k){
             printf("the required element is present at %d index of array",i);}}} 
