#include <iostream>
using namespace std;
int IsCP(int n)
{
    if((int)sqrt(n)==sqrt(n)) return 1;
    return 0;
}
int IsHT(int n)
{
    int s=0;
    for(int i=1;i<n;i++)
    if (n%i==0) s+=i;
    return s==n;
}
int main()
{
    int n;
    cout<<"nhap mot so nguyen: ";
    cin>>n;
    if(IsCP(n)) cout<<"Day la so chinh phuong";else cout<<"Day khong phai so chinh phuong";
    if(IsHT(n)) cout<<"Day la so hoan thien";else cout<<"Day khong phai so hoan thien";
    return 0;
}