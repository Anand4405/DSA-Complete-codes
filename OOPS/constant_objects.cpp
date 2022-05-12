#include<bits/stdc++.h>
 
using namespace std;

class fraction{
  
int  numerator,denominator;
public:
fraction(int x,int y){
    this->numerator = x;
    this->denominator = y;
}
int getNumerator() const{
    return numerator;
}
int getdenominator() const{
    return denominator;
}

};

int main(){

// fraction const f3; // we can only constant functions for constant objects
// cout<<f3.getNumerator<<" "<<f3.getdenominator<<endl;
    return 0;
}