#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    FILE *fp;
    fp = fopen("c:\\csdl.txt", "r");        //err = fopen_s(&fp, "c:\\data.inp", "rt");
    if (!fp) {                              //if (err) {                    
        cout << "Khong the mo tap tin ";    //    cout << "Khong the mo tap tin ";
        exit(0);                            //     exit(0);
    }                                       //}        

    int col, row;
    fscanf(fp, "%d", &row);
    fscanf(fp, "%d", &col);
    if (col < 1 || row < 1) {
        cout << "data is error ";
        fclose(fp);
        exit(0);
    }

    int **a;
    a = new int*[row];
    if (!a) {
        cout << "not enough memory ";
        fclose(fp);
        exit(0);
    }

    for (int i = 0; i < row; i++) {
        a[i] = new int [col];
    }

    int tmp;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            fscanf(fp, "%d", &tmp);
            a[i][j] = tmp;
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    fclose(fp);
    for (int i = 0; i < row; i++) {
        if (a[i])
            delete []a[i];
    }
    if (a)
        delete []a;
    return 0;
}
