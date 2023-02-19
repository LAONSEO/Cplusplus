#include "PracticeClass_31_F_movefactory.h"
#include "PracticeClass_31_F_fly.h"
#include "PracticeClass_31_F_swim.h"
#include "PracticeClass_31_F_walk.h"

PracticeClass_31_F_MOVE* PracticeClass_31_F_MOVEFACTORY_FLY::createMove()
{
    return new PracticeClass_31_F_FLY{};
}

PracticeClass_31_F_MOVE* PracticeClass_31_F_MOVEFACTORY_SWIM::createMove()
{
    return new PracticeClass_31_F_SWIM{};
}

PracticeClass_31_F_MOVE* PracticeClass_31_F_MOVEFACTORY_WALK::createMove()
{
    return new PracticeClass_31_F_WALK{};
}