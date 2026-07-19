#include <iostream>
#include <string>
using namespace std;

int main()
{
    string response;

    while (true)
    {
        cout << "do you want more tea (type 'stop' to exit): ";
        getline(cin, response);
        if (response == "stop" || response == "Stop")
        {
            break;
        }
        cout << " here is your another cup of tea \n"
             << endl;
    }
    cout <<"no more tea for you " << endl;
    return 0;
}