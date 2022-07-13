#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string compute(string str)
{
    int n = str.length();
    string res = "";
    for(int i=0;i<n;i++)
    {
        if(res =="" && str[i]==' '){
            continue;
        }
        if((str[i] >= 'A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') || (str[i]=='.'|| str[i]==',') || str[i] ==' '){
            if((str[i] >= 'A' && str[i]<='Z')){
                str[i] += 32;
            }
            res += str[i];
        }
      
    }
    return res;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    std::getline(std::cin, s);
    
    std::cout<<compute(s);
    return 0;
}