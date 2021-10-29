#include <stdio.h>
#include <math.h>

long long ToBinary(int);
int main(){
    int decimalNo;
    printf("Enter a decimal number:");
    scanf("%d", &decimalNo);
    int binaryNo = ToBinary(decimalNo);
    printf("Binary %lld");
    return 0;
}
long long ToBinary(int n){

    long long binaryNo = 0;
    int rem, i = 1;
    while (n!=0){
        rem = n%2;
        n/=2;
        binaryNo += rem*i;
        i*=10;
    }
    return binaryNo;
}
