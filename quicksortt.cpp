//   ------------ Quick sort in c++ --------------
//          Author- Pawan Mishra (Btech 3rd Yr, CSE, KNIT Sultanpur)

#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll sizee;

int partitionn(ll arr[], ll lb, ll ub)
{
    ll pivot= arr[ub];
    ll lp= lb-1;
    for(ll i=lb;i<ub;i++)
    {
        if(arr[i]<pivot)
        {
            lp++;
            swap(arr[lp], arr[i]);
        }
    }
    swap(arr[++lp], arr[ub]);
    return lp;
}
void quickSort(ll arr[], ll lb, ll ub)
{
    if(lb<ub)
    {
        ll q= partitionn(arr, lb, ub);
        quickSort(arr, lb, q-1);
        quickSort(arr, q+1, ub);
    }
}

int main()
{
    cin>>sizee;
    ll arr[sizee+1];
    for(ll i=0;i<sizee;i++)
    {
        cin>>arr[i];
    }
    //ll arr[]={34, 23, 65, 90, 32, 12, 2, 45, 98, 76, 89, 0, 43, 98};
    //sizee= sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, sizee-1);
    //sizee= sizeof(arr)/sizeof(arr[0]); //value of sizee not modified, unlike heap sort
    for(ll i=0;i<sizee;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}

