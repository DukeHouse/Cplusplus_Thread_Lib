/*
 * @Author: haodu
 * @Date: 2021-03-23 20:26:44
 * @LastEditors: haodu
 * @LastEditTime: 2021-03-23 21:03:40
 * @Description: Do not edit
 * @Sample output: Do not edit
 */



#include "TestThread.h"
#include "COperatingSystemFactory.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <assert.h>


TestThread::TestThread(const char *m_name):
CThread(m_name)
{

	//add your code here
	run_flag=1;


}



TestThread::~TestThread()
{

}

void TestThread::mainLoop()
{
	void *p_msg;
	char *p_msg_send="hello B I am A I finish you";
	while(run_flag)
		{

			p_msg_rev->recvMsg(code, p_msg);
			printf("<<<<<<<%s  is Running....recv data from message queue: code is : [%d]   data is : [%s] \n",p_thread_name,code,(char *)p_msg);
			if(code>15){
				run_flag=0;
				p_msg_rev->sendMsg(code, (void *)p_msg_send);
			}
		}


}



void TestThread::setMsgQueue(CMsgQueue *q)
{
	p_msg_rev=q;
}



