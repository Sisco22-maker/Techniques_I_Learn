/*
(اللهم صلْ وسلم وزد وبارك على سيدنا محمد )

꧁IslaM_SobhY꧂

 */
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define cin(v) for(auto &i:v)cin>>i
#define cout(v) for(auto &i:v)cout<<i<< " "
#define ll long long
#define  el "\12"
vector<int> Max_In_Range(const vi &v, const int &n,const int &k)
{
int l = 0,r = 0;
vi out_put;
deque<int> dq;
while(r < n)
{
   // 4 2
//8 7 6 9
    while(!dq.empty() && v[dq.back()] < v[r])
    {
        dq.pop_back();
    }
    dq.emplace_back(r);
    if (l > dq.front())
    {
        dq.pop_front();
    }
    //for(int i = 0; i < dq.size(); i++)cout << dq[i] << " ";
    //cout << el;
    if(r+1 >= k)
    {
        out_put.emplace_back(v[dq.front()]);
        l++;
    }
    r++;
}
return out_put;
}
int main() {
int n,k;cin >> n >> k;
vi v(n);
cin(v);
vi vv = Max_In_Range(v,n,k);
cout(vv);
  return 0;
}





