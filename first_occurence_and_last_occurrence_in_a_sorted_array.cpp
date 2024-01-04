#include<iostream>
using namespace std;

int firstOccurence(int a[],int n,int key)
{
    int start=0;
    int end=n-1;
    int ans=-1;

    while(start<=end)
    {
        int mid=start+(end-start)/2;


        if(a[mid]==key)
        {
            ans = mid;
            end=mid-1;
        }
        else if(key>a[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return ans;
}

int lastOccurence(int a[],int n,int key)
{
    int start=0;
    int end=n-1;
    int ans = -1;

    while(start<=end)
    {
        int mid=start+(end-start)/2;


        if(a[mid]==key)
        {
            ans = mid;
            start=mid+1;

        }
        else if(key>a[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return ans;
}

int main()
{
    int even[9]={1,2,3,3,3,3,3,3,5};

    cout<<"the first occurence of 3 is at the index " << firstOccurence(even,9,3) << endl;
    cout<<"the last occurence of 3 is at the index " << lastOccurence(even,9,3) << endl;

    cout<<"the total number of occurence of 3 in an array is:"<<(lastOccurence(even,9,3)-firstOccurence(even,9,3))+1<<endl;

    return 0;
}


