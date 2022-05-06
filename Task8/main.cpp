#include "Func.h"
using namespace std;
int main()
{
    Student student;
    cout << "Surname, name, middle_name, city, group, course?" << endl;
    cin >> student;

    cout << "You wrote: " << student << '\n';
    return 0;
}