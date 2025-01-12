#include <iostream>
using namespace std;

int binatyTodec (int binaryNum){
    int ans=0, pow = 1;

    while (binaryNum>0)
    {
        int rem = binaryNum %10;
        binaryNum /=10;
        ans += (rem*pow);
        pow *=2;
    }
    return ans;
}

int main(){
    cout << binatyTodec(101010) << endl;
    int a= 5;
    int b=6;
    char chr = 'A';

    cout << (a & b)<<endl;
    
    for (int i=0; i<5; i++){
        cout << chr;
        chr++;
    }
}