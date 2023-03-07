#include<stdlib.h>
int main(int argc, char **argv){
        int sum = 0;
        if(argc>5)
                return 0;
        else
                for(int d=1; d<argc; d++){
                        sum = sum + atoi(argv[d]);
                }
        return sum;}
