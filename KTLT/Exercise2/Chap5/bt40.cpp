#include <iostream>
#include <string.h>
#include <fstream>
#include <algorithm>
using namespace std;

struct List 
{
    char code[9], name[11], subname[21], sex[10];
    int day, month, year, d1, d2, d3;
};

void Menu()
{   
    cout << "1. Input " << endl;
    cout << "2. Output " << endl;
    cout << "3. Add " << endl;
    cout << "4. Delete " << endl;
    cout << "5. Sort " << endl;
    cout << "6. Search " << endl;
    cout << "7. Write file " << endl;
    cout << "8. Read file " << endl;
}

void Input(List l[], int &n)
{
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin.ignore();
        cout << "Enter code: ";
        cin.getline(l[i].code, 9);
        cout << "Enter name: ";
        cin.getline(l[i].name, 11);
        cout << "Enter subname: ";
        cin.getline(l[i].subname, 21);
        cout << "Enter sex: ";
        cin.getline(l[i].sex, 10);
        cout << "Enter day: ";
        cin >> l[i].day;
        cout << "Enter month: ";
        cin >> l[i].month;
        cout << "Enter year: ";
        cin >> l[i].year;
        cout << "Enter score of 3 subjects: ";
        cin >> l[i].d1 >> l[i].d2 >> l[i].d3;
    }
}

void Output(List l[], int n)
{
    cout << "\nFull name " << "\t\t";
    cout << "Code " << "\t\t";
    cout << "Sex " << "\t\t";
    cout << "Day of birth " << "\t\t";
    cout << "D1 " << "\t\t" << "D2 " << "\t\t" << "D3 " << endl;

    for (int i = 0; i < n; i++) {
        cout << l[i].subname << " " << l[i].name << "\t\t";
        cout << l[i].code << "\t\t";
        cout << l[i].sex << "\t\t";
        cout << l[i].day << "/" << l[i].month << "/" << l[i].year << "\t\t";
        cout << l[i].d1 << "\t\t" << l[i].d2 << "\t\t" << l[i].d3 << endl;
    }
}

void Add(List l[], int &n)
{
    List neww;
    int k;
    cout << "\nEnter information of new studet " << endl;
    cin.ignore();
    cout << "Enter code: ";
    cin.getline(neww.code, 9);
    cout << "Enter name: ";
    cin.getline(neww.name, 11);
    cout << "Enter subname: ";
    cin.getline(neww.subname, 21);
    cout << "Enter sex: ";
    cin.getline(neww.sex, 10);
    cout << "Enter day: ";
    cin >> neww.day;
    cout << "Enter month: ";
    cin >> neww.month;
    cout << "Enter year: ";
    cin >> neww.year;
    cout << "Enter score of 3 subjects: ";
    cin >> neww.d1 >> neww.d2 >> neww.d3;
    cout << "Enter position to add: ";
    cin >> k;

    for (int i = n; i >= k; i--) {
        strcpy(l[i].code, l[i - 1].code);
        strcpy(l[i].name, l[i - 1].name);
        strcpy(l[i].subname, l[i - 1].subname);
        strcpy(l[i].sex, l[i - 1].sex);
        l[i].day = l[i - 1].day;
        l[i].month = l[i - 1].month;
        l[i].year = l[i - 1].year;
        l[i].d1 = l[i - 1].d1;
        l[i].d2 = l[i - 1].d2;
        l[i].d3 = l[i - 1].d3;
    }

    strcpy(l[k - 1].code, neww.code);
    strcpy(l[k - 1].name, neww.name);
    strcpy(l[k - 1].subname, neww.subname);
    strcpy(l[k - 1].sex, neww.sex);
    l[k - 1].day = neww.day;
    l[k - 1].month = neww.month;
    l[k - 1].year = neww.year;
    l[k - 1].d1 = neww.d1;
    l[k - 1].d2 = neww.d2;
    l[k - 1].d3 = neww.d3;

    n++;
}

