#include <iostream>
#include <cstdio>
#include "CSquare.h"
#include "CShape.h"
#include "CRectangle.h"
#include "CLine.h"
#include "CCircle.h"
#include "CPicture.h"

using namespace std;

int main()
{
    HWND console_handle = GetConsoleWindow();
    HDC device_context = GetDC(console_handle);
    CPicture p_Picture;
    p_Picture.Array[0] = new CLine(1,255);
    p_Picture.Array[1] = new CCircle(255, 150);
    p_Picture.Array[2] = new CRectangle(255, 100, 20);
    p_Picture.Array[3] = new CSquare(100, 255);

    int option;
    do
    {

        cout << "\nEnter Option:\n";
        cin >> option;
        switch (option)
        {
        case 0:
            cout << "Draw Line:\n";
            p_Picture.Array[0]->draw(300, 300, device_context);
            ReleaseDC(console_handle, device_context);
            break;
        case 1:
            cout << "Draw Circle:\n";
            p_Picture.Array[1]->draw(5, 5, device_context);
            ReleaseDC(console_handle, device_context);
            break;
        case 2:
            cout << "Draw Ractangle:\n";
            p_Picture.Array[2]->draw(300, 300, device_context);
            ReleaseDC(console_handle, device_context);
            break;
        case 3:
            cout << "Draw Square:\n";
            p_Picture.Array[3]->draw(300, 300, device_context);
            ReleaseDC(console_handle, device_context);
            break;
        default:
            break;
        }
    } while (option > 4 || option < 0);

    return 0;
}
