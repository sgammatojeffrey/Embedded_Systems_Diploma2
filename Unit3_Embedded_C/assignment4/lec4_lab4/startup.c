// startup.c
// Eng.Shady mamdouh
#include <stdint.h>

extern int main(void);
extern unsigned int _E_text ;
extern unsigned int _S_data ;
extern unsigned int _E_data ;
extern unsigned int _S_bss ;
extern unsigned int _E_bss ;
static unsigned long stack_top[256] ; // 265*4 = 1024 byets

void Reset_Handler()

{   
     int i ;
	//we need to copy data section from flash to ram
	unsigned int DATA_size = (unsigned char*)&_E_data - (unsigned char*)&_S_data; // casting to tell that is add of char to copy byte by byte 
	unsigned char* p_src = (unsigned char*)&_E_text ;
	unsigned char* p_dst = (unsigned char*)&_S_data ;
	for (i=0; i< DATA_size; i++)
	{
		*((unsigned char*)p_dst++) = *((unsigned char*)p_src++);
	}
	// init .bss section in sram = 0
	unsigned int BSS_size = (unsigned char*)&_E_bss - (unsigned char*)&_S_bss;
	p_dst = (unsigned char*)&_S_bss; 
	for (i=0; i< BSS_size; i++)
	{
		*((unsigned char*)p_dst++) = (unsigned char)0; 
    }                                                  
	
	// jump main
	main();
}

void Default_handler()
{
	Reset_Handler();
}
void NMI_Handler() __attribute__ ((weak,alias("Default_handler")));;
void H_fault_Handler() __attribute__ ((weak,alias("Default_handler")));;
	
   void (* const g_p_fn_vectors[])() __attribute__((section(".vectors"))) =   // array of pointers to functions take nothing and return void
   {
	 (void(* )()) ((unsigned long)stack_top + sizeof(stack_top)),
      &Reset_Handler,   // no casting needed beacause each symbol address already
      &NMI_Handler,    // 	 points to function take nothing and return void 
	  &H_fault_Handler,                  
	 	 
   };