#include<iostream>
using namespace std;

int main()
{
	int n , h ;
	int dem=0 ;
	cout<<"Nhap n :";
	cin>>n;
	h=n;
	while(n>0)
	{
		n=n/10;
		dem++;
	}
	cout<<"So luong chu so cua "<<h<<" la :"<<dem;
	cout << "\nKha dang test chuc nang tren visual studio code 2019" << endl;
	cout << "\nAnh em ma dung git tren visual studio no phe lam nha anh em oi" << endl;
	return 0;
}
