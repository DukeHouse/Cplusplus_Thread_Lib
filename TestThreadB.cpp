/*
 * @Author: haodu
 * @Date: 2021-03-23 20:29:13
 * @LastEditors: haodu
 * @LastEditTime: 2021-03-23 21:03:47
 * @Description: Do not edit
 * @Sample output: Do not edit
 */


#include "TestThreadB.h"
#include "COperatingSystemFactory.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <assert.h>


TestThreadB::TestThreadB(const char *m_name):
CThread(m_name)
{

	//add your code here
	
	run_flag=1;
	

}



TestThreadB::~TestThreadB()
{

}

void TestThreadB::mainLoop()
{
	char  *p_msg="hello Thread A";
	void  *p_msg_recv;
	while(run_flag)
		{
			printf(">>>>>>>%s is Running....send data to message queue code %d...\n",p_thread_name,code);
			p_msg_send->sendMsg(code, (void *)p_msg);
			code++;
			p_opration_system->sleepSec(1);
		}


}



void TestThreadB::setMsgQueue(CMsgQueue *q)
{
	p_msg_send=q;
}



