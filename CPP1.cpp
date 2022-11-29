// Created by Harry James Hocker
#include <iostream>
using namespace std;
#include <string.h>

class student
{
private:
    int admno;
    char sname[20];
    float eng, math, science;
    float total;
    void ctotal()
    {
        this->total = this->eng + this->math + this->science;
    }

public:
    void Takedata()
    {
        cout << "Enter admission number ";
        cin >> this->admno;
        cout << "Enter student name ";
        cin >> this->sname;
        cout << "Enter English mark: ";
        cin >> this->eng;
        cout << "Enter Math mark: ";
        cin >> this->math;
        cout << "Enter Science mark: ";
        cin >> this->science;
        ctotal();
    }
    void Showdata()
    {
        cout << "Admission number: ";
        cout << this->admno << "\n";
        cout << "Student Name: ";
        cout << this->sname << "\n";
        cout << "English mark: ";
        cout << this->eng << "\n";
        cout << "Math mark: ";
        cout << this->math << "\n";
        cout << "Science mark: ";
        cout << this->science << "\n";
        cout << "Total: ";
        cout << this->total << "\n";
    }
};

class batsman
{
private:
    int bcode;
    char bname[20];
    int innings, notout, runs;
    float batavg;
    void calcavg()
    {
        this->batavg = (float)(this->runs / (float)(this->innings - this->notout));
    }

public:
    void readdata()
    {
        cout << "Enter batter code ";
        cin >> this->bcode;
        // reduce it to 4 digits
        this->bcode = this->bcode % 10000;
        cout << "Enter batter name ";
        cin >> this->bname;
        cout << "Enter innings: ";
        cin >> this->innings;
        cout << "Enter not-outs: ";
        cin >> this->notout;
        cout << "Enter runs: ";
        cin >> this->runs;
        calcavg();
    }
    void displaydata()
    {
        cout << "Batter code: ";
        cout << this->bcode << "\n";
        cout << "Batter name: ";
        cout << this->bname << "\n";
        cout << "Innings: ";
        cout << this->innings << "\n";
        cout << "Not-outs: ";
        cout << this->notout << "\n";
        cout << "Runs: ";
        cout << this->runs << "\n";
        cout << "Batting Average: ";
        cout << this->batavg << "\n";
    }
};

class TEST
{
private:
    int TestCode;
    char *Description;
    int NoCandidate;
    int CenterReqd;
    void CALCNTR()
    {
        this->CenterReqd = ((this->NoCandidate / 100) + 1);
    }

public:
    void SCHEDULE()
    {
        cout << "Enter test code: ";
        cin >> this->TestCode;
        cout << "Enter description: ";
        cin >> this->Description;
        cout << "Enter Non-Candidates: ";
        cin >> this->NoCandidate;
        CALCNTR();
    }
    void DISPTEST()
    {
        cout << "Test Code: ";
        cout << this->TestCode << "\n";
        cout << "Description: ";
        cout << this->Description << "\n";
        cout << "Non-Candidates: ";
        cout << this->NoCandidate << "\n";
        cout << "Centers Required: ";
        cout << this->CenterReqd << "\n";
    }
};

class Airport
{
private:
    int Flight;
    char *Destination;
    float Distance;
    float Fuel;
    void CALFUEL()
    {
        float d = this->Distance;
        if (d <= 1000)
        {
            this->Fuel = 500;
            return;
        }
        else if (d <= 2000)
        {
            this->Fuel = 1100;
            return;
        }
        else
        {
            this->Fuel = 2200;
            return;
        }
    }

public:
    void FEEDINFO()
    {
        cout << "Enter Flights: ";
        cin >> this->Flight;
        cout << "Enter destination: ";
        cin >> this->Destination;
        cout << "Enter distance: ";
        cin >> this->Distance;
        CALFUEL();
    }
    void SHOWINFO()
    {
        cout << "Flights: ";
        cout << this->Flight << "\n";
        cout << "Destination: ";
        cout << this->Destination << "\n";
        cout << "Distance: ";
        cout << this->Distance << "\n";
        cout << "Fuel Required: ";
        cout << this->Fuel << "\n";
    }
};

class BOOK
{
private:
    int BOOK_NO;
    char BOOKTITLE[20];
    float PRICE;
    float TOTAL_COST(int N)
    {
        return (float)N * PRICE;
    }

public:
    void INPUT()
    {
        cout << "Enter book number: ";
        cin >> this->BOOK_NO;
        cout << "Enter book title: ";
        cin >> this->BOOKTITLE;
        cout << "Enter price per book: ";
        cin >> this->PRICE;
    }
    void PURCHASE()
    {
        cout << "Enter number of copies to be purchased: ";
        int n;
        cin >> n;
        cout << "Total cost is: " << TOTAL_COST(n) << ".\n";
    }
};

class REPORT
{
private:
    int adno;
    char name[20];
    float marks[5];
    float average;
    void GETAVG()
    {
        float total;
        for (int i = 0; i < 5; i++)
        {
            total += this->marks[i];
        }
        this->average = total / 5.0;
    }

public:
    void READINFO()
    {
        cout << "Enter admission number: ";
        cin >> this->adno;
        // limit to 4 digits
        this->adno = this->adno % 10000;
        cout << "Enter name: ";
        cin >> this->name;
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter mark #" << i + 1 << ".\n";
            cin >> this->marks[i];
        }
        GETAVG();
    }
    void DISPLAYINFO()
    {
        cout << "Admission number: ";
        cout << this->adno << "\n";
        cout << "Name: ";
        cout << this->name << "\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "Mark # " << i + 1 << ".\n";
            cout << this->marks[i] << "\n";
        }
        cout << this->average << "\n";
    }
};

class Rectangle
{
private:
    float length;
    float width;

public:
    void setlength(float length);
    void setwidth(float width);
    float perimeter();
    float area();
    void show();
    int sameArea(Rectangle other);
};

void Rectangle ::setlength(float length)
{
    this->length = length;
};

void Rectangle ::setwidth(float width)
{
    this->width = width;
};

float Rectangle ::perimeter()
{
    return (length * 2) + (width * 2);
};

float Rectangle ::area()
{
    return length * width;
};

void Rectangle ::show()
{
    cout << "Length is " << this->length << " and width is " << this->width << ".\n";
};

int Rectangle::sameArea(Rectangle other)
{
    if (this->area() == other.area())
    {
        return 1;
    }
    return 0;
};

int rectangle_main()
{
    // rectangle part
    Rectangle a;
    a.setlength(5);
    a.setwidth(2.5);
    cout << "For rectangle A: \n";
    a.show();
    cout << "Area is " << a.area() << " and Perimeter is " << a.perimeter() << ".\n";
    Rectangle b;
    b.setlength(5);
    b.setwidth(18.9);
    cout << "For rectangle B: \n";
    b.show();
    cout << "Area is " << b.area() << " and Perimeter is " << b.perimeter() << ".\n";
    int sameArea = a.sameArea(b);
    if (sameArea)
    {
        cout << "The rectangles have the same area.\n";
    }
    else
    {
        cout << "The rectangles do NOT have the same area.\n";
    }
    a.setlength(15);
    a.setwidth(6.3);
    cout << "For rectangle A: \n";
    a.show();
    cout << "Area is " << a.area() << " and Perimeter is " << a.perimeter() << ".\n";
    cout << "For rectangle B: \n";
}