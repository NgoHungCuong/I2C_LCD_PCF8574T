#ifndef _KT_SOFT_I2C_
	#define _KT_SOFT_I2C_
	void KT_I2C_Start(void);
	void KT_I2C_Stop(void);
	uint8_t KT_I2C_Write(uint8_t u8Data);
	uint8_t KT_I2C_Read(uint8_t u8Ack);
	void KT_I2C_Init(void);
#endif
