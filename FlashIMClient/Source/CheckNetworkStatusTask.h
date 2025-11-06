#pragma once

#include "ThreadPool.h"

class CIUProtocol;
class CFlashIMClient;

//心跳包任务
class CCheckNetworkStatusTask : public CThreadPoolTask
{
public:
	CCheckNetworkStatusTask(void);
	~CCheckNetworkStatusTask(void);

public:
	virtual int Run();
	virtual int Stop();
	virtual void TaskFinish();

public:
	CIUProtocol*	m_pProtocol;
	CFlashIMClient*	m_pTalkClient;
	BOOL			m_bStop;
};