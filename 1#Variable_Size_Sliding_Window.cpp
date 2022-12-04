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



ll variableSizeSlidingWindow(const vector<int> &v, int k)
{
    ll mn = LLONG_MAX;
    ll sum = 0;
    int l = 0;
    int r = 0;
    int n = v.size();
    while(l < n)
    {
        while(r < n && sum + v[r] <= k)
        {
            sum+=v[r++];
        }
        mn = min(mn,(ll)(r-l+1));
        sum-=v[l++];
    }

    return mn;
}

int main() {
     SUPERPOWER;
     // freopen("popcorn.in", "r", stdin);
int t = 1;//cin >> t;
while(t--)
{
    //write the code here
    //int n;cin >> n;
   vi v = {1,2,3,4,5,4};
   cout << fixedSizeSlidingWindow(v,3) << el; // the original sum
   cout << variableSizeSlidingWindow(v,9)<<el; // 2steps

}
  return 0;
}





