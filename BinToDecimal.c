#include <stdio.h>
#include <math.h>

static int ToDecimal(long long);
static int rem, decimalNo=0,i,base,b;
 int main(){
    long long Num;
    printf("You want to convert which No system to Decimal? Select one  no: \n 1 = binary\n 2 = octal \n 3 = Hexadecimal\n");
    scanf("%d", &base);
    printf("Enter the number:\n");//Take users input
    scanf("%lld", &Num);
    int num =ToDecimal(Num);
    printf("Decimal no: %d",num);
}
static int ToDecimal(long long binaryNo){
    if(base==1){b=2;}
    else if (base==2){b=8;}
    else if (base==3){b=16;}
    else(printf("Enter Valid Value"));
   for (i=0;binaryNo!=0;++i){
       rem = binaryNo%10;
       binaryNo=binaryNo/10;
       decimalNo=decimalNo + (rem)*(pow(b,i));
    }
    return decimalNo;
}

