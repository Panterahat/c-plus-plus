#include <iostream>
using namespace std;
class Student
{
    int id;
    string name;
    double marks;

public:
    int semester_fee = 60000;
    void setData(int i, string n, double m)
    {
        id = i;
        name = n;
        marks = m;
    }
    void displayData()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
    int getId()
    {
        return id;
    }
};
int main()
{
    int number;
    int choice = 0;
    int studentCount = 0; // total students in the array

    Student students[100];

    while (choice != 3)
    {

        cout << "Student Management System" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display Students" << endl;
        cout << "3. Exit" << endl;
        cout << "4.search by id" << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "enter how many students you want to add" << endl;

            cin >> number;

            for (int i = 0; i < number; i++)
            {
                int idd;
                string namee;
                double markss;
                cout << "Enter ID of student " << studentCount + 1 << ": ";
                cin >> idd;
                cout << "Enter name of student " << studentCount + 1 << ": ";
                cin >> namee;
                cout << "Enter marks of student " << studentCount + 1 << ": ";
                cin >> markss;
                cout << endl;

                students[studentCount].setData(idd, namee, markss);
                studentCount++; // increment total count
            }
        }
        if (choice == 2) // Display
        {
            cout << "\nStudent Details:\n";

            for (int i = 0; i < studentCount; i++)
            {
                cout << "Student " << i + 1 << ":\n";
                students[i].displayData();
                cout << endl;
            }
        }
        if (choice == 3)
        {
            cout << "Exiting the program." << endl;
            return 0;
        }
        if (choice == 4) // Search
        {
            int searchId;
            cout << "Enter the ID of the student to search: ";
            cin >> searchId;
            bool found = false;

            for (int i = 0; i < studentCount; i++)
            {
                if (students[i].getId() == searchId)
                {
                    cout << "Student found:\n";
                    students[i].displayData();
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Student not found!" << endl;
        }
    }
}