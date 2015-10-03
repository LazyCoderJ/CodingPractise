#include<iostream>

using namespace std;




/*
Using tabulation method
*/
int findLongestIncSub(int *array,int n)
{

    int *max= new int[n]();
    max[n-1]=1;
    int j=0;
    int temp1,temp2;
    for(int i=n-2;i>=0;i--)
    {
        j=i+1;

        while(j<n && array[i]>array[j])j++;

        if(j==n)
        {

            temp1=1;
        }
        else
        {
            temp1=max[j]+1;

        }
        max[i]=max[i+1]>temp1?max[i+1]:temp1;
        cout<<i<<":"<<max[i]<<endl;
    }
    return max[0];

}

int main()
{
    int array[]={10, 22, 9, 33, 21, 50, 41, 60, 80 };
    cout<<findLongestIncSub(array,9);

}
