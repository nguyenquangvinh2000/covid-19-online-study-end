#include <iostream>
#include<fstream>
using namespace std;
void Nhapmang(int a[], int n);
void Inmang(int a[], int n);
long vitrimax(int a[],int n);
long demsochan(int a[],int n);
long ghivaofile(int n);
long inmangtxt(int a[],int n);
int main()
{   
    int a[100],n;
    cin>>n;
    // Nhapmang(a,n);
    // cout<<"vi tri: "<<vitrimax(a,n)<<endl;
    // cout<<"so phan tu chan: "<<demsochan(a,n);
    ghivaofile(n);
    
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
//bai 8
long vitrimax(int a[],int n){
    long max = a[0],vitri = 1;
    for(int i = 1;i < n;i++){
        if(a[i] > max){
            max = a[i];
            vitri = i + 1;
        }
    }
    return vitri;
}
//nai 9
long demsochan(int a[],int n){
    long dem = 0;
    for(int i = 0;i < n;i++){
        if(a[i]%2 == 0){
            dem = dem + 1;
        }
    }
    return dem;
}
//bai 10:
long ghivaofile(int n){
    int a;
    fstream fin;
    fin.open("songuyen.txt", ios::out);
    if(fin.fail()){
        cout<<"file mở bị lỗi!";
        return -1;
    }
    fin<<n<<endl;//so luong so nguyen trong file.
    for(int i = 0;i < n;i++){
        cin>>a;
        fin<<a<<" ";
    }
    fin.close();
}
// //bai 11:
// long inmangtxt(int a[],int n){
//     char temp[1],temp1[10];
//     fin>>n;
//     fstream fin;
//     fin.open("songuyen.txt", ios::out);
//     fin.getline(temp1,10);
//     for(int i = 0;i < n;i++){
//         fin>>a[i];
//         fin.getline(temp,1);
//     }
// }



