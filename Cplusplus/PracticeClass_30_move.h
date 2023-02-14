#pragma once
#include <stdio.h>

__interface PracticeClass_30_move_INTERFACE
{
	void move();
};

class PracticeClass_30_move abstract : public PracticeClass_30_move_INTERFACE
{
private:
	int m_nData{};
public:
	PracticeClass_30_move() = default;
	PracticeClass_30_move(const PracticeClass_30_move&) = delete;
	PracticeClass_30_move& operator=(const PracticeClass_30_move&) = delete;
	virtual ~PracticeClass_30_move();

	void setData(int nData);
	virtual void move() abstract;
};