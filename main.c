#include <stdio.h>
static int Num,base,i,rem[10],b;
static int ToRequiredNo(int);
static int main(){
  printf("Enter no:\n");
    scanf("%d", &Num);
    printf("You want to convert it to? Select one  no: \n 1 = binary\n 2 = octal \n 3 = Hexadecimal\n");
    scanf("%d", &base);
    ToRequiredNo(Num);
    printf("Output:");
    for(i=i-1;i>=0;i--)
    {printf("%d",rem[i]);}//Print Final
    return 0;
}
static int ToRequiredNo(int num){
    if(base==1){b=2;}
    else if (base==2){b=8;}
    else if (base==3){b=16;}
    else(printf("Enter Valid Value"));
    for (i=0;num>0;i++){rem[i] = num%b;num/=b;}
    return 0;
}
