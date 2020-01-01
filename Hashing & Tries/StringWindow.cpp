#include <bits/stdc++.h>
using namespace std;
#define loop(x,n) for(ll x=0; x<n; ++x)
#define ll long long


string findSubString(string str, string pat)
{
    int len1 = str.length();
    int len2 = pat.length();

    if (len1 < len2)
    {
        cout << "No string";
        return "";
    }

    int hash_pat[256] = {0};
    int hash_str[256] = {0};


    for (int i = 0; i < len2; i++)
        hash_pat[pat[i]]++;

    int start = 0, start_index = -1, min_len = INT_MAX;

    int count = 0;
    for (int j = 0; j < len1 ; j++)
    {

        hash_str[str[j]]++;


        if (hash_pat[str[j]] != 0 &&
            hash_str[str[j]] <= hash_pat[str[j]] )
            count++;


        if (count == len2)
        {
            while ( hash_str[str[start]] > hash_pat[str[start]]
                || hash_pat[str[start]] == 0)
            {

                if (hash_str[str[start]] > hash_pat[str[start]])
                    hash_str[str[start]]--;
                start++;
            }

            int len_window = j - start + 1;
            if (min_len > len_window)
            {
                min_len = len_window;
                start_index = start;
            }
        }
    }

    if (start_index == -1)
    {
    cout << "No string";
    return "";
    }

      return str.substr(start_index, min_len);
}



string findSubString1(string str, string pat){
    string result;
    deque<char> dq;

    if(str.length()<pat.length()) {
        cout << "No string";
        return "";
    }

    unordered_map<char,int> m;
  int i;
    loop(i,pat.length()){
        m[pat[i]] = 0;
    }
    int count=0;

    //for(int i=0; i<str.length(); i++){
    while(1){

        if(count<pat.length()) {
            if(m.count(str[i])==0) dq.push_back(str[i]);
            else{
                if(m[str[i]]==0) count++;
                dq.push_back(str[i]);
                m[str[i]]++;
            }
        }




    }


}

int main()
{
    string str,pat;
    getline(cin,str);
    getline(cin,pat);
    cout<< findSubString(str, pat);
    return 0;
}
