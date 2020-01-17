#include <iostream>
#include <string>
#include "TodoList.h"
using namespace std;

int main(int argc, char *argv[])
{
    TodoList mylist;
    string firstarg = argv[1];
    if(firstarg.compare("add") == 0) {
        string date = argv[2];
        string task = argv[3];
        cout << "In add data "<<date<<" task "<<task<<endl;
        mylist.add(date, task);
    }
}
