#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

int main()
{
    stack<int> s;

    

    int x;

    for(int i=0;i<5;i++)
    {
        cin>>x;
        s.push(x);
    }

    for(int i=0;i<5;i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}