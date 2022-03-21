//not in a function form as it returns 2 variables
                for(i =0 ; i<200 ; i++){
                while((UART7_FR_R&0X10)!=0){}
                turnledon();
                NMEA[i]=UART7_DR_R;
                if(NMEA[i]=='A' && NMEA[i-1]=='G'){//check for gpgga line and takes index of A in j
                    j=i;
                }
                }

                for( y =0 ; y<50 ; y++){ //copies gpgga line in another string
                    GPGGA[y]=NMEA[j++];
                }

                if(GPGGA[0]=='A'){   //check for GPGGA
                ID = strtok(GPGGA,",");
                Time = strtok(NULL,",");
                Latitude1 = strtok(NULL,","); //important
                direction = strtok(NULL,",");
                Longitude1 = strtok(NULL,","); //important
                longitude1=atof(Longitude1);
                latitude1=atof(Latitude1);}
