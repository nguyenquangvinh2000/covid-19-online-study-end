#include<iostream>
#include<fstream>
#define MAX 300
using namespace std;

int main()
{
	char dsht[MAX][30];
	char dsdt[MAX][11];
	int i,n;
	cin>>n;
	cin.ignore();
	//nhap tu ban phim va luu vao mang
	for(i=0;i<n;i++)
	{
		cout<<"Nhap ho ten: ";
		cin.getline(dsht[i],30);
		cout<<"Nhap so dien thoai: ";
		cin.getline(dsdt[i],11);
	}
	//luu tu mang vao file
	ofstream fout("danhba.txt");
	fout<<n<<endl;
	for(int i = 0; i<n; i++)
	{
		fout<<dsht[i]<<endl<<dsdt[i]<<endl;
	}
	fout.close();
	return 0;
}
