#include <iostream>
#include <vector> 
#include <string> 
using namespace std;

int main() {
    vector<string> tasks;
    int choice;
    string task;

    do {
        cout << "\n===== TO-DO LIST =====" << endl;
        cout << "1. Add Task " << endl;
        cout << "2. View Tasks " << endl;
        cout << "3. Delete Task " << endl;
        cout << "4. Exit " << endl; 
        cout << " Enter Your Choice: "; 
        cin >> choice;

        switch (choice) {
            case 1: 
            cout << "Enter your task: ";
            cin.ignore();
            getline(cin,task);

            tasks.push_back(task);
            cout << "Task added successfully!" << endl;
            break;
            case 2:
            if (task.empty()) 
            {
                cout << "NO task available!" << endl;
            } 
            else {
                cout << "\nYour Tasks:" << endl; 
                for (int i = 0; i < task.size(); i++) {
                    cout << i + 1 << ". " << tasks[ i ] << endl; 
                }
    }
    break;

    case 3: {
        if (tasks.empty())
    {
         cout << "No task to delete!" << endl; }
         else { 
            int number;

            cout << "Enter task number to delete: ";
            cin >> number; 
            if (number >= 1 && number <= tasks.size())
         { 
            tasks.erase(tasks.begin() + number - 1 );
            cout << " Task deleted successfully! " << endl;
         }
         else {
            cout << " Invalid task number!"  << endl; 
         }
        } 
        break;
         }
         case 4: 
         cout  << " Exiting To-Do List. Goodbye!" << endl; 
         break; 
         
         default: 
         cout << "Invalid Choice! Try again."  << endl; 
        }
    } while (choice != 4 ); 

    return 0; 
}