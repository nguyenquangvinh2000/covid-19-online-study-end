/******************************************************************************
VD3. Viết hàm nhập vào mảng gồm n phần tử nguyên
Tên hàm: Nhapmang
Input: int a[], int n;
Output: void - Không trả về giá trị 
VD4. Viết hàm in ra mảng gồm n phần tử nguyên
Tên hàm: Inmang
Input: int a[], int n;
Output: void - Không trả về giá trị 
*******************************************************************************/
#include <iostream>
using namespace std;
void Nhapmang(int a[], int n);
void Inmang(int a[], int n);
int main()
{
    int b[100],c[50],m=3;
    Nhapmang(b,m);
    Nhapmang(c,5);
    cout<<endl;
    Inmang(b,m);
    Inmang(c,5);
    return 0;
}
void Nhapmang(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
}
void Inmang(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
//Bài 8. Viết hàm tìm vị trí lớn nhất trong mảng nguyên a gồm n phần tử
//Bài 9. Viết hàm đếm số phần tử chẵn trong mảng nguyên a gồm n phần tử 
//Bài 10. Viết hàm nhập n số nguyên, sau đó ghi vào file songuyen.txt
/* songuyen.txt
7
2 3 4 6 2 1 6 
*/
//Bài 11. Viết hàm đọc và lưu các số nguyên trong file songuyen.txt ra mảng a[1000]. 
//Sau đó in mảng a ra màn hình
