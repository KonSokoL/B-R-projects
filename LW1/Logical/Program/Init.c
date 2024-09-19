
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	fb_regulator.dt = 0.1;
	fb_regulator.integrator.dt = 0.1;
	fb_regulator.max_abs_value = 24.0;
	fb_regulator.k_p = 0.0064;
	fb_regulator.k_i = 0.16;
	
	fb_motor.dt = 0.1;
	fb_motor.integrator.dt = 0.1;
	fb_motor.Tm = 0.04;
	fb_motor.ke = 0.048;
	fb_motor.u = 0;
	
	fb_motor2.dt = 0.1;
	fb_motor2.integrator.dt = 0.1;
	fb_motor2.Tm = 0.04;
	fb_motor2.ke = 0.048;
	fb_motor2.u = 0;
	
	time = 0;
	Speed = 0;
	Enable = 0;
}
