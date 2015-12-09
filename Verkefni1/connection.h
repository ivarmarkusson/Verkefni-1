#ifndef CONNECTION_H
#define CONNECTION_H
#include <QCoreApplication>
#include <string>
using namespace std;

class Connection
{
public:
    Connection();
    Connection(string s, string c);

    string getName_Sci();
    string getName_Com();

    void setName_Sci(string s);
    void SetName_Com(string c);

private:
    string sci_name;
    string com_name;
};

#endif // CONNECTION_H
