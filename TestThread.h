/*
 * @Author: haodu
 * @Date: 2021-03-23 20:26:13
 * @LastEditors: haodu
 * @LastEditTime: 2021-03-23 21:03:33
 * @Description: Do not edit
 * @Sample output: Do not edit
 */

#ifndef _TestThread_h_
#define _TestThread_h_


#include "CThread.h"
#include "CMsgQueue.h"

class TestThread:public CThread
{

	public:
		TestThread(const char *m_name);
		~TestThread();
		unsigned int code;
		int run_flag=0;
		virtual void mainLoop();


		void setMsgQueue(CMsgQueue *q);
		
	private:
		CMsgQueue *p_msg_rev;

		
		

};





#endif

