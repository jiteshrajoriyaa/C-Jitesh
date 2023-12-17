#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,4,5,6,7,8,9};


    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<n<<endl;
    int ansarr[n];

    int k=2;
    // cin>>k;
    k=k%n;

    int j=0;
    for(int i=n-k;i<n;i++){

        ansarr[j++]=arr[i];
    }

    for(int i=0;i<n-k;i++){

        ansarr[j++]=arr[i];
    }

    for(int i=0;i<n;i++){

        cout<<ansarr[i]<<" ";
    }
    cout<<endl;
    // ReverseRoataion
    int ansarr2[n];
    j=n-k;
    for(int i=0;i<k;i++){

        ansarr2[j++]=ansarr[i];
    }
    j = 0;
    for(int i=k;i<n;i++){

        ansarr2[j++]=ansarr[i];
    }

    for(int i=0;i<n;i++){

        cout<<ansarr2[i]<<" ";
    }

    cout<<endl;

    return 0;
}