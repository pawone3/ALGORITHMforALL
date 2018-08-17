#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll sizee;

void heapify(ll arr[], ll i)
{
    ll lc=2*i+1, rc= 2*i+2;
    ll large =i;
    if(lc<=sizee && arr[lc]>arr[large])
    {
        large=lc;
    }
    if(rc<=sizee && arr[rc]>arr[large])
    {
        large=rc;
    }
    if(large!= i)
    {
        swap(arr[i], arr[large]);
        heapify(arr, large);
    }
}
void buildHeap(ll arr[])
{
    for(ll i=sizee/2;i>=0;--i)
        heapify(arr, i);

}
void heapSort(ll arr[])
{
    ll temp=sizee;
    buildHeap(arr);
    for(ll i=temp;i>=0;i--)
    {

        swap(arr[0], arr[i]);
        //cout<<arr[i]<<" ";
        //temp--;
        sizee--;
        heapify(arr, 0);
    }
}

int main()
{
    ll arr[]={1, 10, 21, 6, 57, 92, 51, 3, 2, 91, 30, 0, 33, 21, 54, 32};
    sizee=sizeof(arr)/sizeof(arr[0]);
    //cout<<sizee<<endl;
    heapSort(arr);
    sizee=sizeof(arr)/sizeof(arr[0]);
    for(ll i=0;i<sizee;i++)
        cout<<arr[i]<<"\t";
    return 0;
}
