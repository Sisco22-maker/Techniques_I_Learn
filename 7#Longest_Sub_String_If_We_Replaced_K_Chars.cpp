/*
(اللهم صلْ وسلم وزد وبارك على سيدنا محمد )

꧁IslaM_SobhY꧂

 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define  el "\12"
int find_the_max_occurance(int arr[])
{
    int ind = 0;
    for(int i = 0; i < 26; i++)
    {
        if(arr[i] > arr[ind])ind = i;
    }
    return ind;
}
int Longest_Sub_String_If_We_Replaced_K_Chars(string s,int k)
{
    //creating the hash map for the chars in the string
    int has_map[26] = {0};
    int l = 0,r = 0;
    int res = 0,n = s.size();
    while(r < n)
    {
        has_map[s[r] - 'A']++;
        int ind = find_the_max_occurance(has_map);
        while((r-l+1) - has_map[ind] > k)
        {
           has_map[s[l]]--;
           l++;
            int ind = find_the_max_occurance(has_map);
        }
        res = max(res,(r-l+1));
        r++;

    }
    return res;
}
int main() {
string s = "ABABBA";
int k = 2;
cout << Longest_Sub_String_If_We_Replaced_K_Chars(s,k);
  return 0;
}





