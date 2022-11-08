/*
(اللهم صلْ وسلم وزد وبارك على سيدنا محمد )

꧁IslaM_SobhY꧂

 */
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<pair<int,int>> vp;
#define SUPERPOWER ios_base::sync_with_stdio(false); cout.tie(0);
#define cin(v) for(auto &i:v)cin>>i
#define cout(v) for(auto &i:v)cout<<i<< " "
#define ll long long
#define  el "\12"


int maxSubString(const vi &v, const int &k)
{
    //special case
    int sum = accumulate(v.begin(),v.end(),0);
    if(sum < k)return -1;
    int l = 0,r = 0;
    int res = 0,s = 0;
    int n = v.size();
    while(r < n)
    {
       s+=v[r];
       while(s > k)
       {
           s-=v[l];
           l++;
            res = max(res,r-l+1);
       }
       if(s == k)
        res = max(res,r-l+1);
       r++;
    }
    return n-res;
}

int main() {
     SUPERPOWER;
     // freopen("popcorn.in", "r", stdin);
int t = 1;cin >> t;
while(t--)
{
    //write the code here
    int n,k;cin >> n >> k;
    vi v(n);
    cin(v);
int x = maxSubString(v,k);
cout << x << el;


}
  return 0;
}





