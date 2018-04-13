#include "Simulator.h"

Simulator airport;

//Dont need to change anything

int main() {

	airport.enter_data();
	airport.run_simulation();
	airport.show_stats();

	return 0;
}