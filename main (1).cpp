#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream fin;
    int N;
    char ht[30];
    char dt[11];
    char ns[5];
    char temp[100];
    fin.open("danh ba.txt",ios::in);
    if(fin.fail())
    {
        cout<<"mo file bi loi";
        return -1;
    }
    int a;
    fin>>N;//doc gia tri dau tien
    fin.getline(temp,100);//nhay con tro xuong dong duoi
    for(int i=0;i<N;i++)
    {
        fin.getline(ht,30);//doc 1 dong file vao mang ht
        fin.getline(dt,11);// doc 1 dong file vao mang dt
        fin>>a;
        fin.ignore();
        cout<<i+1<<" . "<<ht<<" - "<<dt<<" - "<<2020-a<<endl;
    }
    fin.close();
    return 0;
}