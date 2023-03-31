#pragma once

class PracticeDS_26_C_TABLE
{
public:
	enum E_STATE
	{
		E_OUT = 0,
		E_BALL,
		E_STRIKE,
	};

private:
	E_STATE m_arState[10];

public:
	PracticeDS_26_C_TABLE() = default;
	void PracticeDS_26_init(int nStrike, int* pBall, int nBallLength);
	void PracticeDS_26_print();
};