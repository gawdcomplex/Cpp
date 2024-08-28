#include<iostream>
using namespace std;
int main()
{
    int savings;
    cin>>savings;
    savings=1500;
    if(savings>5000){
        
        cout<<"SONAM\n";
    }
    else if(savings<2000){
        cout<<"FRIENDS";
    }
    else{
        cout<<"PARI\n";
    }
    return 0;
}
