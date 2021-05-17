#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
int maxConsecutiveOnes(int x)
{
int count=0;
while(x!=0)
{
x=(x & (x << 1));
count++;
}
return count;
}
};
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
Solution obj;
cout<<obj.maxConsecutiveOnes(n)<<end1;
}
return 0;
}