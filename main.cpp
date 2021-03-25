


#include "TestThread.h"
#include "TestThreadB.h"
#include "CMsgQueue.h"
#include "COperatingSystemFactory.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <assert.h>
#include <fstream>
#include <iostream>
void mainloop(){
	CMsgQueue *q=COperatingSystemFactory::newMsgQueue("B to A message Queue");

	
	TestThread *a=new TestThread("AAAAAA "); // this is send thread
	TestThreadB *b=new TestThreadB("BBBBBB "); // this is recv thread

	a->setMsgQueue(q);
	b->setMsgQueue(q);

	a->run();
	b->run();

	while(b->code<10)
		;
}

int main()
{
	//mainloop();
	// read 
	std::ofstream os;
	std::string ws_string;
	//os.open("./t.txt");
	//os<<"cheduleProcess";
	os.close();

	//write
	std::ifstream data_ws_string_movebase("./t.txt");
    data_ws_string_movebase >> ws_string;
	std::cout<<ws_string.c_str();   
	os.close();


}



