/**
 * \file
 *
 * \brief Empty user application template
 *
 */

/**
 * \mainpage User Application template doxygen documentation
 *
 * \par Empty user application template
 *
 * Bare minimum empty user application template
 *
 * \par Content
 *
 * -# Include the ASF header files (through asf.h)
 * -# "Insert system clock initialization code here" comment
 * -# Minimal main function that starts with a call to board_init()
 * -# "Insert application code here" comment
 *
 */

/*
 * Include header files for all drivers that have been imported from
 * Atmel Software Framework (ASF).
 */
/*
 * Support and FAQ: visit <a href="https://www.microchip.com/support/">Microchip Support</a>
 */
#include <asf.h>


int main (void)
{
	int dia, dia_semana, mes, ano, hora, minuto, segundo;
	
	int calendaro, relojo;
	/* Insert system clock initialization code here (sysclk_init()). */

	sysclk_init();
	board_init();
	
	
	while(1){
		calendaro = RTC -> RTC_CALR;
		relojo = RTC -> RTC_TIMR;
		
		dia = RTC_CALR_DATE(calendaro);
		
		/*
		mes = RTC_CALR_MONTH;
		ano = RTC -> RTC_CALR_YEAR;
		dia_semana = RTC -> RTC_CALR_DAY;
		
		hora = RTC -> RTC_TIMR_HOUR;
		minuto = RTC -> RTC_TIMR_MIN;
		segundo = RTC -> RTC_TIMR_SEC;
		
		printf("Hoje é %d, %d de %d de 20%d.\nA hora atual é %d:%d:%d", dia_semana, dia, mes, ano, hora, minuto, segundo);*/
		
		printf("Coisinha de guilherme mede %d\n", dia);
		
	}	

	/* Insert application code here, after the board has been initialized. */
}
