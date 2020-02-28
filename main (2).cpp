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
int Tinhtong(int a, int b);//Khai báo hàm nguyên mẫu
int main()
{
    cout<<"Tong là: "<<Tinhtong(3,4)<<endl;//Lời gọi hàm 
    int t = Tinhtong(500,100) + 200; //Lời gọi hàm 
    cout<<t<<endl;

}
int tinhtich(float a,float b)
int main()
{
    cout<<"tich la: "<<tinhtich(2,23)<<endl;
}
int Tinhtong(int a, int b)//Định nghĩa hàm (viết code)
{
    return a+b;
}
int tinhtich(float a,float b){
    return a*b;
}
//12 phút, sau khi xong raise hand để giá viên biết
//Bài 5. Viết hàm tính tích hai số thực
//Bài 6. Viết hàm tính tổng các số từ 1 đến n 
//Bài 7. Viết hàm kiểm tra 1 số nguyên có phải số chẵn không??? (true hoặc false)
