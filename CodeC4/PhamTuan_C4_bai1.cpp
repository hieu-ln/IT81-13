#include<iostream>
using namespace std;
#define count 10
struct Node
{
	int info;
	Node*left;
	Node*right;
};
Node *root;
void tree_empty()
{
	root=NULL;
}
int insert_Node1(Node *p, int x)
{
	if(p->info == x)
		return 0;
	else if(p->info > x)
	{
		if(p->left==NULL)
		{
			Node *y= new Node;
			y->info=x;
			y->left=NULL;
			y->right=NULL;
			p->left = y;
			return 1;
		}
	else
		return insert_Node1(p->left,x);
	}
	else
	{
		if(p->right==NULL)
		{
			Node *y= new Node;
			y->info=x;
			y->left=NULL;
			y->right=NULL;
			p->right = y;
			return 1;
		}
		else
			return insert_Node1(p->right,x);
	}

}
void insert_Node(Node*&p,int x)
{
	if(p==NULL)
	{
		p=new Node;
		p->info=x;
		p->left=NULL;
		p->right=NULL;
	}
	else
	{
		if(p->info==x)
			return;
		else if(p->info>x)
			return insert_Node(p->left,x);
		else 
			return insert_Node(p->right,x);
	}
}
void print( Node *p, int space)
{
	if(p==NULL)
		return;
	space+=count;
	print(p->right,space);
	cout<<endl;
	for( int i = count; i < space ; i++)
		cout<<" ";
	cout<<p->info<<endl;
	print(p->left,space);
}
Node*search(Node *p,int x)
{
	if(p!=NULL)
	{
		if(p->info==x)
			return p;
		else
			if(x>p->info)
				return search(p->right,x);
			else
				return search(p->left,x);
	}
	return NULL;
}
void Process_print()
{
	print(root,0);
}
void duyetNRL(Node*p)
{
	if(p!=NULL)
	{
		cout<<p->info<<" ";
		duyetNRL(p->left);
		duyetNRL(p->right);
	}
}
void duyetLRN(Node*p)
{
	if(p!=NULL)
	{
		duyetLRN(p->left);
		duyetLRN(p->right);
		cout<<p->info<<" ";
	}
}
void duyetLNR(Node *p)
{
	duyetLNR(p->left);
	cout<<p->info<<" ";
	duyetLNR(p->right);

}
int dem(Node*p)
{
	if(p==NULL)
		return 0;
	else
		return 1+dem(p->left)+dem(p->right);
}
int Max(Node*p)
{
	if(p==NULL)
		return INT_MIN;
	else
	{
		while(p->right!=NULL)
			p=p->right;
		return p->info;
	}
}
int Min(Node*p)
{
	if(p==NULL)
		return INT_MIN;
	else
	{
		while(p->left!=NULL)
			p=p->left;
		return p->info;
	}
}
int main()
{
	int choice;
	cout<<"-------BAI TAP THUC HANH CHUONG 4 BAI 1--------"<<endl;
	cout<<"0. thoat"<<endl;
	cout<<"1. khoi tao cay rong"<<endl;
	cout<<"2. them mot phan tu trong cay"<<endl;
	cout<<"3. tim mot phan tu trong cay"<<endl;
	cout<<"4. duyet cay theo NLR"<<endl;
	cout<<"5. duyet cay theo LNR"<<endl;
	cout<<"6. duet cay theo LRN"<<endl;
	cout<<"7. dem so Node "<<endl;
	cout<<"8. tim Node lon nhat"<<endl;
	cout<<"9.tim Node nho nhat "<<endl;
	do
	{
		cout<<" vui long chon ";
		cin>>choice;
		switch(choice)
		{
		case 0:
			return 1;
			break;
		case 1:
			tree_empty();
			cout<<" khoi tao thanh cong "<<endl;
			break;
		case 2:
			int x;
			cout<<" nhap so ban muon them vao cay nhi phan ";
			cin>>x;
			insert_Node(root,x);
			cout<<" gia tri cay nhi phan sau khi them " <<endl;
			Process_print();
			break;
		case 3:
			int y;
			cout<<" nhap gia tri ban muon tim vao day cho tui ";
			cin>>y;
			if(search(root,y)==NULL)
			{
				cout<< " x khong co trong cay nhi phan ";
			}
			else
			{
				cout<<" x co trong cay nhi phan ";
			}
			break;
		case 4:
			duyetNRL(root);
			break;
		case 5:
			duyetLNR(root);
			break;
		case 6:
			duyetLRN(root);
			break;
		case 7:
			cout<<" ket qua la : ";
			dem(root);
			break;
		case 8:
			cout<<" Node lon nhat la "<<Max(root);
		case 9:
			cout<<" Node be nhat la "<<Min(root);
		default:
			cout<<" ban vui long chon tu 0-6"<<endl;
			break;
		}
	}while(choice!=6);
	system("pause");
	return 0;
}