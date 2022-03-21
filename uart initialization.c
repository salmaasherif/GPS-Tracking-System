        void uart_init(void)            // initializing UART portE e0,e1 (rx,tx)
        {
        SYSCTL_RCGCUART_R |= 0x0080;
        SYSCTL_RCGCGPIO_R |= 0x10;
        while ((SYSCTL_PRGPIO_R&0x10)==0){};
        UART7_CTL_R &= ~0x0001; //disable uart_ctl_r
        UART7_IBRD_R = 104;
        UART7_FBRD_R = 11;
        UART7_LCRH_R = 0x0070; // 8-bit word length, enable FIFO
        UART7_CTL_R = 0x0301; // enable RXE, TXE and UART
        GPIO_PORTE_AFSEL_R |= 0x03; // enable alt funct on PE1-0
        GPIO_PORTE_PCTL_R  = (GPIO_PORTE_PCTL_R&0xFFFFFF00)|0x00000011;
        GPIO_PORTE_DEN_R |= 0x03; // enable digital I/O on PE1-0
        GPIO_PORTE_AMSEL_R &= ~0x03; // disable analog function on PE1-0
        }
