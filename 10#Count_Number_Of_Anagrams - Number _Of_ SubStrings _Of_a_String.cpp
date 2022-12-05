/*
(اللهم صلْ وسلم وزد وبارك على سيدنا محمد )

꧁IslaM_SobhY꧂

 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define  el "\12"
bool Check_For_Equality(int s_hash_map[],int k_hash_map[])
{
    for(int i = 0; i < 26; i++)
    {
        if(s_hash_map[i] != k_hash_map[i])return 0;
    }
    return 1;
}
int Count_Number_Of_Anagrams(string s,string k)
{
    int s_sz = s.size();
    int k_sz = k.size();
    if(k_sz > s_sz)return 0;
    int s_hash_map[26] = {0};
    int k_hash_map[26] = {0};
    int res = 0;
    for(int i = 0; i < k_sz; i++)
    {
        s_hash_map[s[i] - 'a']++;
        k_hash_map[k[i] - 'a']++;
    }
    res+=Check_For_Equality(s_hash_map,k_hash_map);
    int l = 0,r = k_sz;
    while(r < s_sz)
    {
        s_hash_map[s[r] - 'a']++;
        s_hash_map[s[l] - 'a']--;
        res+=Check_For_Equality(s_hash_map,k_hash_map);
        /*
        #if you want the string position of sub anagram just
        #append l to an array l here is the starting position
        #of an anagram
        */
        l++,r++;
    }
    return res;
}
int main() {
string s,k;cin >> s >> k;
cout << Count_Number_Of_Anagrams(s,k) << el;
  return 0;
}
/*
#اللهم صل على محمد وآله#

*/





