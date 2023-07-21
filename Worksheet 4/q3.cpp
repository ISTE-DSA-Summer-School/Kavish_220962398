//Define a class time with data members hour, min, sec .Write the user defined functions to (i) Add (ii) To find difference between two objects of class time.
//Functions take two time objects as argument and return time object. Also write the display and read function.

#include <iostream>
using namespace std;

class Time {
    private:
        int hour;
        int min;
        int sec;

    public:
        Time(int h = 0, int m = 0, int s = 0){
            hour=h;
            min=m;
            sec=s;
        }

        void read() {
            cout << "Enter hour: ";
            cin >> hour;

            cout << "Enter minute: ";
            cin >> min;

            cout << "Enter second: ";
            cin >> sec;
        }

        void display() {
            cout << hour << ":" << min << ":" << sec;
        }

        Time add(Time t2) {
            Time sum;
            sum.sec = sec + t2.sec;
            sum.min = min + t2.min + sum.sec / 60;
            sum.sec %= 60;
            sum.hour = hour + t2.hour + sum.min / 60;
            sum.min %= 60;
            return sum;
        }

        Time difference(Time t2) {
            int totalSec1 = hour * 3600 + min * 60 + sec;
            int totalSec2 = t2.hour * 3600 + t2.min * 60 + t2.sec;

            int diffSec;
            if(totalSec1>totalSec2){
                diffSec = totalSec1 - totalSec2;
            }
            else diffSec=totalSec2-totalSec1;


            Time diffTime;
            diffTime.hour = diffSec / 3600;
            diffTime.min = (diffSec % 3600) / 60;
            diffTime.sec = (diffSec % 3600) % 60;

            return diffTime;
        }
};

int main() {
    Time time1, time2, sumTime, diffTime;

    cout << "Enter details for Time 1:" << endl;
    time1.read();
    cout<<endl;

    cout << "Enter details for Time 2:" << endl;
    time2.read();
    cout<<endl;

    sumTime = time1.add(time2);

    diffTime = time1.difference(time2);

    cout << "Time 1: ";
    time1.display();
    cout << endl;

    cout << "Time 2: ";
    time2.display();
    cout << endl;

    cout << "Sum of Time 1 and Time 2: ";
    sumTime.display();
    cout << endl;

    cout << "Difference between Time 1 and Time 2: ";
    diffTime.display();
    cout << endl;

    return 0;
}
