#define GPIOD_BASE_ADDR 0x40020C00
#define GPIOD_ODR_OFFSET 0x14
#define GPIOD_ODR *(volatile long *)(GPIOD_BASE_ADDR + GPIOD_ODR_OFFSET)



#define RCC_BASE_ADDR 0x40023800
#define RCC_AHB1ENR_OFFSET 0x30
#define RCC_AHB1ENR *(volatile long *)(RCC_BASE_ADDR + RCC_AHB1ENR_OFFSET)



#define GPIOA_BASE_ADDR 0x40020000
#define GPIOA_IDR_OFFSET 0x10
#define GPIOA_IDR *(volatile long *)(GPIOA_BASE_ADDR + GPIOA_IDR_OFFSET)



#define GPIOD_MODE_OFFSET 0x00
#define GPIOD_MODE *(volatile long *)(GPIOD_BASE_ADDR + GPIOD_MODE_OFFSET)



#define GPIOA_MODE_OFFSET 0x00
#define GPIOA_MODE *(volatile long *)(GPIOA_BASE_ADDR + GPIOA_MODE_OFFSET)


int main()
{
	int a,b=0,c=0;
	RCC_AHB1ENR |= (1<<3)|(1<<0); 
	GPIOD_MODE = 0; 
	GPIOA_MODE = 0; 
	GPIOA_IDR |= 1<<3;
	GPIOD_MODE |= (0<<25)|(1<<24);
	GPIOD_MODE |= (0<<27)|(1<<26);
	GPIOD_MODE |= (0<<29)|(1<<28);
	GPIOD_MODE |= (0<<31)|(1<<30);
	GPIOA_MODE |= (0<<1)|(0<<0);
	GPIOD_ODR = 0X00;
	while(1)
	{
					while((GPIOA_IDR & 0x01) == 1)
					{
						b++;
					}
					if(b>30000)
				    {
					b=0;
					GPIOD_ODR |= 1<<14;
					for(a=0;a<100000;a++);
					}
					else if(b>0 && b<30000)
					{
					c=1;
                    }
					else
					{

					}
						if(c==1)
						{


				        for(c=0;c<5;c++)
						{
						GPIOD_ODR |= 1<<12;
						for(a=0;a<10000;a++);
						GPIOD_ODR &= ~(1<<12);
						for(a=0;a>=10000;a++);
						}
						for(c=0;c<5;c++)
						{
						GPIOD_ODR |= 1<<13;
						for(a=0;a<10000;a++);
						GPIOD_ODR &= ~(1<<13);
					    for(a=0;a>=10000;a++);
						}
						for(c=0;c<5;c++)
						{
						GPIOD_ODR |= 1<<15;
						for(a=0;a<10000;a++);
						GPIOD_ODR &= ~(1<<15);
						for(a=0;a>=10000;a++);
						}


						for(c=0;c<5;c++)
						{
						GPIOD_ODR |= 1<<12;
						for(a=0;a<50000;a++);
						GPIOD_ODR &= ~(1<<12);
						for(a=0;a>=50000;a++);
						}
						for(c=0;c<5;c++)
						{
						GPIOD_ODR |= 1<<13;
						for(a=0;a<50000;a++);
						GPIOD_ODR &= ~(1<<13);
						for(a=0;a>=50000;a++);
						}
						for(c=0;c<5;c++)
						{
						GPIOD_ODR |= 1<<15;
						for(a=0;a<50000;a++);
					    GPIOD_ODR &= ~(1<<15);
						for(a=0;a>=50000;a++);
						}
						
						for(c=0;c<5;c++)
					    {
						GPIOD_ODR |= 1<<12;
						for(a=0;a<90000;a++);
						GPIOD_ODR &= ~(1<<12);
						for(a=0;a>=90000;a++);
						}
						for(c=0;c<5;c++)
						{
						GPIOD_ODR |= 1<<13;
						for(a=0;a<90000;a++);
						GPIOD_ODR &= ~(1<<13);
						for(a=0;a>=90000;a++);
						}
						for(c=0;c<5;c++)
						{
						GPIOD_ODR |= 1<<15;
						for(a=0;a<90000;a++);
						GPIOD_ODR &= ~(1<<15);
						for(a=0;a>=90000;a++);
						}

						}


	}
	return 0;
}