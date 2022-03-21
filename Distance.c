float Degtodecimal(double x){
	int degree = x/100;
	float minutes = x - degree * 100 ;
	float y = degree + minutes/60 ;
	return y;
	}

// for distance calculation we used this function :
double Calc_distance(double latitude11, double longitude11,double latitude2,double longitude2){
	double distance = sqrt(pow((latitude11-latitude2),2)+pow((longitude2-longitude11),2));
	distance = distance*100000;
	return distance;
	}
	

// we didn't use the following function (haversine formula) 
double Calc_distance(double latitude1, double longitude1,double latitude2,double longitude2) {
	double latitude1=Degtodecimal( lat1);
	double longitude1=Degtodecimal( long1);
	double latitude2=Degtodecimal( lat2);
	double longitude2=Degtodecimal( long2);
	int R = 6371;
	double pi = 3.141592;
	double a1 = 0;
	a1 = sin(((latitude2-latitude1)*pi / 180)/2) * sin(((latitude2-latitude1)*pi / 180)/2) + sin(((longitude2-longitude1)*pi / 180)/2) * sin(((longitude2-longitude1)*pi / 180)/2) * cos((latitude1)*pi / 180) * cos((latitude2)*pi / 180);
	a1 = 2 * atan2(sqrt(a1), sqrt(1-a1));
	double distance=R * a1;
	return distance*1000;
	}

