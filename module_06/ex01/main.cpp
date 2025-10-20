
#include "Serializer.hpp"

int	main(void)
{
	Data		data;
	
	data.name = "Paco";
	data.index = 1;
	
	std::cout << std::endl << RED " DATA:" WHITE << std::endl;
	std::cout << " ¬ Ptr: " << &data << std::endl;
	std::cout << " ¬ Name: " << data.name << std::endl;
	std::cout << " ¬ Index: " << data.index << std::endl << std::endl;


	uintptr_t	ptr = Serializer::serialize(&data);

	std::cout << CYAN " PTR serialized:" WHITE << std::endl;
	std::cout << " ¬ Ptr: " << ptr << std::endl << std::endl;


	Data		*dataPtr = Serializer::deserialize(ptr);

	std::cout << CYAN " dataPTR deserialized:" WHITE << std::endl;
	std::cout << " ¬ Ptr: " << dataPtr << std::endl;
	std::cout << " ¬ Name: " << dataPtr->name << std::endl;
	std::cout << " ¬ Index: " << dataPtr->index << std::endl << std::endl;

	return (0);
}
