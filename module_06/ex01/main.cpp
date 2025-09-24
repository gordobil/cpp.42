
#include "Serializer.hpp"

int	main(void)
{
	Data		data;
	Data		*ptr = &data;
	uintptr_t	ptr2 = Serializer::serialize(ptr);

	data.name = "Paco";
	data.index = 1;

	std::cout << std::endl << " DATA:" << std::endl;
	std::cout << " ¬ Name: " << data.name << std::endl;
	std::cout << " ¬ Index: " << data.index << std::endl << std::endl;

	std::cout << " PTR serialized:" << std::endl;
	std::cout << " ¬ Name: " << ptr->name << std::endl;
	std::cout << " ¬ Index: " << ptr->index << std::endl << std::endl;

	ptr = Serializer::deserialize(ptr2);

	std::cout << " PTR deserialized:" << std::endl;
	std::cout << " ¬ Name: " << ptr->name << std::endl;
	std::cout << " ¬ Index: " << ptr->index << std::endl << std::endl;

	return (0);
}
