  void SysTick_Delay(uint32_t delay) // delay is in 62.5ns units
  {
      NVIC_ST_CTRL_R = 0;            // disable SysTick during setup
      NVIC_ST_RELOAD_R = delay-1;    // number of counts to wait for
      NVIC_ST_CURRENT_R = 0;         // CURRENT clears
      NVIC_ST_CTRL_R |= 0x5;         // enable SysTick

      while((NVIC_ST_CTRL_R&0x00010000)==0) {
          ;  // wait for COUNT flag
      }
  }