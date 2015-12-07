#include "sql.h"

Sql::Sql()
{

}

void Sql::connect(QString sqlname)
{
     db = QSqlDatabase::addDatabase("QSQLITE");
     QString dbName = sqlname;
     db.setDatabaseName(dbName);
     db.open();
     if (!db.open())
     {
         cout << "Could Not Connect!" << endl;
     }
     else
     {
         cout << "Connected!" << endl;
     }
}

void Sql::disconnect()
{
    db.close();
}

QSqlQuery Sql::getQuery()
{
    QSqlQuery query(db);
    return query;
}


void Sql::addComputer()
{
    int id, Year;
    string Name, Type, Built;
    QSqlQuery query;

    cout << "ID: ";
    cin >> id;
    cout << "Name: ";
    cin >> Name;
    cout << "Year Built: ";
    cin >> Year;
    cout << "Type of Computer: ";
    cin >> Type;
    cout << "Was The computer built(Yes,No): ";
    cin >> Built;

    query.exec("insert into computers values(id, Name, Year, Type, Built)");
}
















vector<Scientist> Sql::searchSientists(QString searchtext)
{
    connect("Persons.sqlite");
    QSqlQuery query = getQuery();
    vector<Scientist> v;

    query.prepare("SELECT * FROM People WHERE ((Name LIKE '%'||?||'%' ) OR (Birth LIKE '%'||?||'%') OR (Death LIKE '%'||?||'%')");
    query.bindValue(1, searchtext);
    query.bindValue(2, searchtext);
    query.bindValue(3, searchtext);
    query.exec();

    disconnect();
    return v;
}
