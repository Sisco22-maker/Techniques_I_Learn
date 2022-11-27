/*
(اللهم صلْ وسلم وزد وبارك على سيدنا محمد )

꧁IslaM_SobhY꧂

 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define  el "\12"
#define  vi vector<int>

//Count distinct elements in every window of size k
int NumOfDisEleINWindWithSzK(const vi &v,const int &k)
{
    int n = v.size();
    unordered_map<int,int>mp;
    set<int>s;
    for(int i = 0; i < k; i++)
    {
        mp[v[i]]++;
        s.emplace(v[i]);
    }
    int mn = mp.size();
    int l = 0,r = k;
    while(r < n)
    {
        mp[v[r]]++;
        s.emplace(v[r]);
        mp[v[l]]--;
        if(mp[v[l]] == 0)
        {
            s.erase(v[l]);
        }
        mn = min(mn,(int)s.size());
        r++,l++;
    }
    return mn;
}


int main() {
int t;cin >> t;
while(t--)
{
int n,r,k;cin >> n >> r >> k;
vi v(n);
for(int i = 0; i < n; i++)cin >> v[i];
int ret = NumOfDisEleINWindWithSzK(v,k);
cout << ret <<el;
}

  return 0;
}





