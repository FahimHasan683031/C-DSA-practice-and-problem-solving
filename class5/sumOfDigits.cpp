#include <iostream>
using namespace std;

int someOfDigits(int num ){
    int sum = 0;
    while (num>0)   
    {
        int lastDigit = num % 10;
        num /= 10;
        sum += lastDigit;
    }
    return sum;
}

int main(){
    cout << someOfDigits(2356);
    return 0;
}