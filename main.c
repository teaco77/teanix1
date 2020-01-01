#include <stdarg.h>	//used for not define jyp
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/select.h>
#include <sys/time.h>
#include <errno.h>
#include <unistd.h>		//jyp add

#include <string.h> 	//jyp add used for memset and memcpy



int sumi(int c, ...)
  {
     va_list ap;
     va_start(ap,c);
     int i;
     int sum = c;
     c = va_arg(ap,int);
     while(0!=c)
      {
         sum = sum+c;
         c = va_arg(ap,int);
     }
     return sum;
 }

//int main(int argc, char* argv[])
int main(void)
  {
     int i=sumi(1,2,3,4,5,6,7,8,9,0);
     printf("the i is: %d\n",i);
     return 0;
 }


