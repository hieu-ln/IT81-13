//#include<iostream>
//#include<stdio.h>
//using namespace std;
//// cau 3.1 khai bao danh sach
//struct Node
//{
//	int info;
//	Node* link;
//};
//Node* first;
//// cau 3.2 khoi tao danh sach 
//void init()
//{
//	first = NULL;
//}
//// cau 3.3 xuat cac phan tu
//void Process_list()
//{
//	Node* p;
//	p = first;
//	while (p != NULL)
//	{
//		cout << p->info << endl;
//		p = p->link;
//	}
//	cout << endl;
//}
//// 3.4 tim mot phan tu trong danh sach
//Node* search(int x)
//{
//	Node *p = first;
//	while(p != NULL && p->info != x)
//	{
//		p = p->link;
//	}
//	return p;
//}
//// 3.5 them mot phan tu dau vao danh sach
//void insert_first(int x)
//{
//	Node* p;
//	p = new Node;
//	p->info;
//	p->link = first;
//	first = p;
//}
////3.6
//int delete_first()
//{
//	if (first != NULL)
//	{
//		Node* p = NULL;
//		first = first->link;
//		delete p;
//		return 1;
//	}
//	return 0;
//
//}
////3.7 them phan tu vao cuoi danh sach
//void insert_last(int x)
//{
//	Node* p;
//	p = new Node;
//	p->info = x;
//	p->link = NULL;
//	if (first != NULL)
//	{
//		first = p;
//	}
//	else
//	{
//		Node* q = first;
//		while (q->link!=NULL)
//		{
//			q = q->link;
//		}
//		q->link = p;
//	}
//}
////3.8 xoa phan tu vao cuoi danh sach 
//int delete_last()
//{
//	if (first != NULL)
//	{
//		Node* p, * q;
//		q = first;
//		p = first;
//		while (p->link != NULL)
//		{
//			q = p;
//			p = p->link;
//		}
//		if (p != first)
//		{
//			q->link = NULL;
//		}
//		else first = NULL;
//		delete p;
//		return 1;
//	}
//	return 0;
//}
////cau 3.9
//int Searchanddelete(int x)
//{
//	if (first != NULL)
//	{
//		Node* p, * q;
//		p = first;
//		q = first;
//		while (p->info != x && p->link != NULL)
//		{
//			q = p;
//			p = p->link;
//		}
//		if (p != first && p->link != NULL)
//		{
//			if (p->link != NULL)
//				q->link = p->link;
//			else
//				q->link = NULL;
//			delete p;
//			return 1;
//		}
//		else
//			if (p == first)
//			{
//				first = p->link;
//				delete p;
//				return 1;
//			}
//			else
//				if (p->link == NULL && p->info == x)
//				{
//					q->link = NULL;
//					delete p;
//					return 1;
//				}
//	}
//	return 0;
//}
//void swap(Node* a, Node* b)
//{
//	int t = a->info;
//	a->info = b->info;
//	b->info = t;
//}
////cau 3.10
//
//void Sort()
//{
//	Node* p, * q, * min;
//	p = first;
//	while (p != NULL)
//	{
//		min = p;
//		q = p->link;
//		while (q != NULL)
//		{
//			if (q->info < min->info)
//				min = q;
//			q = q->link;
//		}
//		swap(min, p);
//		p = p->link;
//	}
//}
//void SortDesc()
//{
//	Node* p, * q, * min;
//	p = first;
//	while (p != NULL)
//	{
//		min = p;
//		q = p->link;
//		while (q != NULL)
//		{
//			if (q->info > min->info)
//				min = q;
//			q = q->link;
//		}
//		swap(min, p);
//		p = p->link;
//	}
//}
//int main()
//{
//	int choice = 0;
//	int x, i;
//	Node* p;
//	system("cls");
//	cout << "---------------BAI TAP 3, CHUONG 2, DANH SACH LIEN KET DON---------" << endl;
//	cout << "1.Khoi tao DSLK DON rong" << endl;
//	cout << "2.Them phan tu vao dau DSLK DON" << endl;
//	cout << "3.Them phan tu vao cuoi DSLK DON" << endl;
//	cout << "4.Xoa phan tu vao dau DSLK DON" << endl;
//	cout << "5.Xoa phan tu vao cuoi DSLK DON" << endl;
//	cout << "6.Xuat DSLK DON" << endl;
//	cout << "7.Tim mot phan tu gia tri x trong DSLK DON" << endl;
//	cout << "8.Tim phan tu voi gia tri x va xoa no neu co" << endl;
//	cout << "9. Sap xep DSLK DON tang dan" << endl;
//	cout << "10. Sap xep DSLK DON giam dan" << endl;
//	cout << "11.Thoat" << endl;
//	do
//	{
//		cout << "\nVui long chon so de thuc hien: ";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			Init();
//			cout << "Ban vua khoi tao thanh cong!\n";
//			break;
//		case 2:
//			cout << "Vui long nhap gia tri x=";
//			cin >> x;
//			Insert_first(x);
//			cout << "Danh sach sau khi them la: ";
//			Process_list();
//			break;
//		case 3:
//			cout << "Vui long nhap gia tri x= ";
//			cin >> x;
//			Insert_last(x);
//			cout << "Danh sach sau khi them la: ";
//			Process_list();
//			break;
//		case 4:
//			i = Delete_first();
//			if (i == 0)
//				cout << "Danh sach rong, khong the xoa! " << endl;
//			else
//			{
//				cout << "Da xoa thanh cong phan tu dau cua DSLK DON! " << endl;
//				cout << "Danh sach sau khi xoa la:";
//				Process_list();
//			}
//			break;
//		case 5:
//			i = Delete_last();
//			if (i == 0)
//				cout << "Danh sach rong, khong the xoa! " << endl;
//			else
//			{
//				cout << "Da xoa thanh cong phan tu cuoi cua DSLK DON! " << endl;
//				cout << "Danh sach sau khi xoa la:";
//				Process_list();
//			}
//			break;
//		case 6:
//			cout << "Danh sach hien tai la:";
//			Process_list();
//			break;
//		case 7:
//			cout << "Vui long nhap gia tri can tim x=";
//			cin >> x;
//			p = Search(x);
//			if (p != NULL)
//			{
//				cout << "Tim thay phan tu co gia tri x=" << x << endl;
//			}
//			else
//				cout << "Khong tim thay phan tu co gia tri x=" << x << "!!" << endl;
//			break;
//		case 8:
//			cout << "Vui long nhap gia tri can tim x=";
//			cin >> x;
//			i = Searchanddelete(x);
//			if (i == 1)
//			{
//				cout << "Tim thay x=" << x << " va da xoa thanh cong : " << endl;
//				cout << "Danh sach sau khi xoa la: ";
//				Process_list();
//			}
//			else
//				cout << "Khong tim thay phan tu co gia tri x=" << x << " !!" << endl;
//			break;
//		case 9:
//			Sort();
//			cout << "Danh sach sau khi sap xep tang dan la: ";
//			Process_list();
//			break;
//		case 10:
//			SortDesc();
//			cout << "Danh sach sau khi sap xep giam dan la: ";
//			Process_list();
//			break;
//		case 11:
//			cout << "Goodbye!" << endl;
//			break;
//		default:
//			break;
//		}
//	} while (choice != 11);
//	system("Pause");
//	return 0;
//}