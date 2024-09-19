
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _CYCLIC ProgramCyclic(void)
{
	if (time % 200 == 0)
	{
		Enable = !Enable;
		
		if (Enable)
		{
			Speed = 100;
		}
		else
		{
			Speed = 0;
		}
	}
	fb_regulator.e = Speed - fb_motor.w;
	FB_Regulator(&fb_regulator);
	fb_motor.u = fb_regulator.u;
	FB_Motor(&fb_motor);
	fb_motor2.u = Speed * fb_motor2.ke;
	FB_Motor(&fb_motor2);

	
	time += 1;
}
