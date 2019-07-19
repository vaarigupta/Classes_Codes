#include<iostream>
#include<cstring>
#define ll long long
using namespace std;
ll a[100005] , freq[100005];
int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll sum =0,mod=0;
        memset(freq, 0, sizeof(freq));
        freq[0] = 1;
        for(int i=0;i<n;i++)
        {
           sum += a[i];
           mod = 0;
           mod = sum%n;
           if(sum<=0)
           {
               mod = (sum+n)%n;
           }
           freq[mod]++;
        }
        ll ans =0;
        for(int i=0;i<n;i++)
        {
            cout<<freq[i]<<" ";
            ll no = freq[i];
            ans += (no*(no-1)/2);
        }
        cout<<endl<<"Ans :"<<ans<<endl;
    }
    return 0;
}

/*

DIVISIBLE SUBARRAYS
You are given N elements, a1,a2,a3�.aN. Find the number of good sub-arrays.
A good sub-array is a sub-array [ai,ai+1,ai+2�.aj] such that (ai+ai+1+ai+2+�.+aj) is divisible by N.

Input Format:
The first line contains the number of test cases T. First line of each test case contains an integer N denoting the number of elements. Second line of each test case contains N integers, a1, a2, a3�.aN, where ai denotes the ith element of the array.

Constraints:
1<=T<=10 1<=N<=10^5 |ai|<=10^9

Output Format
Output a single integer denoting the number of good sub-arrays.

Sample Input
2
5
1 1 1 1 1
5
5 5 5 5 5
Sample Output
1
15

*/

