#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void readFile(fstream &fin)
{
    fin.open("bt14.inp.txt", ios::in);
    if(!fin)    return;
}

void writeFile(fstream &fout)
{
    fout.open("bt14.out.txt", ios::out);
    if(!fout)   return;
}

int Max(string s)
{
    int max, cnt = 0;
    s[s.size()] = ' ';

    for (int i = 0; i <= s.size(); i++)
    {
        if (s[i] != ' ')
            cnt++;
        else 
        {
            if (cnt > max)
                max = cnt;
            cnt = 0;
        }
    }

    s[s.size()] = '\0';
    return max;
}

int Pos(string s, int max)
{
    int pos, cnt = 0;
    s[s.size()] = ' ';

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
            cnt++;
        else 
        {
            if (cnt == max)
            {
                pos = i - max;
                break;
            }
            cnt = 0;
        }
    }

    return pos;
}

void printMax(fstream &fin, fstream &fout)
{
    int max, pos;
    string s;

    fout << "Cau a: " << endl;
    while(!fin.eof())
    {
        getline(fin, s);
        max = Max(s);
        pos = Pos(s, max);

        for (int i = pos; i < pos + max; i++)   fout << s[i];
        fout << endl;
    } 
    
    fin.seekg(0, ios_base::beg);
}


void LeftRight(fstream &fin, fstream &fout)
{
    string s;

    fout << "Cau b: " << endl;
    while(!fin.eof())
    {
        getline(fin, s);

        for (int i = 0; i < s.size(); i++)
        {
            fout << s[i];
            if (s[i] == ' ')  break;
        }
        
        fout << " ";

        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i - 1] == ' ')
            {
                for (int j = i; j < s.size(); j++)  fout << s[j];
                break;
            }
        }
        
        fout << endl;
    } 

    fin.seekg(0, ios_base::beg);
}

int countWord(string s)
{
    int cnt = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
            cnt++;
    }
    return cnt;
}

int MaxLenght(fstream &fin)
{
    string s;
    int ans, cnt;

    while(!fin.eof())
    {
        getline(fin, s);
        cnt = countWord(s);
        ans = max(ans, cnt);
    } 

    fin.seekg(0, ios_base::beg);
    return ans;
}

void printMaxLenght(fstream &fin, fstream &fout)
{
    string s;
    int cnt, max = MaxLenght(fin);

    fout << "Cau c: " << endl;
    while(!fin.eof())
    {
        getline(fin, s);
        cnt = countWord(s);
        if (cnt == max)
            fout << s;
    } 

    fin.seekg(0, ios_base::beg);
}

void Sum(fstream &fin, fstream &fout)
{
    string s;
    int cnt, sum = 0;

    fout << "\nCau d: " << endl;
    while(!fin.eof())
    {
        getline(fin, s);
        cnt = countWord(s);
        sum += cnt;
    } 
    fout << sum << endl;

    fin.seekg(0, ios_base::beg);
}

int countYourWord(string s, string x)
{
    int tmp, j, cnt, cnt1 = 0;

    for (int i = 0; i < s.size(); i++)
    {
        j = 0;
        cnt = 1;

        if (s[i] == x[j])
        {
            tmp = i + 1;

            for (int j = 1; j < x.size(); j++)
            {   
                if (s[tmp] == x[j]) 
                {
                    cnt++;
                    tmp++;
                }
                else    break;
            }
        }   

        if (cnt == x.size())  
        {   
            cnt1++;
            i = tmp;
        }
    }
    
    return cnt1;
}

void Count(fstream &fin, fstream &fout)
{
    string s;
    string x = "your";
    int cnt = 0;

    fout << "Cau e: " << endl;
    while(!fin.eof())
    {
        getline(fin, s);
        cnt += countYourWord(s, x);
    }

    fout << cnt;
}

int main()
{
    fstream fin, fout;
    readFile(fin);
    writeFile(fout);
    printMax(fin, fout);
    LeftRight(fin, fout);
    printMaxLenght(fin, fout);
    Sum(fin, fout);
    Count(fin, fout);

    fin.close();
    fout.close();
    return 0;
}