#include <iostream>
using namespace std;
struct Node
{
	int info;
	Node *previous, *next;
};
Node *first, *last;
void init()
{
	first = NULL;
	last = NULL;
}
void Process_list()
{
	Node *p;
	p = first;
	while(p!=NULL)
	{
		cout << p->info << "\t";
		p = p->next;
	}
}
void Insert_first(int x)
{
	Node*p;
	p = new Node;
	p->info = x;
	p->next = first;
	p->previous = NULL;
	if(first != NULL)
		first->previous = p;
	else
		last = p;
	first = p;
}
int main()
{
	int x, t, chon;
	Node *tmp;
	init();
	while(true)
	{
		cout << endl;
		cout << "Nhap chon:\n"
			 << "0. Thoat\n"
			 << "1. Them phan tu vao dau danh sach\n"
			 << "2. Xuat danh sach\n"
			 << "Chon: ";
		cin >> chon;
		switch(chon)
		{
		case 0:
			return 1;
			break;
		case 1:
			cout << "Nhap gia tri muon them: ";
			cin >> x;
			Insert_first(x);
			cout << "Them thanh cong\n";
			break;
		case 2:
			cout << "Danh sach: \n";
			Process_list();
			break;
		}
	}
	return 0;
}