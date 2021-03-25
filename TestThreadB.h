/*
 * @Author: haodu
 * @Date: 2021-03-23 20:29:04
 * @LastEditors: haodu
 * @LastEditTime: 2021-03-23 21:03:56
 * @Description: Do not edit
 * @Sample output: Do not edit
 */


#ifndef _Test_thread_b_h_
#define _Test_thread_b_h_


#include "CThread.h"
#include "CMsgQueue.h"
#include "TestThread.h"

class TestThreadB:public CThread
{

	public:
		TestThreadB(const char *m_name);
		~TestThreadB();
		int run_flag;
		unsigned int code=0;

		virtual void mainLoop();

		void setMsgQueue(CMsgQueue *q);

	private:

		CMsgQueue *p_msg_send;


};




#endif

