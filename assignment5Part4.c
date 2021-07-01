#include <stdio.h>
#include <stdarg.h>

#define createavg3(T)\
    void avg3##T(T n, ...){\
        va_list mylist;\
        va_start(mylist,n);\
        double tmp=va_arg(mylist,int)+0.0;\
        double len = 1.0;\
        for(int i=1; i<n; i++){\
                tmp += va_arg(mylist,int);\
                len+=1.0;\
        }\
        va_end(mylist);\
        tmp = tmp/len;\
	printf("The mean is %g\n",tmp);\
}

createavg3(int)
createavg3(double)

int  main(){
	avg3int(3,4,5,6);
	avg3int(9,4,5,6,7,8,9,10,11,12);
	avg3int(2,3,-40);
	avg3double(3,40,50,60);
	avg3double(3,420,52308,-3026);

	return 0;
}
