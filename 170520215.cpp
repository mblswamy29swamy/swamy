#include<bits/stdc++.h>
using namespace std;
clas Solution {
public:
int setKthBit(int N,int K)
{
return ((1 << K) | N);
}
};
int main()
{
int t;
cin >> t;
while (t--)
{
int N,K;
cin >> N >> K;
Solution ob;
int ans = ob.setKthBit(N,K);
cout << ans << end1;
}
return 0;
}