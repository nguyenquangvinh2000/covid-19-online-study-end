/******************************************************************************
Giới thiệu về Hàm
- Xác định tham số truyền vào cho hàm là gì (Input)
- Hàm có giá trị trả về (output) không? Nếu có thì giá trị trả về là gì???
VD1. Viết hàm tính tổng 2 số nguyên
Tên hàm: Tinhtong
Input: int a, b 
Output (Trả về):int a+b 
*******************************************************************************/
#include <iostream>
using namespace std;
int tich(float a,float b);
int tong(int n);
int main()
{
    cout<<"Tich là: "<<tich(3.2,4.5)<<endl;//Lời gọi hàm 
    int t = tich(12.5,10.5);
    cout<<t<<endl;

    return 0;
}
int Tinhtong(int a, int b)//Định nghĩa hàm (viết code)
{
    return a+b;
}
//12 phút, sau khi xong raise hand để giá viên biết
//Bài 5. Viết hàm tính tích hai số thực
//Bài 6. Viết hàm tính tổng các số từ 1 đến n 
//Bài 7. Viết hàm kiểm tra 1 số nguyên có phải số chẵn không??? (true hoặc false)
