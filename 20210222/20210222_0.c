#include <stdio.h>
struct tagTest{
    char m_chValue;
    unsigned short m_usValurl
   
};
int main(void){
    struct tagTest geri={ 'G', 126203};
     printf("%d",sizeof(geri));
     return 0;
}