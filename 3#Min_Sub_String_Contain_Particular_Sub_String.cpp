/*
(اللهم صلْ وسلم وزد وبارك على سيدنا محمد )

꧁IslaM_SobhY꧂

//"صدق عمر (رضي الله عنه) حين قال : "لو كان الفقر رجلاً لقتلته

 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define  el "\12"

string Min_Sub_String(string big, string small)
{
    int b = big.size();
    int s = small.size();
    if(b < s)
    {
        cout << 0 << el;
        return "";
    }
    //count  hashing  of the small string
    //making a hash map for the small and big
    int small_hash[4] = {0};
    int big_hash[4] = {0};
    for(int i = 0; i < s; i++)
    {
        int c = small[i] - '0';
        small_hash[c]++;
    }
    int l = 0,r = 0;
    int have = 0,need = 3;
    int res = b+1;
    //ok till now
    while(r < b)
    {
        int c = big[r] - '0';
        big_hash[c]++;
        //if the small string is received as an input you have to check if the current
        //->char in the big one exists in the small one you say this in step number one and two
        //have+=(small_hash[c] > 0 && (big_hash[c] == small_hash[c]));
        //step number one:
        have+=(big_hash[c] == small_hash[c]);
        while(have == need)
        {
            int c = big[l] - '0';
            res = min(res,r-l+1);
            big_hash[c]--;
            //step number two:
            //you say that
            //have-=(small_hash[c] > 0 && (big_hash[c] <  small_hash[c]));
            have -= (big_hash[c] < small_hash[c]);
            l++;
        }
        r++;
    }
    if(res == b+1)
        cout << 0 << el;
    else
    cout << res << el;
    return "";
}
int main() {
    int t;cin >> t;
    while(t--)
    {
        string big;
cin >> big;
string small = "123";
 Min_Sub_String(big,small);
    }

  return 0;
}





