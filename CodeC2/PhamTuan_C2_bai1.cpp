//#include <iostream>
//using namespace std;\
//// khai bao cau truc
//#define Max 100
//int a[Max];
//int n;
//// 1.2 thu tuc nhap danh sach
//void input(int a[], int &n)
//{
//	cout << " nhap so luong phan tu ban muon n = : ";
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cout << "a[" << i + 1 << "]";
//		cin >> a[i];
//	}
//}
//// 1.3 thu tuc xuat danh sach
//void output(int a[], int n)
//{
//	cout << " danh sach ban da nhap la :" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cout << "a[" << i + 1 << "] : = " <<a[i]<<endl;
//	}
//}
////1.4 Tim mot phan tu
//int search(int a[],int n,int x)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i]==x)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
////1.5 them mot phan tu vao cuoi danh sach
//int insert(int a[], int &n, int x)
//{
//	if (n < Max)
//	{
//		a[n] = x;
//		n++;
//		return 1;
//	}
//	else
//		return 0;
//}
////1.6 xoa mot phan tu cuoi danh sach 
//int delete_last (int a[], int &n)
//{
//	if (n > 0)
//	{
//		n--;
//		return 1;
//	}
//	return 0;
//}
////1.7 xoa vi tri x
//int delete_x(int a[], int& n, int i)
//{
//	if (i>=0 && i-1<n )
//	{
//		for (int j=i-1; j < n-1; j++)
//		{
//			a[j] = a[j + 1];
//		}
//		n--;
//		return 1;
//	}
//	return 0;
//}
//// 1.8 tim va xoa phan tu do
//int search_delete(int a[], int& n, int x)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i-1] == x)
//		{
//			delete_x(a, n, i);
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char tt;
//	int chon, x, y;
//	system("cls");
//	cout << "--------nhap cu phap muon thuc hien--------" << endl;
//	cout << " 0. Thoat " << endl;
//	cout << " 1. nhap danh sach " << endl;
//	cout << " 2. xuat danh sach " << endl;
//	cout << " 3. tim x" << endl;
//	cout << " 4. them mot phan tu vao cuoi danh sach " << endl;
//	cout << " 5. xoa mot phan tu cuoi danh sach " << endl;
//	cout << " 6. xoa phan tu o vi tri i " << endl;
//	cout << " 7. tim va xoa phan tu " << endl;
//	
//	do
//	{
//		cout << " ban chon : ";
//		cin >> chon;
//		switch (chon)
//		{
//		case 0:
//			return 1;
//			break;
//		case 1:
//			input(a, n);
//			break;
//		case 2:
//			output(a, n);
//			break;
//		case 3:
//			cout << " nhap so ban muon tim x = ";
//			cin >> x;
//			if (search(a, n, x))
//			{
//				cout << " x co trong danh sach " << endl;
//			}
//			else
//				cout << " x khong co trong danh sach " << endl;
//			break;
//		case 4:
//			cout << " nhap so ban muon them : ";
//			cin >> y;
//			if (insert(a, n, y))
//			{
//				cout << " them thanh cong !"<<endl;
//			}
//			else
//				cout << " them that bai :("<<endl;
//			break;
//		case 5:
//			system("cls");
//			if (delete_last(a, n))
//			{
//				cout << " xoa thanh cong "<<endl;
//			}
//			cout << " xoa khong thanh cong ";
//			break;
//		case 6:
//			int b;
//			cout << " nhap vi tri ban muon xoa : ";
//			cin >> b;
//			if (delete_x(a, n, b))
//			{
//				cout << " xoa thanh cong "<<endl;
//				output(a, n);
//			}
//			else
//				cout << " xoa khong thanh cong "<<endl;
//			break;
//		case 7:
//			int x1;
//			cout << " nhap phan tu ban muon xoa ";
//			cin >> x1;
//			if (search_delete(a, n, x1))
//			{
//				cout << " xoa thanh cong !";
//			}
//			else
//				cout << " xoa khong thanh cong ";
//			break;
//		default:
//			cout << " vui long chon lai tu 0-7 " << endl;
//			break;
//		}
//		cout << " ban muon tiep tuc y/n";
//		cin >> tt;
//	} while (tt=='y'||tt=='Y');
//	system("pause");
//	return 0;
//
//}