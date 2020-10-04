#include "MudEngine.hpp"

#define VERSION_MAJOR 0
#define VERSION_MINOR 1

// TODO: Logging system
// This is epic, thank you very cool
// wow much comment
// on a serious note, i can do this, i have a logging system i need to fix first though

int main( int argc, char** argv )
{
	MudEngine mudEngine;

	SettupANSI();

	std::cout << "Welcome to the CollabMud v"
		<< VERSION_MAJOR << "." << VERSION_MINOR
		<< std::endl << std::endl << std::endl;

	mudEngine.NetInit();

	// TODO: add a delay to ready or checks
	// so that it does not start while other
	// threads are still starting up
	mudEngine.Ready();


	// Prevent closing
	//getchar();

	return 0;

}

