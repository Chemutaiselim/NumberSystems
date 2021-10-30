#include <stdio.h>
#include <conio.h>

static int ToDecimal(long long);

static int base=1;

static int rem;

int main(){
    long long binaryNo;
    int decimalNo=0;
    printf("Enter a binary number:\n");//Take users input
    scanf("%lld", &binaryNo);
    printf("Decimal no: %d");
    return 0;
}
static int ToDecimal(long long num){
    int decimalNo=0;
    while (num>0){
        rem = num%10;
        decimalNo = decimalNo + rem * base;
        num= num/10;
        base=base*2;
    }
    return decimalNo;
}

