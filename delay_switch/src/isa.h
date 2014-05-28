//define a operation on packets
#ifndef ISA_HEADER
#define ISA_HEADER

#include<gxio/mpipe.h>

#define op_time_t unsigned int
#define op_port_t unsigned int
enum func_t{DROP,FORWARD,STORE,REPORT};
struct ISA 
{
	enum func_t func;//operation type,include drop forward store and report
	gxio_mpipe_idesc_t  * packet;//the packet descriptor
	op_time_t time;//delay time
	op_port_t port;//the link to put the packet
};
void handle(struct ISA instr);
#endif
