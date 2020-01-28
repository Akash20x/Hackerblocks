#include<iostream>
#include<stack>
using namespace std;
void insertAtbottom(stack<int> &s,int x)
{
    if(s.empty())
    {
        s.push(x);
        return;
    }
    int y=s.top();
    s.pop();
    insertAtbottom(s,x);
    s.push(y);
}
void revstack(stack<int> &s)
{
    if(s.empty())
    return;
    int x = s.top();
    s.pop();
    revstack(s);
    insertAtbottom(s,x);

}
int main()
{
    stack<int> s1;
    int n;
    cin>>n;
    int num;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        s1.push(num);
    }
    revstack(s1);
    while(!s1.empty())
    {
        cout<<s1.top()<<endl;
        s1.pop();

    }
    return 0;
}
