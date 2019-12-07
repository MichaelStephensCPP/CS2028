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

    hours=sec/3600;
    sec-=hours*3600;
    minutes=sec/60;
    sec-=minutes*60;
    seconds=sec;
    }
    
    Clock (int hour, int minute, int second){
        hours = hour;
        minutes = minute;
        seconds = second;
    }
    
    void dispTime()
    {
        if(hours<10)
            cout << "0" << hours;
        else
            cout << hours;
        
        cout << "::";
        if(minutes<10)
            cout << "0" << minutes;
        else
            cout << minutes;
        
        cout << "::";
        if(seconds<10)
            cout << "0" << seconds;
        else
            cout << seconds;
        cout << endl;
    }
    
    void add(int sec)
    {
        seconds+=sec;
        sec=seconds;
        int hoursec=hours*3600;
        int minutesec=minutes*60;
        sec+=hoursec+minutesec;

        hours=sec/3600;
        sec-=hours*3600;
        minutes=sec/60;
        sec-=minutes*60;
        seconds=sec;
    }
    
    void subtract(int sec)
    {
        seconds-=sec;
        sec=seconds;
        int hoursec=hours*3600;
        int minutesec=minutes*60;
        sec+=hoursec+minutesec;
        
        hours=sec/3600;
        sec-=hours*3600;
        minutes=sec/60;
        sec-=minutes*60;
        seconds=sec;
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
    Clock b(25200);
    b.dispTime();

    return 0;
}
