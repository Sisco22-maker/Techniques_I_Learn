/*
(اللهم صلْ وسلم وزد وبارك على سيدنا محمد )

꧁IslaM_SobhY꧂

 */
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define ll long long
#define  el "\12"


int MaxFrequantElement(const vi &v, const int &k)
{
    int l = 0, r = l;
    int n = v.size();
    ll res = 0,total = res;
    while(r < n)
    {
      total+=v[r];
      while(v[r]*(r-l+1) > total+k)
      {
          total-=v[l++];
      }
      res = max(res,(ll)(r-l+1));
      r++;
    }
    return res;
}

int main() {

int t = 1;
while(t--)
{
    //write template here
vi v = {1,1,1,2,2,4};
int res = MaxFrequantElement(v,2);
cout << res << el; //will be 4 إن شاء الله تعالى


}
  return 0;
}





