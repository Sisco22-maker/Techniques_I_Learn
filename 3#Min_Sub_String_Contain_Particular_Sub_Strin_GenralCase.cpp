/*
(اللهم صلْ وسلم وزد وبارك على سيدنا محمد )

꧁IslaM_SobhY꧂

 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define  el "\12"


string ShortestSubString(string big,string small)
{
    int b = big.size();
    int s = small.size();
    if(s > b)
    {
        return "";
    }
    //creating the hash maps
    int Sarray[26] = {0};
    int Barray[26] = {0};
    //making the hashing for the smallest string
    //just make a variable called need to calculate the
    //needed chars in the small string
    int need = 0;
    for(int i = 0; i < s; i++)
    {
        int c = small[i] - '0';
        Sarray[c]++;
        need+=(Sarray[c] == 1);
    }
    //just initializing the variabls
    int l = 0,r = 0;
    int have = 0;
    int mn = b+1;
    while(r < b)
    {
        //making the hashing for the big string
        int c = big[r] - '0';
        Barray[c]++;
        have+=(Sarray[c] > 0 && Sarray[c] == Barray[c]);
        while(have == need)
        {
           mn = min(mn,(r-l+1));
           int c = big[l] - '0';
           Barray[c]--;
           have-=(Sarray[c] > 0 && Barray[c] < Sarray[c]);
           l++;
        }
        r++;
    }
    string ret = "";
    for(int i = 0; i < mn; i++)ret+='0';
    return (mn == b+1) ? "" : ret;
}
int main() {
string s,q;cin >> s >> q;
string k = ShortestSubString(s,q);
cout << k.size() << el;
  return 0;
}





