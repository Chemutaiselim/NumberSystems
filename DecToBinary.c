#include <stdio.h>
//initialize
static int ToBinary(int);
static int decimalNo;
static int rem[10],i;

//Main function
static int main(){
    printf("Enter a decimal number:\n");//Take users input
    scanf("%d", &decimalNo);
    ToBinary(decimalNo);//Pass input to TOBinary function
    printf("Binary:");
    for(i=i-1;i>=0;i--)
    {printf("%d",rem[i]);}//Print Binary
    return 0;
}
//Convert to binary and store in array
static int ToBinary(int num){
    for (i=0;num>0;i++){rem[i] = num%2;num/=2;}
    return 0;
}