void Delete(List l[], int &n)
{
    int k;
    cout << "Enter position to delete: ";
    cin >> k;

    for (int i = k - 1; i < n - 1; i++) {
        strcpy(l[i].code, l[i + 1].code);
        strcpy(l[i].name, l[i + 1].name);
        strcpy(l[i].subname, l[i + 1].subname);
        strcpy(l[i].sex, l[i + 1].sex);
        l[i].day = l[i + 1].day;
        l[i].month = l[i + 1].month;
        l[i].year = l[i + 1].year;
        l[i].d1 = l[i + 1].d1;
        l[i].d2 = l[i + 1].d2;
        l[i].d3 = l[i + 1].d3;
    }

    n--;
}

void Swap(char a[], char b[])
{
    char tmp[50];
    strcpy(tmp, a);
    strcpy(a, b);
    strcpy(b, tmp);
}

void Sort(List l[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(l[i].code, l[j].code) > 0) {
                Swap(l[i].code, l[j].code);
                Swap(l[i].name, l[j].name);
                Swap(l[i].subname, l[j].subname);
                Swap(l[i].sex, l[j].sex);
                swap(l[i].day, l[j].day);
                swap(l[i].month, l[j].month);
                swap(l[i].year, l[j].year);
                swap(l[i].d1, l[j].d1);
                swap(l[i].d2, l[j].d2);
                swap(l[i].d3, l[j].d3);
            }
        }
    }
}

void Search(List l[], int n)
{
    char k[9];
    cin.ignore();
    cout << "Enter a code to search: ";
    cin.getline(k, 9);

    for (int i = 0; i < n; i++) {
        if (strcmp(l[i].code, k) == 0) {
            cout << l[i].subname << " " << l[i].name << "\t\t";
            cout << l[i].code << "\t\t";
            cout << l[i].sex << "\t\t";
            cout << l[i].day << "/" << l[i].month << "/" << l[i].year << "\t\t";
            cout << l[i].d1 << "\t\t" << l[i].d2 << "\t\t" << l[i].d3 << endl;
            break;
        }
    }
}

void WriteFile(List l[], fstream &fout, int n)
{
    fout.open("out.txt", ios::out);
    if(fout.fail()) return;

    fout << "Full name " << "\t\t";
    fout << "Code " << "\t\t";
    fout << "Sex " << "\t\t";
    fout << "Day of birth " << "\t\t";
    fout << "D1 " << "\t\t" << "D2 " << "\t\t" << "D3 " << endl;

    for (int i = 0; i < n; i++) {
        fout << l[i].subname << " " << l[i].name << "\t\t";
        fout << l[i].code << "\t\t";
        fout << l[i].sex << "\t\t";
        fout << l[i].day << "/" << l[i].month << "/" << l[i].year << "\t\t";
        fout << l[i].d1 << "\t\t" << l[i].d2 << "\t\t" << l[i].d3 << endl;
    }
}

void ReadFile(List l[], fstream &fin, int n)
{
    fin.open("inp.txt", ios::in);
    if (fin.fail()) return;

    string tmp;
    while (!fin.eof()) {
        getline(fin, tmp);
        cout << tmp;
    }

    for (int i = 0; i < n; i++) {

    }
}

void Options(List l[], fstream &fin, fstream &fout, int n)
{
    int t = -1;
    while (t != 0) {
        cin >> t;
        if (t == 1) Input(l, n);
        if (t == 2) Output(l, n);
        if (t == 3) Add(l, n);
        if (t == 4) Delete(l, n);
        if (t == 5) Sort(l, n);
        if (t == 6) Search(l, n);
        if (t == 7) WriteFile(l, fout, n);
        if (t == 8) ReadFile(l, fout, n);
    }
}

int main ()
{
    int n;
    List l[500];
    fstream fin, fout;
    Menu();
    Options(l, fin, fout, n);

    fin.close();
    fout.close();
    return 0;
}