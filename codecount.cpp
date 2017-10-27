#include <iostream>
using namespace std;
	void printMaxActivities(long long int a[], long long int b[],long long int n)
{
    int i, j;
    i = 0;
    for (j = 1; j < n; j++)
    {   if (b[j] >= a[i])
      {
         
          i = j;
      }
    }
}
int main() {
	long long int v,sum,sum1,sum2=0,sum3,sum4=0,n,i,j,k,m,a[10000],b[10000],temp,temp1;
	cin>>n;
	m=n;
	v=n;
	while(n--)
	{	cin>>a[n];
		cin>>b[n];
	}
/*	for(i=0;i<m;i++)
	{for(j=0;j<m-i;j++)
	{  if(b[j]>b[j+1])
	   { temp=a[j];
	     temp1=b[j];
	     a[j]=a[j+1];
	     b[j]=b[j+1]; 
	     a[j+1]=temp;
	     b[j+1]=temp1;
	     }
	}
	}*/
      printMaxActivities(a, b, m);
	k=0;
//	sum=b[k]-a[k];
	while(k<v)
	{   
		if(k==0)
		{cout<<(b[k]-a[k]);
          return 0;
}		
else
		{   /*sum=b[k]-a[k];
			sum2=b[k-1]+sum2;
			sum3=sum2+sum;
			sum4=b[0];
			sum4=sum4+sum3;
		*/
		sum=sum+b[k];
		
		
		}
	}
	cout<<(sum+b[0])/m;
	return 0;
}