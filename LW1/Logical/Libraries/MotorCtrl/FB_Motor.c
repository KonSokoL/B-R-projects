
#include <bur/plctypes.h>
#ifdef __cplusplus
	extern "C"
	{
#endif
	#include "MotorCtrl.h"
#ifdef __cplusplus
	};
#endif
/* TODO: Add your comment here */
void FB_Motor(struct FB_Motor* inst)
{
	/*TODO: Add your code here*/
	inst->integrator.out = inst->w;
	inst->integrator.in = (inst->u/inst->ke - inst->w) * (inst->dt/inst->Tm);
	FB_Integrator(&inst->integrator);
	inst->integrator.in = inst->w = inst->integrator.out;
	inst->integrator.in *= inst->dt;
	inst->integrator.out = inst->phi;
	FB_Integrator(&inst->integrator);
	inst->phi = inst->integrator.out;
}
