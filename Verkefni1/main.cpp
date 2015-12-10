#include <iostream>
#include "ui.h"
#include "data.h"
#include "engine.h"
#include "sql.h"
#include <QtSql>

using namespace std;

int main()
{
    UI user;

    user.startProgram();

    return 0;
}

/*
 * Here we have three layers
 *
 * 1. layer (Presentation layer) is UI
 * 2. layer (Domain layer) is Engine that calculates everything and does all the work
 * 3. layer (Data layer) is Data which keeps track of data
 *
 * Then we have two more clases Scientist and Computer
 */
