#include <bits/stdc++.h>
using namespace std;
class Date
{
    // by default private
    int day;
    int month;
    int year;

public:
    void setDay(int d)
    {
        if (d > 0)
            this->day = d;
    }
    void setMonth(int m)
    {
        if (m > 0)
            this->month = m;
    }
    void setYear(int y)
    {
        if (y > 0)
            this->year = y;
    }
    int getDay() const
    {
        return day;
    }
    int getMonth() const
    {
        return month;
    }
    int getYear() const
    {
        return year;
    }
    void displayDate() const
    {
        if (day < 10)
        {
            cout << "0" << day;
        }
        else
            cout << day;
        if (month < 10)
        {
            cout << "/0" << month << "/";
        }
        else
        {
            cout << "/" << month << "/";
        }
        cout << year << endl;
    }

    void addDays(int days)
    {
        if (this->day + days > 30)
        {
            this->month += (this->day + days) / 30;
            this->day = (this->day + days) % 30;
        }
        else
            this->day = this->day + days;

        // month logic
        if (this->month > 12)
        {
            this->year += this->month / 12;
            this->month = this->month % 12;
        }
    }

    void subtractDays(int days)
    {
        if (this->day - days < 0)
        {
            this->month = this->month + ((this->day - days) / 30) - 1;
            this->day = 30 + ((this->day - days) % 30); // days will be negative
        }
        else
            this->day -= days;

        // month logic
        if (this->month < 0)
        {
            this->year = this->year + (this->month / 12) - 1;
            this->month = 12 + (this->month); // here month will be in negative
        }
    }
};
int main()
{
    int numOfDates;
    cout << "Enter The Number Of Dates You Want To Enter : ";
    cin >> numOfDates;
    Date *object = new Date[numOfDates];
    for (int i = 0; i < numOfDates; i++)
    {
        int d, m, y;
        cout << "Enter the Day Month and Year : ";
        cin >> d >> m >> y;
        object[i].setDay(d);
        object[i].setMonth(m);
        object[i].setYear(y);
    }

    // display dates bycalling function
    for (int i = 0; i < numOfDates; i++)
    {
        object[i].displayDate();
    }

    int ad;
    cout << "How many days u want to add in index 0 date : ";
    cin >> ad;
    cout << "Current Date At Index 0 : ";
    object[0].displayDate();
    cout << "New Date After Adding Days : ";
    object[0].addDays(ad); // adding days
    object[0].displayDate();

    int sd;
    cout << "How many days u want to subtract in index 0 date : ";
    cin >> sd;
    cout << "Current Date At Index 0 : ";
    object[0].displayDate();
    object[0].subtractDays(sd); // subtracting
    object[0].displayDate();

    return 0;
}