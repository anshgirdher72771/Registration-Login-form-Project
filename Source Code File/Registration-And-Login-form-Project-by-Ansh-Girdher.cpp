#include <iostream>
#include <conio.h>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;
// Class for user sign-up
class sign_up     
{
protected:
    string create_username;
    string create_password;
    string date_of_birth;
    int age;
    string Mobile_number;

public:
// Constructor
    sign_up(void)
    {
        create_username = "NULL";
        create_password = "NULL";
    }
    // Function to input user details for sign-up
    void input_by_user(string user, string pass, string birth, string number, int years)
    {
        create_username = user;
        create_password = pass;
        date_of_birth = birth;
        Mobile_number = number;
        age = years;
        cout << "                                                      Successfully, Submit your sign-up details for your Account....                    " << endl;
    }
};
// Class for user login, inherits from sign_up
class login : public sign_up
{
    string username_login;
    string password_login;
    string confirm_password_login;
    string date_of_birth_login;
    string Mobile_Number_login;

public:
// Function to handle user login or password reset
    void input_by_user_login(string create_user, string create_pass, string date_of_birth, string number, int choice)
    {
        cout << endl;
        for (int i = 0; i < 168; i++)
        {
            cout << "*";
        }
        cout << "                                                                         Sign-in/Reset the password                                " << endl
             << endl;
        for (int i = 0; i < 168; i++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "1. Forgot the Password" << endl;
        cout << "2. Sign-in" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter Your Choice :- ";
        cin >> choice;
        if (choice < 1 || choice >> 2)
        {
            cout << setw(100) << "      Invalid Choice!...Please try Again" << endl;
        }

        switch (choice)
        {
        case 1:
        user:
            fflush(stdin);
            cout << endl;
            cout << "Enter Your Username                  :- ";
            getline(cin, username_login);
            if (create_user != username_login)
            {
                cout << setw(100) << "Invalid Username!..Please Try Again" << endl;
                goto user;
            }
        DOB:

            cout << "Enter Your Date of Birth(DD-MM-YYYY) :- ";
            getline(cin, date_of_birth_login);
            if (date_of_birth != date_of_birth_login)
            {
                cout << setw(105) << "Invalid Date-of-Birth !..Please Try Again" << endl;
                goto DOB;
            }
        MOB:

            cout << "Enter Your Mobile Number             :- ";
            getline(cin, Mobile_Number_login);
            if (Mobile_Number_login.size() < 10 || Mobile_Number_login.length() > 10)
            {
                cout << "                                                      Invalid Mobile Number! Please Enter the 10 Digit Mobile Number" << endl;
                goto MOB;
            }
            if (number != Mobile_Number_login)
            {
                cout << setw(105) << "Invalid Mobile Number !..Please Try Again" << endl;
                goto MOB;
            }

            cout << "Enter Your Password                  :- ";
            getline(cin, password_login);
        confirm:

            cout << "Enter Your Confirm Password          :- ";
            getline(cin, confirm_password_login);
            if (password_login != confirm_password_login)
            {
                cout << setw(95) << "Incorrect! Confirm password" << endl;
                goto confirm;
            }
            if (password_login == confirm_password_login)
            {
                cout << "                                               Your password has been successfully reset. Now, you can sign-in to your existing account" << endl;
                create_pass = confirm_password_login;
                goto sign_in;
            }
            break;
        case 2:
            goto sign_in;
            break;
        case 3:
            exit(0);
        default:
            break;
        }
    sign_in:
        cout << endl;
        for (int i = 0; i < 168; i++)
        {
            cout << "*";
        }
        cout << "                                                                             Sign-in Page                                " << endl
             << endl;
        for (int i = 0; i < 168; i++)
        {
            cout << "*";
        }
        cout << endl;
    user_2:
        cout << "Enter Your Username :- ";
        cin >> username_login;
        if (create_user != username_login)
        {
            cout << setw(113) << "                                                Account doesn't Exist, Please Sign-up...        " << endl;
            cout << endl;
            cout << "                                                                  Great! Thanks for using my Program                                           " << endl;
            getch();
        }
        else if (create_user != username_login)
        {
            cout << setw(100) << "Invalid Username!..Please Try Again" << endl;
            goto user_2;
        }
    pass:
        cout << "Enter Your Password :- ";
        cin >> password_login;
        if (create_pass == password_login)
        {
            cout << setw(95) << "Successfully, Logged In..." << endl;
        }
        else if (create_pass != password_login)
        {
            cout << setw(112) << "             Incorrect password!... Please enter the correct password!!" << endl;
            goto pass;
        }
        cout << endl;
        cout << "                                                                   Great! Thanks for using my Program                                           " << endl;
    }
};
// Function to check whether an account exists or not
void forgot_password(string user)
{
    string username;
    cout << "Enter Your Username :- ";
    cin >> username;
    if (user != username)
    {
        cout << setw(113) << "                                                Account doesn't Exist, Please Sign-up...        " << endl;
    }
}
int main()
{
    for (int i = 0; i < 168; i++)
    {
        cout << "*";
    }
    cout << "                                                                 Welcome To my Sign-up/Login Form Project                                    " << endl;
    ;
    cout << "                                                                           Made By Ansh Girdher                                              " << endl;
    for (int i = 0; i < 168; i++)
    {
        cout << "*";
    }
    cout << endl;
    cout << "1. Sign-up" << endl;
    cout << "2. Sign-in" << endl;
    cout << "3. Forgot the Password" << endl;
    cout << "4. Exit" << endl;
    int choice;
start:
    cout << "Enter Your choice :- ";
    cin >> choice;
    if (choice < 1 || choice > 4)
    {
        cout << setw(100) << "      Invalid Choice!...Please try Again" << endl;
        goto start;
    }

    sign_up obj1;
    string create_username; // declaring Variables & Objects of Sign-up class
    string create_password;
    string date_of_birth;
    int age;
    string Mobile_number;

    login obj2;// declaring Object of login class

    switch (choice)
    {
    case 1:
    sign_up:
        cout << endl;
        for (int i = 0; i < 168; i++)
        {
            cout << "*";
        }
        cout << "                                                                             Sign-up Page                              " << endl
             << endl;
        for (int i = 0; i < 168; i++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "Enter Your Username                  :- ";
        cin >> create_username;
        cout << "Enter Your Password                  :- ";
        cin >> create_password;
        cout << "Enter Your Date of Birth(DD-MM-YYYY) :- ";
        cin >> date_of_birth;
        cout << "Enter Your Age (18-60)               :- ";
        cin >> age;
        if (age < 18 || age > 60)
        {
            cout << setw(105) << "                   Currently, You are Ineligible for this..." << endl;
            cout << endl;
            cout << "                                                                   Great! Thanks for using my Program                                           " << endl;
            break;
        }
    mobile:
        cout << "Enter Your Mobile Number             :- ";
        cin >> Mobile_number;
        if (Mobile_number.size() > 10)
        {
            cout << setw(95) << "Invalid Mobile Number..." << endl;
            goto mobile;
        }
        else if (Mobile_number.length() < 10)
        {
            cout << setw(95) << "Invalid Mobile Number..." << endl;
            goto mobile;
        }

        obj1.input_by_user(create_username, create_password, date_of_birth, Mobile_number, age);
        goto login;
        break;

    case 2:

    login:
        int choice_login;
        obj2.input_by_user_login(create_username, create_password, date_of_birth, Mobile_number, choice_login);
        break;
    case 3:
        for (int i = 0; i < 168; i++)
        {
            cout << "*";
        }
        cout << "                                                                            Reset the Password                              " << endl
             << endl;
        for (int i = 0; i < 168; i++)
        {
            cout << "*";
        }
        cout << endl;
        forgot_password(create_username);
        goto sign_up;
        break;
    case 4:
        exit(0);
        break;
    default:
        break;
    }

    getch();
    return 0;
}