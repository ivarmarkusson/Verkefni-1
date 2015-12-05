#include <iostream>
#include "ui.h"
#include "data.h"
#include "engine.h"

using namespace std;

int main()
{

    UI user;

    user.startProgram();

    return 0;
}

/*
 * hér eru 3 layer
 *
 * 1.layer er UI
 * 2.layer er Engine sem reiknar allt gerir alla vinnu
 * 3.layer er Data sem heldur utan um data
 *
 * Svo eru tveir klasar í viðbót, Scientist og
 * Computer.
 *
 * Þetta er bara grunnur að valmöguleikum í UI vegna
 * þess að ég held að það sé best að fá allavega eina
 * virkni til að virka áður en við höldum áfram að
 * fjölga möguleikum í forritinu.
 *
 *
*/
