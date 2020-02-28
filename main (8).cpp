/******************************************************************************
Code mẫu: Quản lý danh bạ

*******************************************************************************/
#include <iostream>
#include <fstream>
using namespace std;
#include <stdlib.h>
/*
Cau truc du lieu cua chuong trinh
*/
#define MAX 200

char ten[MAX][50]; //Mang hai chieu luu tru ten nguoi toi da MAX nguoi, moi ten nguoi dai khong qua 50 ki tu
char sdt[MAX][11]; //Mang hai chieu luu tru so dien thoai, toi da MAX nguoi, moi sdt dai khong qua 11 ki tu
int N; //Luu tru so nguoi danh ba dang qua ly

int main()
{	
	N = 0; //Mac dinh khi khoi dong khong co nguoi nao trong danh ba
	
	/*
	Doc du lieu tu file danhba.txt
	*/

	fstream fin("danhba.txt");
	fin>>N;
	char temp[100];
	fin.getline(temp, 100);
	
	for(int i = 0; i<N; i++)
	{
		fin.getline(ten[i], 50);
		fin.getline(sdt[i], 11);
	}
	fin.close();
	//-------------------------------
	
	/*
	Xu ly thuc don
	*/
	int chon;
	do
	{
		cout<<"\t\t\tQUAN LY DANH BA\n";
		cout<<"\t\tViet boi: Nguyen Duc Dan\n";
		cout<<"\t\tVersion: TLU.DanhBa.1.0\n";
		cout<<"\t1. Them lien he\n";
		cout<<"\t2. Hien thi toan danh ba\n";
		cout<<"\t3. Sua lien he\n";
		cout<<"\t4. Xoa lien he\n";
		cout<<"\t5. Tim lien he\n";
		cout<<"\t0. Thoat\n";
		cout<<"\tMoi chon chuc nang: ";		
		cin>>chon;
		/*
		Xu ly chon thi lam gi
		*/
		if (chon == 1)
		{
			cout<<"Moi nhap ten: ";
			cin.ignore();
			cin.getline(ten[N], 50);
			
            cout<<"Moi so dien thoai: ";
			cin.getline(sdt[N], 11);			
			N++;
		}
		else if (chon == 2)
		{
			cout<<"Danh ba la: \n";
			cout<<"STT\tTen\t\tSo DT\n";
			for(int i = 0; i<N; i++)
			{
				cout<<i+1<<"\t"<<ten[i]<<"\t\t"<<sdt[i]<<endl;
			}
		}
		else if (chon == 3) //Sửa liên hệ
		{
		    //B1. Nhập tên cần sửa: char ht[30]
		    //B2. NHập số điện thoại mới: dt[10]
		    //B3. Duyệt mảng ten[MAX][50]
		    //B3.1. Nếu ten[i]==ht ( gợi ý: strcmp(ten[i],ht)
		    //B3.1.1. Gán sdt[i] = dt; 
		    //B4. Kết thúc
		}
		else if (chon == 4) //Xóa lên hệ
		{
		    //B1. Nhập tên cần xóa: char ht[30]
		    //B2. Duyệt mảng ten[MAX][50]
		    //B2.1. Nếu ten[i]==ht ( gợi ý: strcmp(ten[i],ht)
		    //B2.1.1. Cho j = i -> N  
		    //B2.1.1.1. ten[j] = ten[j+1]; 
		    //B2.1.1.2. sdt[j] = ten[j+1];
		    //B2.1.1.3. N = N -1; //Số danh bạ giảm đi 1 phần tử
		}
		else if (chon == 5) //TÌm liên hệ
		{
		    //B1. Nhập tên cần tìm: char ht[30]
		    //B2. Duyệt mảng ten[MAX][50]
		    //B2.1. Nếu ten[i]==ht ( gợi ý: strcmp(ten[i],ht)
		    //B2.1.1. In ra màn hình sdt[i];
		}
		else if (chon == 0) //Thoát
		{
			/*
			Ghi du lieu xuong file danhba.txt
			*/
			ofstream fout("danhba.txt");
			fout<<N<<endl;
			for(int i = 0; i<N; i++)
			{
				fout<<ten[i]<<endl<<sdt[i]<<endl;
			}
			fout.close();
		}
		if (chon != 0)
		{
			cout<<"Nhan Enter de tro ve: ";
			cin.ignore();
			cin.get();
			system("clear");
		}	
	}while (chon != 0);
	
	return 0;
}



