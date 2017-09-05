#include "cute.h"
#include "ide_listener.h"
#include "cute_runner.h"


void test(){
    std::cout << "Hello, World!";
}


void runSuite(){
	cute::suite s;
	s.push_back(CUTE(test));
	cute::ide_listener<> lis;
	cute::makeRunner(lis)(s, "CUTE CLion Skeleton");
}

int main(){
    runSuite();
    return 0;
}



