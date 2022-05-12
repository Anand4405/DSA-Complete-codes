#include<iostream>
#include<set>
using namespace std;

int main(){
multiset<int> ms;
ms.insert(5);
ms.insert(4);
ms.insert(3);
ms.insert(1);
ms.insert(3);
ms.insert(5);
for(auto i:ms){
    cout<<i<<" ";
}
cout<<endl;
ms.erase(5); // this will remove all 5s
ms.erase(ms.find(3)); //this will remove first occurance of the 3
cout<<ms.size();
    return 0;
}