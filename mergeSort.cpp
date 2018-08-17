//                ---------------- Merge sort in c++  -----------
//                           Author- PAWAN MISHRA ( Btech CSE 3ᴿᴰ Yr, KNIT Sultanpur )

#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#define ll long long
using namespace  std;
void merge(ll arrLeft[], ll arrRight[], ll arr[], ll larray, ll rarray, ll arrsize)
{
    ll k=0,j=0,i=0;
    while(larray!=0 && rarray!=0)
    {
        if(arrLeft[i]<arrRight[j])
        {
            arr[k]=arrLeft[i];
            k++;i++;
            larray--;
        }
        else
        {
            if(arrLeft[i]>=arrRight[j])
        {
            arr[k]=arrRight[j];
            k++;j++;
            rarray--;
        }
        }
    }
    while(larray!=0)
    {
        arr[k]=arrLeft[i];k++;i++;larray--;
    }
    while(rarray!=0)
    {
        arr[k]=arrRight[j];k++;j++;rarray--;
    }
}

void mergeSort(long long arr[], ll sizee)
{
    if(sizee<2)
        return;
    ll mid=sizee/2;
    ll arrLeft[mid+1],arrRight[sizee-mid+1];
    for(ll i=0;i<mid;i++)
        arrLeft[i]=arr[i];
    for(ll i=mid;i<sizee;i++)
        arrRight[i-mid]=arr[i];
    mergeSort(arrLeft, mid);
    mergeSort(arrRight, sizee-mid);
    merge(arrLeft, arrRight, arr, mid, sizee-mid, sizee);
}

int main()
{
   // long long arr[]={1,7,4,32,9,44,12,56,34};

    ll size;//=sizeof(arr)/sizeof(arr[0]);
     cin>>size;
     ll arr[size+100],i;
     for ( i = 0; i < size; ++i)
     {
         cin>>arr[i];
     }
    //size=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,size);
    for(ll i=0;i<size;i++)
        printf("%lld\t",arr[i]);
    return 0;
}
