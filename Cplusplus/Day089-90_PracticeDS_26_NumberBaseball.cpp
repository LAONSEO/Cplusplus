// Day089-90_PracticeDS_26_NumberBaseball.
// windows.h 적용을 위해 다음 절차 수행필요.
// 속성 - 구성 속성 - 링커 - 입력 - 구성에서 활성debug, 활성(x64) 설정 - 추가종속성 최우측 편집 - winmm.lib 입력 후 적용.

#include <iostream>
#include "PracticeDS_26_baseball.h"

int main()
{
	PracticeDS_26_C_BASEBALL cBaseball{};

	cBaseball.PracticeDS_26_init(3);
}