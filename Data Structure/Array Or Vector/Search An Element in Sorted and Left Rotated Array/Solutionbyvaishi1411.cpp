#include <bits/stdc++.h>
using namespace std;

int rotate(int v[], int n);
int is_search(int v[],int n , int );

int main()
{ 
	int n,i=0,item,res;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int *shi= new int [n]; 
	cout<<"Enter the elements of an array: ";
	for(i=0;i<n;i++) 
	{ 
	  cin>>shi[i];
	}  

		 sort(shi,shi+n); 
		cout<<endl;
		
		 rotate(shi,n); 
		 cout<<"Sorting and rotating of array done!!\n";
		
			 cout<<"Enter the element to be searched: ";
			 cin>>item; 
			 res=is_search(shi,item,n);
			 if(res==1) 
			   cout<<"Found!";
			 else 
			   cout<<"Not found!";
   
    return 0;
} 
 
 int rotate(int v[], int n) 
{  int i=0,j=n-1,temp; 
		   while(i<j) { 
		     temp=v[i]; 
		     v[i]=v[j];
		     v[j]=temp;
		     i++; 
		     j--;
   }
 
} 
   int is_search(int v[],int item,int n) { 
           int res;
                 
				 for(int i=0;i<n;i++){ 
                    if(v[i]==item) 
                            res=1; 
	                }
					 
	 return res;
   }
