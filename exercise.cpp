#include <iostream>
#include <string>
using namespace std;

void menu();
class dayType
{
private:
    int i;
    string weekDay[7];
    string day;
    string prDay;
    string nxtDay;
    string addDays;

public:
    dayType(string);
    string setDay();
    string prevDay();
    void nextDay();
    string add(int n);
    void print();
};

dayType ::dayType(string i) : day(i)
{
    weekDay[0] = "Mon";
    weekDay[1] = "Tue";
    weekDay[2] = "Wed";
    weekDay[3] = "Thu";
    weekDay[4] = "Fri";
    weekDay[5] = "Sat";
    weekDay[6] = "Sun";
}

string dayType ::setDay()
{
    if (day == weekDay[0])
    {
        i = 0;
    }
    else if (day == weekDay[1])
    {
        i = 1;
    }
    else if (day == weekDay[2])
    {
        i = 2;
    }
    else if (day == weekDay[3])
    {
        i = 3;
    }
    else if (day == weekDay[4])
    {
        i = 4;
    }
    else if (day == weekDay[5])
    {
        i = 5;
    }
    else if (day == weekDay[6])
        i = 6;
    else
    {
        day = "Invalid Input";
        i = 7;
    }
    return day;
}

string dayType ::prevDay()
{
    if (i == 0)
        prDay = weekDay[6];
    else if (i > 6)
        prDay = "Invalid Input";
    else
        prDay = weekDay[i - 1];
    return prDay;
}

void dayType ::nextDay()
{
    if (i == 6)
        nxtDay = weekDay[0];
    else if (i > 6)
        prDay = "Invalid Input";
    else
        nxtDay = weekDay[i + 1];
}

string dayType ::add(int n)
{
    n += i;
    while (n >= 7)
    {
        n -= 7;
    }
    if (i == 7)
        weekDay[n] = "Invalid Input ";
    return addDays = weekDay[n];
}
void dayType ::print()
{
    cout << "\tDay = " << day << "day" << endl;
    cout << "\tPrevious day : " << prDay << "day" << endl;
    cout << "\tNext day : " << nxtDay << "day" << endl;
    cout << "\tAfter Adding Days : " << addDays << "day" << endl;
}
void menu()
{
    cout << "\tEnter 'Sun' for Sunday" << endl;
    cout << "\tEnter 'Mon' for Monday" << endl;
    cout << "\tEnter 'Tue' for Tuesday" << endl;
    cout << "\tEnter 'Wed' for Wednesday" << endl;
    cout << "\tEnter 'Thu' for Thursday" << endl;
    cout << "\tEnter 'Fri' for Friday" << endl;
    cout << "\tEnter 'Sat' for Saturday" << endl;
    cout << endl;
}

int main()
{
    int n;
    string d;
    menu();
    cout << "Enter the day: ";
    cin >> d;
    dayType Day(d);
    Day.setDay();
    Day.prevDay();
    Day.nextDay();
    cout << "Enter the number of days to add: ";
    while (!(cin >> n) || n < 0)
    {
        cin.clear();
        cin.ignore(999, '\n');
        cout << "Invalid data type!\n Please enter number of days to add again :";
    }
    Day.add(n);
    Day.print();
    return 0;
}

// Kholil Asjaduddin
// 22/504792/TK/55224
// Teknologi Informasi