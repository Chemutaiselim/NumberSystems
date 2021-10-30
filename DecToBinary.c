#include <stdio.h>

int ToBinary(int);
int decimalNo;
int rem[10],i;

int main(){
    printf("Enter a decimal number:");
    scanf("%d", &decimalNo);
    ToBinary(decimalNo);
    printf("Binary:");
    for(i=i-1;i>=0;i--){printf("%d",rem[i]);}
    return 0;
}
int ToBinary(int n){
    for (i=0;n>0;i++){rem[i] = n%2;n/=2;}
    return 0;
}
