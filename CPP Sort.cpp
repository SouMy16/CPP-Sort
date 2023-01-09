#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {5,4,6,3,8,2,1,9,7,0};
    sort(arr.begin(), arr.end());
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
