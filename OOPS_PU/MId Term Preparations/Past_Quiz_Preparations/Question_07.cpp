/*
Q2. A text file has records of ten cricket players, who can do both bowling and batting. For each player, there
are four lines. The first line has a positive integer showing the number of times the player batted in matches.
The next line has the player's scores separated by spaces. The third line has again a positive integer showing the
number of times the player did bowling in matches. The fourth line has a number of wickets separated by
spaces. Write appropriate class to store players data and create all the functions used in main:
ifstream in("players.txt");
Player p1(in); //the function will read the player object from file and set values
Player p2(in);
Player p3 = p2;
p1 = p2;
p1.set(in); //the function will read the player data from file and update the record
*/

#include <iostream>
#include <fstream>
using namespace std;

class Player
{
    int countBat, countBall;
    int *bat, *ball;
    Player &copy(const Player &p)
    {
        countBat = p.countBat;
        bat = new int[countBat];
        for (int i = 0; i < countBat; i++)
            bat[i] = p.bat[i];
        countBall = p.countBall;
        ball = new int[countBall];
        for (int i = 0; i < countBall; i++)
            ball[i] = p.ball[i];
        return *this;
    }
    void clear()
    {
        delete[] bat;
        delete[] ball;
        bat = ball = 0;
    }
    Player &read(ifstream &in)
    {
        in >> countBat;
        bat = new int[countBat];
        for (int i = 0; i < countBat; i++)
            in >> bat[i];
        in >> countBall;
        ball = new int[countBall];
        for (int i = 0; i < countBall; i++)
            in >> ball[i];
        return *this;
    }

public:
    Player(ifstream &in)
    {
        read(in);
    }
    Player(const Player &p)
    {
        copy(p);
    }
    Player &operator=(const Player &p)
    {

        clear();
        return copy(p);
    }
    Player &set(ifstream &in)
    {
        clear();
        return read(in);
    }
};

int main()
{
    ifstream in("players.txt");
    Player p1(in); // the function will read the player object from file and set values
    Player p2(in);
    Player p3 = p2;
    p1 = p2;
    p1.set(in); // the function will read the player data from file and update the record
}