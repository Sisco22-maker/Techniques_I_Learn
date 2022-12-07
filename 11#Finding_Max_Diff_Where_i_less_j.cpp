/*
(اللهم صلْ وسلم وزد وبارك على سيدنا محمد )

꧁IslaM_SobhY꧂

 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define  el "\12"
int Finding_Max_Diff_Where_i_less_j(int arr[],int n)
{
    int l = 0;
    int r = 0;
    int mx = 0;
    while(r < n)
    {
        if(arr[l] < arr[r])
            mx = max(mx,arr[r] - arr[l]);
            else
            l = r;
            r++;
    }
    return mx;
}
int main() {
int n = 6;
int arr[n] = {7,1,5,3,6,4};
cout << Finding_Max_Diffrence_Between_Two_Elements(arr,n);
  return 0;
}





