void sevsegDisplay(volatile int distance){
int arr[]={63 , 6 , 91 , 79 , 102 , 109 , 125 , 7 , 127 , 111 };
                    int i=0;
                    int digits[3];
                    for(i=0 ;i<3 ;i++ ){
                        digits[i]=distance%10 ; // digits[3 ,2 ,1]
                        distance=distance/10;
                    }
                        //display for 2.5 sec
                        for(i=0 ; i<300 ; i++){
                        //pin-->8 =0 toggle 3rd screen
                        GPIO_PORTA_DATA_R =0XDF;
                        GPIO_PORTB_DATA_R = arr[digits[0]];

                        SysTick_Delay(16000);
                        //pin-->9 =0 toggle 2nd screen
                        GPIO_PORTA_DATA_R =0XBF;
                        GPIO_PORTB_DATA_R = arr[digits[1]];

                        SysTick_Delay(16000);
                        //pin-->12 =0 toggle 1st screen
                        GPIO_PORTA_DATA_R =0X7F;
                        GPIO_PORTB_DATA_R = arr[digits[2]];

                        SysTick_Delay(16000);
                        GPIO_PORTA_DATA_R =0XFF;}

          }
