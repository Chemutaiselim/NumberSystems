
//Header files
#include <stdio.h>

//Initialize function that converts decimal to binary
long long ToBinary(int);

//Main function
int main() {

    //initialize
    int decimalNo;
    int binaryNo;

    //Output
    printf("Enter your No:");

    //Users input
    scanf("%d", &decimalNo);

    //pass the decimal no to the convert function
    binaryNo = ToBinary(decimalNo);

    //print final outcome
    printf("%s", "Binary = " + binaryNo);

    return 0;
}

//function that converts decimal to binary
long long ToBinary(int decimalNo){

    //initialize
    long long binaryNo = 0;
    int remainder = 1;
    int i = 1;

    //loop
    while(decimalNo!=0){
        remainder = decimalNo%2;
        binaryNo/=2;
        binaryNo +=remainder*i;
        i*=10;
    }

    return binaryNo;
}