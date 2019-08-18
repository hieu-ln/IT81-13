//#include<iostream>
//using namespace std;
//#define max 100
//int a[max];
//int sp;
//// khoi tao stack
//void init(int a[], int &sp)
//{
//	sp = -1;
//}
//// Kiem tra stack rong hay khong
//int isEmpty(int a[], int &sp)
//{
//	if (sp == -1)
//		return 1;
//	return 0;
//}
//// them 1 node vao strack them dau
//int push(int a[], int& sp, int &x)
//{
//	if (sp <= max - 1)
//	{
//		a[++sp] = x;
//		return 1;
//	}
//	return 0;
//}
//// lay mot phan tu trong strack lay dau 
//int pop(int a[], int& sp, int &x)
//{
//	if (sp != -1)
//	{
//		x = a[sp--];
//		return 1;
//	}
//	return 0;
//
//}
//// Ham chuyen co so 10 sang cac he 2 16 8
//void convert(int so, int cosocandoi)
//{
//	init(a, sp);
//	while (so != 0)
//	{
//		int du = so % cosocandoi;
//		if (push(a, sp, du))
//		{
//			so /= cosocandoi;
//		}
//		else
//			break;
//	}
//	while (!isEmpty(a, sp))
//	{
//		int x;
//		pop(a, sp, x);
//		if (x < 10)
//			cout << x;
//		else
//		{
//			if (x == 10)
//			{
//				cout << "A";
//			}
//			else if (x == 11)
//			{
//				cout << "B";
//			}
//			else if (x == 12)
//			{
//				cout << "C";
//			}
//			else if (x == 13)
//			{
//				cout << "D";
//			}
//			else if (x == 14)
//			{
//				cout << "E";
//			}
//			else if (x == 15)
//			{
//				cout << "F";
//			}
//		}
//	}
//}
//int main()
//{
//	int coso;
//	int so;
//	cout << " nhap so muong chuyen(10) : " << endl;
//	cin >> so;
//	cout << " nhap he ban muon chuyen (2,16,8): " << endl;
//	cin >> coso;
//	cout << "Ket qua : ";
//	convert(so, coso);
//	system("pause");
//	return 0;
//
//
//}