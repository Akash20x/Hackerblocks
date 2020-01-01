#include<iostream>
#include<unordered_map>
#include<cstring>
using namespace std;
#define hashmap unordered_map<char,node*>
class node
{
    public:
    char data;
    hashmap h;
    bool isterminal;
    node(char d)
    {
        data=d;
        isterminal=false;
    }
};

class trie
{
    node *root;
    public:
    trie()
    {
        root = new node('\0');
    }
    void add_word(string word)
    {
        node *temp=root;
        long i=0;
        while(word[i]!='\0')
        {
            if(temp->h.count(word[i])==1)
            {
                temp=temp->h[word[i]];
                i++;
            }
            else
            {
                node *temp2=new node(word[i]);
                temp->h[word[i]]=temp2;
                temp=temp2;//remember to update temp
                i++;
            }
        }
        temp->isterminal=true;
    }

    bool search(string word)
    {
        node *temp = root;
        long i=0;
        while(word[i]!='\0')
        {
            if(temp->h.count(word[i])==0)
            return false;
            else
            {
                temp=temp->h[word[i]];
                i++;
            }
        }
        if(temp->isterminal==true)
        return true;
        else
        return false;
    }

};
int main()
{
  
  int T;
  cin>>T;
  for(long i=0;i<T;i++)
  {
      long n;
      cin>>n;
      trie t;
      for(long i=0;i<n;i++)
      {
          long num;
          cin>>num;
          string s;
          s=to_string(num);
          t.add_word(s);
      }
      long q;
      cin>>q;
      for(long j=0;j<q;j++)
      {
          long num;
          cin>>num;
          string s;
          s=to_string(num);
          if(t.search(s)==true)
          cout<<"Yes"<<endl;
          else
          cout<<"No"<<endl;

      }
      //cout<<endl;
  }
  
  
    return 0;
}
