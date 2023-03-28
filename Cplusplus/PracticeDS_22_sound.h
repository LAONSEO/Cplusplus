#pragma once
#include <iostream>

class PracticeDS_22_C_SOUND abstract
{
public:
	virtual ~PracticeDS_22_C_SOUND() {};
public:
	virtual void play() abstract;
};

class PracticeDS_22_C_SOUND_MUSIC : public PracticeDS_22_C_SOUND
{
	// C_SOUND��(��) ���� ��ӵ�
	virtual void play() override;
};
class PracticeDS_22_C_SOUND_MUTE : public PracticeDS_22_C_SOUND
{
	// C_SOUND��(��) ���� ��ӵ�
	virtual void play() override;
};
class PracticeDS_22_C_SOUND_QUACK : public PracticeDS_22_C_SOUND
{
	// C_SOUND��(��) ���� ��ӵ�
	virtual void play() override;
};