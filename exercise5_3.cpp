#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double cheetah(double x){
    int sum1=0,BFM=0,BFTA=0,BFTB=0,BFTC=0;
    BFM = x/10;
    sum1 = sum1+BFM;
    while (BFM>=3)
    {
        BFTA=BFM/3;
        BFTB=BFM%3;
        BFTC=BFTA+BFTB;
        sum1=sum1+BFTC;
        BFM=BFTB;
    }
    return sum1;
}
int main(){
    double x;
    cout << "Enter your money: ";
    cin >> x;
    cout << cheetah(x);
}