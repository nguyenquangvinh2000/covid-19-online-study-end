//ham la gi
//- xac dinh tham so truyen vao ham
//-ham co gia tri tra ve ko
/*VD1:ham tinh tong hai so nguyen
input:int a,b       2 so nguyen a,b
output:a+b
*/
#include <iostream>

using namespace std;
float tinhtich(float a,float b);// khai bao ham nguyen mau
int tinhtong(int n);
bool ktchanle(int m);
int main()
{
    cout<<"tich la:"<<tinhtich(5.5,8.8)<<endl;// loi goi ham
    int t = tinhtich(12.5,10.5);
    cout<<t<<endl;
    cout<<"tong tu 1 den 10:"<<tinhtong(10)<<;
    cout<<"ktchan le :"<<ktchanle(23);
    return 0;
}
float tinhtich(float a,float b)//dinh nghia ham
{
   return a*b; 
}
int tinhtong(int n)
{
    int s=0;
    for(int i =1;i<=n;i++)
    {
        s=s+i;
    }
    return s;
}
bool ktchanle(int m)
{
    if(m%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
//12 phút, sau khi xong raise hand để giá viên biết
//Bài 5. Viết hàm tính tích hai số thực
//Bài 6. Viết hàm tính tổng các số từ 1 đến n 
//Bài 7. Viết hàm kiểm tra 1 số nguyên có phải số chẵn không??? (true hoặc false)

