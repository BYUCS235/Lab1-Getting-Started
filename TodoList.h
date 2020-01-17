#ifndef TODO_LIST_H
#define TODO_LIST_H

#include "TodoListInterface.h"
#include <fstream>
#include <vector>

using namespace std;

class TodoList: public TodoListInterface {
public:
    vector <string> lines;
    TodoList() {
        ifstream infile;
        infile.open("TODOList.txt");
        string line;
        if (infile.is_open()) {
            while ( getline (infile,line) )
            {
                lines.push_back(line);
            }
  
        }
        infile.close();
    }
    virtual ~TodoList() {
        ofstream outfile;
        outfile.open("TODOList.txt",ofstream::out|ofstream::trunc);
        for(int i = 0; i < lines.size(); i++) {
            outfile << lines[i]<<endl;
        }
        outfile.close();
    }

    /*
    *   Adds an item to the todo list with the data specified by the string "_duedate" and the task specified by "_task"
    */
    virtual void add(string _duedate, string _task)
    {
        lines.push_back(_duedate+" "+_task);
    }

    /*
    *   Removes an item from the todo list with the specified task name
    *
    *   Returns 1 if it removes an item, 0 otherwise
    */
    virtual int remove(string _task)
    {
        cout <<"In remove"<<endl;
    }

    /*
    *   Prints out the full todo list to the console
    */
    virtual void printTodoList()
    {
        cout <<"In print"<<endl;
    }
    
    /*
    *   Prints out all items of a todo list with a particular due date (specified by _duedate)
    */
    virtual void printDaysTasks(string _date)
    {
        cout <<"In printDaysTasks"<<endl;
    }
};

#endif
