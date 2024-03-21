#include <iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter The Number for a\n";
cin>>a;
cout<<"Enter the Number for b\n";
cin>>b;
int temp;
temp=a;
a=b;
b=temp;
cout<<"A is "<<a<< endl;
cout<<"B is "<<b<<endl;

return 0;
}
