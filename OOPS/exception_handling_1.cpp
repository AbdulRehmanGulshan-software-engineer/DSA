// Lecture # 76
// handling exceptions using try,throw,catch

/*
Exception : An exception is an unexpected problem that arises during the execution of program our program terminated suddenly with some errors/issues . Exception occurs during the running of program.
*/

/*
Try : The try keyword represents a block of code that may throw an exception placed inside the try block. It,s followed by one or more catch blocks. If an exception occurs, try block throws that exception
*/

/*
catch : The catch statement represents a block of code that is executed when a particular exception is thrown from the try block.the code to handle the exception is written inside the catch block
*/

/*
Throw : An exception in C++ can be thrown using the throw keyword.when a program counters a throw statement, then it immediately terminates the current function and start finding a matching catch block to handle the thrown exception
*/

#include <iostream>
using namespace std;

// // we will see how our exception class (present by default) actually looks  ... Parent Class
// class exception
// {
// protected:
//     string msg;

// public:
//     // constructor
//     exception(string msg)
//     {
//         this->msg = msg;
//     }

//     // what function : its work is to print the exception that comes
//     string what()
//     {
//         return msg;
//     }
// }

// // now see how child class will look like
// class runtime_error : public exception
// {
// public:
//     // created constructor
//     runtime_error(const string &msg) : exception(msg);
// }

// class for custom exception 👇
class InvalidAmountError : public runtime_error
{
public:
    // constructor
    InvalidAmountError(const string &msg) : runtime_error(msg) {}; // calling runtime constructor
};

// class for custom exception 👇
class insufficientBalanceError : public runtime_error
{
public:
    // constructor
    insufficientBalanceError(const string &msg) : runtime_error(msg) {};
};

// created class named customer
class customer
{
    string name;
    int balance, account_number;

public:
    // created constructor
    customer(string name, int balance, int account_number)
    {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    // deposit function
    void deposit(int amount)
    {
        if (amount <= 0)
            // throw runtime_error("amount should be greater than 0.");
            // creating custom exception class 👇
            throw InvalidAmountError("amount should be greater than 0."); // agar khudki bnani hai to hme uper khud ki class bnani pre gi

        balance += amount;
        cout << amount << " Rs is credited successfully.\n";
    }

    // withdraw function
    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << amount << " Rs is debited successfully.\n";
        }
        else if (amount <= 0)
        {
            throw InvalidAmountError("amount should be greater than 0.");
        }
        else
        {
            // throw runtime_error("balance is low.");
            throw insufficientBalanceError("balance is low.");
        }
    }
};

int main()
{
    customer C1("Rohit", 5000, 10);

    // bhaiyya try kro ke inme exception aa rha hai
    try
    {
        C1.deposit(100);
        C1.withdraw(6000);
        C1.deposit(100);
    }
    catch (const InvalidAmountError &e) // catch the thrown exception
    {
        cout << "Exception Occurred: " << e.what() << endl;
    }
    // catch can be used for these too 👇 , we can write multiple catch block
    catch (const insufficientBalanceError &e)
    {
        cout << "Exception Occurred: " << e.what() << endl;
    }
    // default catch 👇
    catch (...)
    {
        cout << "Exception Occurred" << endl;
    }
}