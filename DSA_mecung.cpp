#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cstring>
using namespace std;
 
int Search_street(char x[], int a[], int size1)
{
    // quy chuoi ra man tran
    for (int i = 0; i < size1; i++) {
        if (x[i] == 'L')
            a[i] = 3;
        else if (x[i] == 'R')
            a[i] = 2;
        else if (x[i] == 'D')
            a[i] = 10;
        else if (x[i] == 'U')
            a[i] = 1;
        // cout << a[i] << endl;
    }
    int i = 0;
    while (i < size1) {
        int size_current = size1;
        if (a[i] * a[i + 1] == 10 || a[i] * a[i + 1] == 6) { // co su rut gon
            if (a[i + 2] == size1)
                a[i] = a[i + 2];
            else {
                for (int j = i; j < size1 - 2; j++) {
                    a[j] = a[j + 2];
                }
            }
            // XOA PHAN TU CU THUA
            for (int j = size1 - 2; j < size1; j++) {
                a[j] = 0;
            }
            size1 = size1 - 2;
        }
        // neu k cos su rut gon thi tag i;
        if (size_current == size1)
            i++;
    }
    // doc nguoc tu mang a de ra mang x
    for (int j = 0; j < size1; j++) {
        if (a[j] == 1)
            x[j] = 'U';
        else if (a[j] == 10)
            x[j] = 'D';
        else if (a[j] == 3)
            x[j] = 'L';
        else if (a[j] == 2)
            x[j] = 'R';
    }
    x[size1] = '\0';
    cout << " duong di ngan nhat " << x << endl;
    return 0;
}
 
int main()
{
    int H[30];
    char Street[30];
    cout << " U la len, D la xuong, L la re trai, R la re phai " << endl;
    cout << " hay nhap duong di thu thap dc " << endl;
    fflush(stdin);
    gets(Street);
    Search_street(Street, H, strlen(Street));
    return 0;
}