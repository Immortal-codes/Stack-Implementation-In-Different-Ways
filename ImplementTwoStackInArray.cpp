//My Approach

#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main()
{
    int n = 10;
    int arr[n];

    stack<int> s1;
    stack<int> s2;
    int k=0;
    int m=0;

    for (int i = 0; i < 5; i++)
    {
        k++;
        s1.push(i);
    }

    for (int i = 5; i < 10; i++)
    {   m++;
        s2.push(i);
    }

    /*for (int i = 1; i <=10; i++)
    {
        cout<<s1.top()<<"   "<<s2.top()<<endl;
        s1.pop();
        s2.pop();
    }

*/

    for (int i = 1; i <k; i++)
    {
        arr[i] = s1.top();
        s1.pop();
    }

    for (int i = k; i <=m; i++)
    {
        arr[i] = s2.top();
        s2.pop();
    }


     for (int  i = 1; i <=(k+m); i++)
     {
        cout<<arr[i]<<" ";
     }
     
}