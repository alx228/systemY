
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{

	Led_Buttons[0]=0;
	Led_Buttons[1]=0;
	Led_Buttons[2]=0;
	Led_Buttons[3]=0;
	LED[0]=0;
	LED[1]=0;
	LED[2]=0;
	LED[3]=0;
	i=0;
}

void _CYCLIC ProgramCyclic(void)
{
	if (!blink){
		LED[0]=Led_Buttons[0];
		LED[1]=Led_Buttons[1];
		LED[2]=Led_Buttons[2];
		LED[3]=Led_Buttons[3];
	}
	else{
		LED[0]= !LED[0];
		if(i%2 == 0)
		{
			LED[1] = ! LED[1];
		}
		if(i%8 == 0)
		{
			LED[2] = ! LED[2];
		}
		if(i%32 == 0)
		{
			LED[3] = ! LED[3];
		}
		i++;
	}
	
}

void _EXIT ProgramExit(void)
{

}

