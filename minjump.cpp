#include <iostream>
using namespace std;
int minval = 99999;
int minjump(int arr[],int l,int h)
{

if(l==h)
    return 0;

if(arr[l] == 0)
    return minval;

int mval =minval;
for(int i = l+1;i<= l + arr[l] && i<=h ;i++)
        {
            int jumps = minjump(arr,i,h);
             if(jumps != minval && jumps+1 <mval)
                mval = jumps+1;
        }

    return mval;
}

int main() {
	int T;
	cin>>T;
	while(T--)
    {
        int N;
        int arr[100];
        cin>>N;
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        int x =minjump(arr,0,N-1);
        //cout<<"x =" <<x<<endl;
        if(x == minval)
            cout<<"-1"<<endl;
        else
        {
           cout<<x<<endl;
        }

    }
	return 0;
}
