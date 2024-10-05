#include<reg52.h>
void send(unsigned char *s)
{
while(*s){
SBUF=*s++;
while(TI==0);
TI=0;
}
}
void main()
{
unsigned int i;
SCON=0X50;
TMOD=0x20;
TH1=TL1=0Xfd;
TR1=1;
while(1){
send("Embetronix ");
for(i=0;i<35000;i++);
}
}