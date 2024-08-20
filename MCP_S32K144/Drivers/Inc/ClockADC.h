#ifndef		_CLOCKADC_H
#define		_CLOCKADC_H

#include "S32K1xx.h"


/* Mode in PCS select source */
#define PCS_SOSCDIV2								1U
#define PCS_SIRCDIV2								2U
#define PCS_FIRCDIV2								3U
#define PCS_SPLLDIV2								6U

#define ADC_SC1_ADCH_MASK						0x1FU

#define ADC_CFG1_ADICLK							0
#define ADC_CFG1_MODE								2
#define ADC_CFG1_ADIV								5

#define CFG1_ADIV_DIV1							0
#define CFG1_ADIV_DIV2							1
#define CFG1_ADIV_DIV4							2
#define CFG1_ADIV_DIV8							3

#define CFG1_MODE_8BIT							0
#define CFG1_MODE_12BIT							1
#define CFG1_MODE_10BIT							2

#define CFG1_ADICLK									0


void SourceSOSC_8Mhz (void);
void SourcePLL (void);
void RunNormalMode_80MHz(void);

void ADC_Init (void);
void ADC_channel_convert( uint16_t channel);
uint8_t ADC_conversion_complete (void);
uint32_t ADC_Channel_Read(void);

#endif
