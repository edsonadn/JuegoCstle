#include <iostream>
#include "GameController.h"

using namespace std;

int main() {
	GameController* controller = new GameController();
	controller->Loop();
	return 0;
}