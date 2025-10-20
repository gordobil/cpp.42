
#include "Base.hpp"

int	main(void)
{
	Base *randClass = generate();

	identify(randClass);
	identify(*randClass);

	delete randClass;
}
