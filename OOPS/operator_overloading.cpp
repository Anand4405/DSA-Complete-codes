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

fraction add(fraction const &f2){
    int lcm = this->denominator*f2.denominator;
    int x = lcm/this->denominator;
    int y = lcm/f2.denominator;
    int num = this->numerator*x + f2.numerator*y;
    // denominator = lcm;
    // numerator = num;
    fraction fNew(num,lcm);
    fNew.simplify();
    return fNew;
}

fraction operator*(fraction const &f2){ // we pass const for avoiding illegal changes in f2
    int nume = numerator*f2.numerator;
    int deno = denominator*f2.denominator;
    fraction fres(nume,deno);
    fres.simplify();
    return fres;
}

bool operator==(fraction const &f2){
return (numerator== f2.numerator && denominator==f2.denominator);
}

fraction& operator++(){  // pre-increament
    numerator = numerator+denominator;
    simplify();
    return *this; // this deferences the value stored in this pointer. So we accesed value stored in pointer
}

fraction operator++(int){  // post increament . int makes difference between pre and post increament.
fraction fNew(numerator,denominator);
numerator += denominator;
simplify();
fNew.simplify();
return fNew; // we returned the original values and made increament in original values

}

fraction& operator+=(fraction const &f2){
    int lcm = this->denominator*f2.denominator;
    int x = lcm/this->denominator;
    int y = lcm/f2.denominator;
    int num = this->numerator*x + f2.numerator*y;
    
    numerator = num;
    denominator = lcm;
    return *this;
    
}

fraction operator+(fraction const &f2) const{ // we can apply const beacause we are not changing value of present argument
    int lcm = this->denominator*f2.denominator;
    int x = lcm/this->denominator;
    int y = lcm/f2.denominator;
    int num = this->numerator*x + f2.numerator*y;
    // denominator = lcm;
    // numerator = num;
    fraction fNew(num,lcm);
    fNew.simplify();

   
    return fNew;
}

};

int main(){
fraction f1(2,5);
fraction f2(4,7);
fraction f3 = f1.add(f2);  // f3 = f1+f2

f1.print();
// f2.print();
// f3.print();
// fraction f4 = f2+f3;
// f4.print();

// fraction f5 = f2*f3;
// f5.print();

//  if(f1 ==f1){
//         cout<<"Equal";
//     }else{
//         cout<<"Not equal";
//     }

fraction f4 = ++f1;
f4.print();
f1.print();

fraction f5 = ++(++f1); // value of ++f1 stored in buffer so value of f1 increases only once ..
                      // and f5 will have updated value. so we need to add & so that by reference.
                      // due to adding & buffer memory wont created. all changes happen in same reference.
f1.print();
f5.print();

fraction f6(6,1);
fraction f7 = f6++;
f6.print();
f7.print();
f6 += f7;
f6.print();
f7.print();
(f6+=f7)+=f7;
f6.print();
// fraction f8 = (f6++)++; // this is not allowed 

// (i+=j)+=j; this is allowed


    return 0;
}