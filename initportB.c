  void initportB()
  {
      SYSCTL_RCGCGPIO_R|=0x02;
      while ((SYSCTL_PRGPIO_R&0x02)==0){};
    GPIO_PORTB_CR_R     = 0xFF ;
    GPIO_PORTB_AMSEL_R  = 0x00 ;
    GPIO_PORTB_PCTL_R   = 0x00000000 ;
    GPIO_PORTB_AFSEL_R  = 0x00 ;
    GPIO_PORTB_DIR_R    = 0xFF ;
    GPIO_PORTB_DEN_R    = 0xFF ;
    GPIO_PORTB_DATA_R   &= ~0xFF ;
  }