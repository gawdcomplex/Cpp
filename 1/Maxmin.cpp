#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter the value of n1=\n";
    cin>>n1;
    cout<<"Enter the value of n2=\n";
    cin>>n2;
    int Max,Min;
    if(n1>n2){
        Max=n1;
        Min=n2;
    }
    else{
        Max=n2;
        Min=n1;
    }
    cout<<"Maximum number is= \n"<<Max<<endl;
    cout<<"Minimum number is= \n"<<Min<<endl;
    return 0;
}
