#include <iostream>
using namespace std;

class Clock
{
    public:
    Clock(){};
    Clock(int sec)
    {
        seconds=0;
        minutes=0;
        hours=0;

        if(sec%60 > 1)
        {
            seconds=sec%60;
            minutes=(sec-(sec%60))/60;

            if(minutes%60 > 1)
            {
                int temp=minutes;
                minutes=minutes%60;
                hours=(temp-(temp%60))/60;
            }
        }
    }

    void dispTime()
    {
        if(hours<10)
        {
            cout<<"0"<<hours<<"::"<<minutes<<"::"<<seconds<<endl;
        }
        else if (minutes<10)
        {
            cout<<hours<<"::"<<"0"<<minutes<<"::"<<seconds<<endl;
        }
        else if(seconds<10)
        {
            cout<<hours<<"::"<<minutes<<"::"<<"0"<<seconds<<endl;
        }
        else
        {
            cout<<hours<<"::"<<minutes<<"::"<<seconds<<endl;
        }
    }

    void add(int sec)
    {
        seconds+=sec;
        sec=seconds;
        int hoursec=hours*3600;
        int minutesec=minutes*60;
        sec+=hoursec+minutesec;

        if(sec%60 > 1)
        {
            seconds=sec%60;
            minutes=(sec-(sec%60))/60;

            if(minutes%60 > 1)
            {
                int temp=minutes;
                minutes=minutes%60;
                hours=(temp-(temp%60))/60;
            }
        }
    }

    void subtract(int sec)
    {
        seconds-=sec;
        sec=seconds;
        int hoursec=hours*3600;
        int minutesec=minutes*60;
        sec+=hoursec+minutesec;

        if(sec%60 > 1)
        {
            seconds=sec%60;
            minutes=(sec-(sec%60))/60;

            if(minutes%60 > 1)
            {
                int temp=minutes;
                minutes=minutes%60;
                hours=(temp-(temp%60))/60;
            }
        }
    }

    int getSeconds()
    {
        return seconds;
    }

    int getMinutes()
    {
        return minutes;
    }

    int getHours()
    {
        return hours;
    }

    void setSeconds(int s)
    {
        seconds=s;
    }

    void setMinutes(int m)
    {
        minutes=m;
    }

    void setHours(int h)
    {
        hours=h;
    }

    private:
    int seconds;
    int minutes;
    int hours;
};

int main()
{
    Clock b(10000);
    b.dispTime();
    b.add(10000);
    b.dispTime();
    b.subtract(10000);
    b.dispTime();
    return 0;
}
