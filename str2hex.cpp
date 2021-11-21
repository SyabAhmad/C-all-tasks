#include <algorithm>
#include <sstream>
#include <iostream>
#include <iterator>
#include <iomanip>

namespace {
   const std::string test="hello world";
}

int main() {
   std::ostringstream result;
   result << std::setw(2) << std::setfill('0') << std::hex << std::uppercase;
   std::copy(test.begin(), test.end(), std::ostream_iterator<unsigned int>(result, " "));
   std::cout << test << ":" << result.str() << std::endl;
}