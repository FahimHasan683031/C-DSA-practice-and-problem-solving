#include<stdio.h>

int sumOfdegist(int num);

int main(){
    int result =sumOfdegist(1225862556);

printf("%d\n" ,result);
    return 0;
}

int sumOfdegist (int num){
    int sum = 0;
    while (num>0)
    {
    int lastDgt = num%10;
    sum += lastDgt;
    num = num/10;

    }
    
    return sum;
}