#include <iostream>
using namespace std;
int IsCP(int n)
{
    if((int)sqrt(n)==sqrt(n)) return 1;
    return 0;
}
int main()
{
    int n;
    cout<<"nhap mot so nguyen: ";
    cin>>n;
    if(IsCP(n)) cout<<"Day la so chinh phuong";else cout<<"Day khong phai so chinh phuong";
    return 0;
}