
#include<bits/stdc++.h>
using namespace std;


int arr[100];

void maxheapify(int i,int n){
    int l = 2*i+1,  r = 2*i+2, largest =i;
    if(l<= n&& arr[l] > arr[i]){
        largest = l;
    }
    if(r<= n && arr[r] > arr[largest])
        largest = r;

    if(largest != i){
        swap(arr[i],arr[largest]);
        maxheapify(largest,n);
    }
}


void build_maxheap(int n){

    int i;
    for(i = (n/2)-1;i>=0;i--){
        maxheapify(i,n);
    }
}


void heap_sort(int n){
        int hsize = n-1;
        for(int i = n-1;i>0;i--){
            swap(arr[0],arr[i]);
            hsize-= 1;
            maxheapify(0,hsize);
        }



}


int main()
{

    int n;
    cin >> n;
    for(int i =0; i<n; i++)
        cin >> arr[i];
    build_maxheap(n);
    heap_sort(n);

    for(int i =0; i<n; i++)
        cout << arr[i] << " ";

    return 0;
}
