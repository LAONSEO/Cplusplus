#include "PracticeDS_22_duckFactory.h"

PracticeDS_22_C_DUCK* C_DUCKFACTORY_TYPE_A::PracticeDS_22_createDuck()
{
    PracticeDS_22_C_DUCK* pDuck = new PracticeDS_22_C_DUCK{};

    pDuck->init(new PracticeDS_22_C_MOVE_FLY{}, new PracticeDS_22_C_SOUND_QUACK{});
    return pDuck;
}

PracticeDS_22_C_DUCK* C_DUCKFACTORY_TYPE_B::PracticeDS_22_createDuck()
{
    PracticeDS_22_C_DUCK* pDuck = new PracticeDS_22_C_DUCK{};

    pDuck->init(new PracticeDS_22_C_MOVE_SWIM{}, new PracticeDS_22_C_SOUND_MUSIC{});
    return pDuck;
}

PracticeDS_22_C_DUCK* C_DUCKFACTORY_TYPE_C::PracticeDS_22_createDuck()
{
    PracticeDS_22_C_DUCK* pDuck = new PracticeDS_22_C_DUCK{};

    pDuck->init(new PracticeDS_22_C_MOVE_WALK{}, new PracticeDS_22_C_SOUND_MUTE{});
    return pDuck;
}
