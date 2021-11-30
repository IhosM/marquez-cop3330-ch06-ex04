#include <iostream>
#include <string>
#include <vector>

/*
 UCF COP3330 Fall 2021 Assignment 5 Solution
 Copyright 2021 Ihosvany Marquez
 */

 
using namespace std;

class Name_value 
{
    public:
      string name;
      int value;
};

bool checkName(vector<Name_value> vector, string name) 
{
    for (Name_value name_value : vector) 
    {
        if (name_value.name == name)
            return true;
    }
  
    return false;
}

void output(vector<Name_value> vector) 
{
    for (Name_value name_value : vector) 
    {
        cout << "(" << name_value.name << ", " << name_value.value << ")\n";
    }
}

int main()
{
    Name_value current;
    vector<Name_value> names;
    
    while (1) 
    {
        cout << "Enter name and value: ";
        cin >> current.name >> current.value;

        if (current.name == "NoName" && current.value == 0) {
            break;
        }
        else 
        {
            if (checkName(names, current.name)) 
            {
                cout << "ERROR: Name exists already!";
                break;
            }
            else 
            {
                names.push_back(current);
            }
        }
        cout << "\n";
    }
    
    output(names);
    
    return 0;
}