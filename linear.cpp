#include<iostream>
using namespace std;
int search(int a[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
            return i;
    }
    return -1;    

}

int main()
{
    int n;
    cout<<"--LINEAR SEARCH--"<<endl;
    cout<<"Enter the numberr of elements:"<<endl;
    cin>>n;
    cout<<"Eneter the elemenets:"<<endl;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cout<<"Enetr the search element:"<<endl;
    cin>>x;
    int result=search(a,n,x);
    if(result==-1)
        cout<<"Element not present";
    else
    {
        cout<<"Element present at index "<<result;
    }
    return 0;
        
}