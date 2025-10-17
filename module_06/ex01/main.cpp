
#include "Serializer.hpp"

int	main(void)
{
	Data		data;
	Data		*ptr = &data;
	uintptr_t	ptr2 = Serializer::serialize(ptr);

	data.name = "Paco";
	data.index = 1;

	std::cout << std::endl << RED " DATA:" WHITE << std::endl;
	std::cout << " ¬ Name: " << data.name << std::endl;
	std::cout << " ¬ Index: " << data.index << std::endl << std::endl;

	std::cout << CYAN " PTR serialized:" WHITE << std::endl;
	std::cout << " ¬ Name: " << ptr->name << std::endl;
	std::cout << " ¬ Index: " << ptr->index << std::endl << std::endl;

	ptr = Serializer::deserialize(ptr2);

	std::cout << CYAN " PTR deserialized:" WHITE << std::endl;
	std::cout << " ¬ Name: " << ptr->name << std::endl;
	std::cout << " ¬ Index: " << ptr->index << std::endl << std::endl;

	return (0);
}
