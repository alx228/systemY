
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	motor_speed = 500;
	EVIRD.ENABLE = 0;
}

void _CYCLIC ProgramCyclic(void)
{
	
	DRIVE(&EVIRD);
}

void _EXIT ProgramExit(void)
{

}

