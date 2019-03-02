#include <iostream>
using namespace std;
void mario (int hight);
int main() 
{
int hight;
cout << "請輸入1到8之間的層數:";
cin >> hight;
while (hight > 8 || hight < 1) {
    cout << "輸入錯誤\n";
    cout << "請輸入1到8之間的層數:";
    cin >> hight;
    }
mario (hight);
}
void mario (int hight)
{
  for (int a=0; a < hight; a++)
  {
    for (int b=0; b < hight-(a+1); b++)
    {cout << " ";}
    for (int c=0; c < a+1; c++)
    {cout << "#";}
    cout << " ";
    for (int d=0; d < a+1; d++)
    {cout << "#";}
    cout <<"\n";
  }
}
