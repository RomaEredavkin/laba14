#include "image.h" 

void Image0(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hPen);
    POINT p[4];
    p[0].x = cx;
    p[0].y = cy + 20;
    p[1].x = cx + 20;
    p[1].y = cy - 20;
    p[2].x = cx - 20;
    p[2].y = cy - 20;
    p[3].x = cx;
    p[3].y = cy + 20;
    Polyline(hdc, p, 4);
    DeleteObject(hPen);
}
void Image1(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hPen);
    POINT p[4] = {
        cx,     cy - 20,
        cx + 20, cy + 20,
        cx - 20, cy + 20,
        cx,      cy - 20
    };
    Polyline(hdc, p, 4);
    DeleteObject(hPen);
}

void Image2(HDC hdc) {
    int x, y, i;
    x = 150;
    y = 50;
    i = 0;
    do {
        Image0(hdc, x, y, RGB(255, 0, 0));
        y += 70;
        i++;
    } while (i < 6);
}
void Image3(HDC hdc) {
    int x, y, j;
    x = 100;
    y = 50;
    j = 0;
    do {
        Image0(hdc, x, y, RGB(0, 200, 0));
        x += 50;
        j++;
    } while (j < 8);
}
void Image4(HDC hdc) {
    int x, y, i, j;
    y = 50;
    i = 0;
    do {
        x = 100;
        j = 0;
        do {
            Image1(hdc, x, y, RGB(255, 128, 128));
            x += 50;
            j++;
        } while (j < 8);
        y += 70;
        i++;
    } while (i < 8);
}
void Image5(HDC hdc, int cx, int cy) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
    SelectObject(hdc, hPen);
    POINT p[4] = {
        cx,     cy - 20,
        cx + 20, cy + 20,
        cx - 20, cy + 20,
        cx,      cy - 20
    };
    Polyline(hdc, p, 4);
    DeleteObject(hPen);
}
void Image6(HDC hdc, int cx, int cy) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
    SelectObject(hdc, hPen);
    POINT p[4];
    p[0].x = cx;
    p[0].y = cy + 20;
    p[1].x = cx + 20;
    p[1].y = cy - 20;
    p[2].x = cx - 20;
    p[2].y = cy - 20;
    p[3].x = cx;
    p[3].y = cy + 20;
    Polyline(hdc, p, 4);
    DeleteObject(hPen);
}
void Image7(HDC hdc, int cx, int cy) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
    SelectObject(hdc, hPen);
    POINT p[5] = {
        cx,      cy - 20,
        cx + 20, cy,
        cx,      cy + 20,
        cx - 20, cy,
        cx,      cy - 20
    };
    Polyline(hdc, p, 5);
    DeleteObject(hPen);
}
void Image8(HDC hdc, int cx, int cy) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
    SelectObject(hdc, hPen);
    POINT p[5] = {
        cx - 20,      cy - 20,
        cx,         cy,
        cx + 20,      cy - 20,
        cx,  cy + 20,
        cx - 20,      cy - 20
    };
    Polyline(hdc, p, 5);
    DeleteObject(hPen);
}
void Image9(HDC hdc, int cx, int cy) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
    SelectObject(hdc, hPen);
    POINT p[6] = {
        cx - 20,      cy - 20,
        cx,         cy,
        cx + 20,      cy - 20,
        cx + 20,  cy + 20,
        cx - 20,      cy + 20,
        cx - 20,      cy - 20
    };
    Polyline(hdc, p, 6);
    DeleteObject(hPen);
}