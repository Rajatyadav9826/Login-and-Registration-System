/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, string> users;

void registerUser()
{
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (users.count(username))
    {
        cout << "Username already exists. Try again.\n";
        return;
    }

    users[username] = password;
    cout << "User registered successfully.\n";
}

void login()
{
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (users.count(username) && users[username] == password)
    {
        cout << "Login successful.\n";
    }
    else
    {
        cout << "Login failed.\n";
    }
}

int main()
{
    int choice;
    do
    {
        cout << "1. Register\n2. Login\n3. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            registerUser();
            break;
        case 2:
            login();
            break;
        case 3:
            break;
        default:
            cout << "Invalid choice. Try again.\n";
            break;
        }

    } while (choice != 3);

    return 0;
}
