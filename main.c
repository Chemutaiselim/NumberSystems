#include <stdio.h>
static int Num,base,i,rem[10],b;
int main(){
  printf("Enter no:\n");
    scanf("%d", &Num);
    printf("Select base \n 1 = binary\n 2 = octal;\n 3 = Hexadecimal\n");
    scanf("%d", &base);
    printf("Output:");
    for(i=i-1;i>=0;i--)
    {printf("%d",rem[i]);}//Print Binary
    return 0;
}
static int ToBinary(int num){
    if(base==1){b=2;}
    else if(base==2){b=8;}
    else if(base==3){b=16;}
    else(printf("Enter Valid Value"));
    for (i=0;num>0;i++){rem[i] = num%b;num/=b;}
    return 0;
}
