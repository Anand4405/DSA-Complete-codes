#include<bits/stdc++.h>
using namespace std;

class fraction{
private:
int numerator;
int denominator;

public:
 fraction(int numerator,int denominator){
    this->numerator = numerator;
    this->denominator = denominator;

}
void print(){
    cout<<numerator<<"/"<<denominator<<endl;
}
void simplify(){
    int gcd =1;
    int j = min(numerator,denominator);
    for(int i=1;i<=j;i++){
        if(numerator%i==0 && denominator%i==0){
            gcd =i;
        }
    }
    numerator /=gcd;
    denominator /=gcd;
}

void add(fraction &f2){
    int lcm = this->denominator*f2.denominator;
    int x = lcm/this->denominator;
    int y = lcm/f2.denominator;
    int num = this->numerator*x + f2.numerator*y;
    denominator = lcm;
    numerator = num;
    simplify();
}

};

int main(){
fraction f1(4,7);
f1.print();
fraction f2(4,7);
f1.add(f2);
f1.print();
f1.simplify();
f1.print();
    return 0;
}