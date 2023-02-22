#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int toadox[100];
int toadoy[100];
int soluong = 6;
int toado_x_bandau = 50, toado_y_bandau = 13;

void gotoXY(int x, int y)
{
    static HANDLE h = NULL;
    if(!h)
        h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = { x, y };
    SetConsoleCursorPosition(h,c);
}



void ve_tuong()
{
    for (int x=10; x<=110; x++)
    {
        gotoXY(x, 1);
        cout << "+";
        gotoXY(x, 25);
        cout << "+";
    }

    for (int y=1; y<=25; y++)
    {
        gotoXY(10, y);
        cout << "+";
        gotoXY(110, y);
        cout << "+";
    }
}



void tao_ran()
{
    for (int i=0; i<soluong; i++)
    {
        toadox[i] = toado_x_bandau--;
        toadoy[i] = toado_y_bandau;
    }
}



void veran()
{
    for (int i=0; i<soluong; i++)
    {
        gotoXY(toadox[i], toadoy[i]);
        if (i == 0) cout << "0";
        else cout << "o";
    }
}



int main()
{
    ve_tuong();
    tao_ran();
    veran();
    return 0;
}
