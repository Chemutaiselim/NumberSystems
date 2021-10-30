#include <stdio.h>
#include <math.h>

static int ToDecimal(long long);

int main(){
    long long binaryNo;1
    printf("Enter a binary number:\n");//Take users input
    scanf("%lld", &binaryNo);
    printf("Decimal no: %d");
    return 0;
}
int ToDecimal(long long binaryNo){
    int decimalNo=0,i=0,rem;
    while (binaryNo!=0){
        rem = binaryNo%10;
        binaryNo/=10;
        decimalNo +=rem * pow(2, i);
        ++i;


    }
    return decimalNo;
}

