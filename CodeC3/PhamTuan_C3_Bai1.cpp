//#include <iostream>
//using namespace std;
//#define MAX 100
//int a[MAX];
//int n;
////1.2
//void input(int a[], int n)
//{
//	if(n<MAX-1)
//	{
//		for(int i = 0; i < n; i++)
//		{
//			cin>>a[i];
//		}
//	}
//}
////1.3
//void output(int a[], int n)
//{
//	for( int i = 0; i  < n ; i++)
//	{
//		cout<<a[i]<<"";
//		cout<<endl;
//	}
//}
////1.4
//void InsertionSort(int a[],int n)
//{
//	int x,i,j;
//	for( int i=1; i<n; i++)
//	{
//		x=a[i];
//		j=i-1;
//		while(0<=j&&x<a[j])
//		{
//			a[j+1]=a[j];
//			j--;
//		}
//		a[j+1]=x;
//	}
//}
////1.5 O(n^2)
//void SelectionSort(int a[] , int n)
//{
//	int min_pos, i, j;
//	for( int i =0 ; i<n-1 ;j++)
//	{
//		min_pos=i;
//		for(j=i+1;j<n;j++)
//			if(a[j]<a[min_pos])
//				min_pos=j;
//		swap(a[min_pos],a[i]);
//	}
//}
////1.6 O(n^2)
//void InterchangeSort(int a[], int n)
//{
//	for(int i=0 ; i<n-1; i++)
//		for(int j=i+1; j<n; j++)
//			if(a[i]>a[j])
//				swap(a[i],a[j]);
//}
////1.7
//void BubbleSort(int a[], int n)
//{
//	for ( int i=0 ; i<n-1; i++)
//		for( int j=n-1; j>i; j--)
//			if(a[j-1]>a[j])
//	swap(a[j],a[j-1]);
//}
////1.8 O(nlogn)
//void QuickSort(int a[], int left, int right)
//{
//	int i,j;
//	left=i;
//	right=j;
//	int x=a[(left-right)/2];
//	while(i<j)
//	{
//		while(a[i]<x)
//			i++;
//		while(a[j]>x)
//			j--;
//		if(i=j)
//		{
//			swap(a[i],a[j]);
//			i++;
//			j--;
//		}
//		if(left<j)
//			QuickSort(a,left,j);
//		if(right>i)
//			QuickSort(a,i,right);
//	}
//}
////1.9
//void shift(int a[], int i ,int n)
//{
//	int j=2*i+1;
//	if(j>=n)
//		return;
//	if(j+1<n)
//		if(a[j]<a[j+1])
//			j++;
//	if(a[i]>=a[j])
//		return;
//	else
//	{
//		int x=a[i];
//		a[i]=a[j];
//		a[j]=x;
//		shift(a,j,n);
//	}
//}
//void HeapSort(int a[], int n)
//{
//	int i=n/2;
//	while(i>=0)
//	{
//		shift(a,i,n-1);
//	}
//	int right=n-1;
//	while(right>0)
//	{
//		swap(a[0], a[right]);
//			right--;
//		if(right>0)
//			shift(a,0,right);
//	}
//}
////1.10
//int Search(int a[], int n, int x)
//{
//	int i=0;
//	while(i<n&&a[i]!=x)
//		i++;
//		if(i<n)
//			return i;
//		return -1;
//}
////1.11
//int Binarysearch(int a[], int n , int x)
//{
//	int left=0, right = n-1 , mid;
//	while(left<right)
//	{
//		mid=(left+right)/2;
//		if(a[mid]==x) 
//			return mid;
//		if(x>a[mid])
//			left=mid+1;
//		else 
//			right=mid-1;
//	}
//	return -1;
//}
//int main()
//{
//	int left, right;
//	int choice;
//	system("cls");
//	
//	cout<<"----------VUI LONG CHON CHUC NANG---------"<<endl;
//	cout<<"0. thoat "<<endl;
//	cout<<"1. Nhap phan tu "<<endl;
//	cout<<"2. Xuat "<<endl;
//	cout<<"3. xap xep InsertionSort  "<<endl;
//	cout<<"4. xap xep SelectionSort  "<<endl;
//	cout<<"5. xap xep InterchangeSort  "<<endl;
//	cout<<"6. xap xep BubbleSort  "<<endl;
//	cout<<"7. xap xep QuickSort  "<<endl;
//	cout<<"8. xap xep HeapSort "<<endl;
//	cout<<"9. tim kiem tuan tu <<"<<endl;
//	cout<<" 10. tim kiem nhi phan <<"<<endl;
//	do
//	{
//		cout<<" Ban Chon : ";
//		cin>>choice;
//		switch(choice)
//		{
//			case 0:
//				return 1;
//				break;
//			case 1:
//				cout<<" Nhap vao so nguyen n cua mang ";
//				cin>>n;
//				input(a,n);
//				break;
//			case 2:
//				cout<<" Mang cua ban la : "<<endl;
//				output(a,n);
//				break;
//			case 3:
//				InsertionSort(a,n);
//			case 4:
//				SelectionSort(a,n);
//			case 5:
//				InterchangeSort(a,n);
//			case 6:
//				BubbleSort(a,n);
//			case 7:
//				QuickSort(a,left,right);
//			case 8:
//				HeapSort(a,n);
//			case 9:
//				int x;
//				cout<<" nhap so ban muon tim vao day : "<<endl;
//				cin>>x;
//				Search(a,n,x);
//			case 10:
//				int x;
//				cout<<" nhap so ban muon tim vao day : "<<endl;
//				cin>>x;
//				Binarysearch(a,n,x);
//			default:
//				cout<<" ban chi duoc nhap tu 1-10"<<endl;
//		}
//		
//	}while(choice!=10);
//	system("pause");
//	return 0;
//
//}