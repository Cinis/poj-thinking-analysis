#include <stdio.h>
#define MIN(x,y) (x<y?x:y)
#define MAX(x,y) (x<y?y:x)
int main(){
    int a,b,c,d;
    double t1,t2,t;
    while (scanf("%d %d %d %d",&a,&b,&c,&d),a!=0){
        t1=MIN(c*1.0/a,d*1.0/b);
        t2=MIN(d*1.0/a,c*1.0/b);
        t=MAX(t1,t2);
        t=MIN(t,1);
        t*=100;
        printf( "%d%%\n" , int(t) );
    }
    return 0;
}
