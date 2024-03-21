#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,x,y,b;
    cin>>x;
    cin>>y;
   a=x;
    for(int i=x;i<=9;i++)
    {
        if(i==0)
        cout<<"zero"<<endl;
        else if(i==1)
        cout<<"one"<<endl;
        else if(i==2)
        cout<<"two"<<endl;
        else if(i==3)
        cout<<"three"<<endl;
        else if(i==4)
        cout<<"four"<<endl;
        else if(i==5)
        cout<<"five"<<endl;
        else if(i==6)
        cout<<"six"<<endl;
        else if(i==7)
        cout<<"seven"<<endl;

        else if(i==8)
        cout<<"eight"<<endl;
    
        else {
        cout<<"nine"<<endl;
        }
    
    }
    
    for(int i=x;i<=9;i++)
        {
            if(i%2==0)
            {
                cout<<"odd"<<endl;
            }
            else{
                cout<<"even"<<endl;
            }
            
        }



    return 0;
}

