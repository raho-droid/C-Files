#include<iostream>
#include<cstdlib>

using namespace std;

void swap(int *x, int *y)
{
	int temp; 
	temp= *x;
	*x = *y;
	*y = temp;
}

int partition(int a[],int low,int high)
{
	int pivot=high,curr=low;
 
	for(int i=low;i<high;i++)
	{
		if(a[i]<a[pivot])
		{
			swap(&a[i],&a[curr]);
			curr++;
		}
	}
	
	swap(&a[pivot],&a[curr]);
 
	return curr;
}

void quickSort(int a[],int low,int high) 
{ 
	if (low<high) 
	{ 
		
		int pivpos=partition(a,low,high); 


		quickSort(a,low,pivpos-1); 
		quickSort(a,pivpos+1,high); 
	} 
} 


int main(){
	
	
	cout<<"Diziniz kac elemanli olacak ?"<<endl;	
	int n;
	cin>>n;
	
	int array[n];
	
	cout<<"Elemanlari giriniz. : "<<endl;
	
		for(int i=0;i<n;i++)
		{
			cin>>array[i];
		}
		
		quickSort(array,0,n-1);
		
		cout<<"Siralama : ";
		for(int j=n-1;j>0;j--)
		{
			cout<<array[j]<<" ";
		}
	
	
	return 0;
}
