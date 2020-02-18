#include "jmsdl/catch_ts/catch_test_lib_class.h"


#include "jmsdl/catch_ts/catch_test_lib_function.h"
#include "jmsdl/catch_ts/catch_lib_function.h"


#include <iostream>


int main( int const /*argc*/, char const *const * /*argv*/ ) {
	auto *example = new ::jmsdl::catch_ts::Catch_test_lib_class;

	::std::cout << example->say_catch_lib_hello() << ::std::endl;
	::std::cout << example->say_catch_test_lib_hello() << ::std::endl;

	::std::cout << jmsdl_catch_lib_function_say_executable_hello() << ::std::endl;
	::std::cout << jmsdl_catch_test_lib_function_say_executable_hello() << ::std::endl;

	delete example;

	return 0;
}
