#include <stdio.h>
#include <math.h>

static int ToDecimal(long long);
static int rem, decimalNo=0,i;
int main(){
    long long binaryNo;
    printf("Enter a binary number:\n");//Take users input
    scanf("%lld", &binaryNo);
    int num =ToDecimal(binaryNo);
    printf("Decimal no: %d",num);
}
static int ToDecimal(long long binaryNo){
   for (i=0;binaryNo!=0;++i){
       rem = binaryNo%10;
       binaryNo=binaryNo/10;
       decimalNo=decimalNo + (rem)*(pow(2,i));
    }
    return decimalNo;
}

