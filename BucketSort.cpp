#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void bucketSort(float arr[],int size)
{
    //step 1 create bucket of size n
    vector<vector<float>> bucket(size,vector<float> ());

    // step 2: Inserting element into buckets
    for(int i = 0;i < size;i++)
    {
        int index = arr[i]*size;
        bucket[index].push_back(arr[i]);
    }

    //step 3:Sorting individual buckets
    for(int i = 0;i < size;i++)
    {
        if(!bucket[i].empty())
        {
            sort(bucket[i].begin(),bucket[i].end());
        }
    }

    //step 4:Combining elements from buckets
    int k = 0;
    for(int i = 0;i < size;i++)
    {
        for(int j = 0;j < bucket[i].size();j++)
        {
            arr[k++] = bucket[i][j];
        }
    }

}
int main ()
{
    int n;
    float arr[] = {0.13,0.45,0.12,0.75,0.63,0.85,0.39};
    n = sizeof(arr)/sizeof(arr[0]);

    bucketSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}