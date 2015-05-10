#include <cstdio>
#include <iostream>

#include "Player.h"
#include "Console.h"
#include "UIRenderer.h"
#include "GameController.h"

using namespace std;

int main( int argc, char *argv[] ) {

    int cmdlineCommand = Console::parseCommandLineArguments( argc, argv );

    // Initialize GameController object
    GameController::renderer = UIRenderer();
    // todo: bude existovat pod�d�n� UIUnicodeRenderer, kter� bude �m�rat junik�dy

    return 0;

}