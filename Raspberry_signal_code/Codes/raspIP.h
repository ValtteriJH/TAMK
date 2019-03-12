
#define  IP_tamk
//#define  IP_koti
//////////////////
//// Raspberryn IP Koti
#ifdef IP_koti
#define  IP_1    192
#define  IP_2    168
#define  IP_3    1
#define  IP_4    7
#endif
 
//// Raspberryn IP TAMK
#ifdef IP_tamk
#define  IP_1    192
#define  IP_2    168
#define  IP_3    112
#define  IP_4    23
#endif

//    apu_sek = asek % 120;  // apu_sek 0-120, 0-120 ....
//    apu_sek = asek % osam;
    
//    apu_sek = apu_sek / 5;  // 120/5 = 24    apu_sek 1-24 , 1-24, ....	     //    apu_sek = apu_sek / jakaja;  
//    apu_sek=asek % 15;   // testausta varten nopeampi paivitys vali
//    
//    Testi moodi /////////////

//#define osam  15    //   testi moodi     0-15,  0-15, o-15...  sek 
//#define jakaja 1    //   testi moodi

//    Mittaus   ////////////////


#define osam  120   //   mittaus moodi     0-120,  0-120, o-120...  sek 

#define jakaja 3    //   mittaus moodi   / 120/3 = 40    apu_sek 1-40 , 1-40, ....

/////////////////////////////////////////////////////////////////////////////


#ifdef IP_koti
char website[] = "time1.mikes.fi"; 
#endif


#ifdef IP_tamk
char website[] = "ntp.tamk.fi"; 
#endif

 //char website[]PROGMEM = "1.us.pool.ntp.org"; 
 ///char website[]PROGMEM = "ntp2d.mcc.ac.uk";
 //char website[]PROGMEM = "ntp2c.mcc.ac.uk";
 //char website[]PROGMEM = "ntp.exnet.com";
 //char website[]PROGMEM = "ntp.cis.strath.ac.uk";
 //char website[]PROGMEM = "clock01.mnuk01.burstnet.eu";

