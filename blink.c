#include <wiringPi.h> 
int main(void)
{
         int pin[8]={0,1,2,3,4,5,6,7};
         
         wiringPiSetup();
         for (int i=0; i<8; i++)
         {
	pinMode (pin[i], OUTPUT);
           }
         for (int i=0; i<8; i++)
         {
                  digitalWrite  (pin[i], LOW);
          }

           while(1)
          {
                   for  (int i=0; i<8; i++)
                   {
                              digitalWrite (pin[i], HIGH);
                     }
                    delay(200);
                    for (int i=0; i<8; i++)
                    {
                            digitalWrite  (pin[i], LOW);
                     }
         }
          delay(200);
 }
     }
