#include<iostream>
using namespace std;
class binsearch {
    public:
    int binarysearch(int *a,int n,int key){
    int low=0,mid,high;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==key)
         return mid;
        else if(a[mid]<key)
         low=mid+1;
        else
         high=mid-1;
    }
    return -1;
    }
};
int main(){
    binsearch b;
    int a[10],key,n,i;
    cout<<"enter number of elements:";
    cin>>n;
    cout<<"enter elements";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter element to search";
    cin>>key;
    int index=b.binarysearch(a,n,key);
    if(index==-1)
    cout<<"not found";
    else
    cout<<"element found at "<<index;
    return 0;
}
