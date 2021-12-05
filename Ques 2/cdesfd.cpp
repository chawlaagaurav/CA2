#include<iostream>
using namespace std;
void voterc(int a)
{
if(a<18)
{
    cout<<"Not eligible";
}
else
{
    cout<<"Eligible";
}
}
int main()
{
    int a,b,c;
    a=5;
    b=19;
    c=12;
    voterc(5);
    voterc(19);
    voterc(12);
}