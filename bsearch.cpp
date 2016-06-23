#include<iostream>
using namespace std;
int main()
{


	int n,first,last,mid,s;
     cout<<"enter the size\n";
     cin>>n;
     int a[n];
     cout<<"\nenter the array elements\n"; 
     for(int i=0;i<n;i++)
      cin>>a[i];
     first=0;
     last=n-1;
      
     cout<<"etne rthe search element\n";
    cin>>s;
      for(int i=0;i<n;i++)
{
    mid=(first+last)/2;
       if(a[mid]==s)
     {
       cout<<"found @"<<mid<<"th postion\n";
       return 0;
     }
    else if(a[mid]>s)
    last=mid-1;
    else 
    first=mid+1;
}
cout<<"not found";
    
      
       
      
//	return 0;
}

