
// C++ homework2
//
// Created by Harry Hocker on 11/6/22.
//
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

void NOTES()
{
    ofstream fout;
    fout.open("NOTES.TXT");
    for (int i = 1; i <= 100; i++)
    {
        fout << i << endl;
    }
    fout.close();
};

void STRING()
{
    ofstream fout;
    fout.open("out.txt");
    char str[] = "Time is a great teacher but unfortunately it kills all its pupils. Berlioz";
    fout << str;
    fout.close();
};
void ALPHABETS()
{
    ifstream fin;
    fin.open("out.txt");
    char ch;
    int c = 0;
    while (!fin.eof())
    {
        fin.get(ch);
        if (isalpha(ch))
        {
            // hehe see what I did here?
            c++;
        }
    }
    cout << c;
    fin.close();
};

void BLANKSPACE()
{
    ifstream fin;
    fin.open("out.txt");
    char ch;
    int c = 0;
    while (!fin.eof())
    {
        fin.get(ch);
        if (ch == ' ')
        {
            c++;
        }
    }
    cout << c;
    fin.close();
};

void COUNTWORDS()
{
    ifstream fin;
    fin.open("out.txt");
    char word[30];
    int c = 0;
    while (!fin.eof())
    {
        fin >> word;
        c++;
    }
    cout << c;
    fin.close();
};
void COUNT_WORD()
{
    ifstream fin;
    fin.open("STORY.TXT");
    char word[30];
    int c = 0;
    while (!fin.eof())
    {
        fin >> word;
        if (strcmp(word, "the") == 0)
        {
            c++;
        }
    }
    cout << c;
    fin.close();
};

void COUNTLINES()
{
    ifstream fin;
    fin.open("STORY.TXT");
    char str[80];
    int c = 0;
    while (!fin.eof())
    {
        fin.getline(str, 80);
        if (str[0] != 'A')
        {
            c++;
        }
    }
    cout << c;
    fin.close();
};

void COPYUPPER()
{
    ifstream fin;
    ofstream fout;
    fin.open("FIRST.TXT");
    fout.open("SECOND.TXT");
    char ch;
    while (!fin.eof())
    {
        fin.get(ch);
        ch = toupper(ch);
        fout << ch;
    }
    fin.close();
    fout.close();
};
