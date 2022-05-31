
#include "gui/ui.hpp"

auto main ( ) -> int
{
	std::thread ( [ & ] ( ) { gui.init ( { "" } ); } ).detach ( );

	std::getchar();
}