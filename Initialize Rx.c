	// This is not the final version of the function.

	char* init_Rx()
        {
        int i;
        while(1){
        while ((UART7_FR_R & 0x0010) != 0 ){};
        static char x[100];
        for( i=0; i<100; i++)
        {
            x[i] = UART7_DR_R;
            return x;}
        }}
