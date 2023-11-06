#include <iostream>
#include <ctime>
#include<time.h>

using namespace std;

class time
{
    protected:
        int hr;

    public:
        void settime()
        {
            time_t now =  time(0);
            
            tm *ltm = localtime(&now);
            display(1 + ltm->tm_hour);
        }
        void display(int a)
        {
            hr=a;
            cout<<hr;
        }
};
int main( )
{
    class time t;
     t.settime();

     return 0;
}
