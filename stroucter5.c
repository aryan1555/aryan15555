#include<stdio.h>
struct netbill
{
    int rate;
    int qty;
    int amt;
    int dis;
    int billamt;
    int gst;
    int netbill;
    
};

int main ()
{
    struct netbill  netbill[3];

    for (int i=0;i<3;i++){
        printf("enter the rate of item :");
        scanf("%d",&netbill[i].rate);
        printf("enter the qty of item :");50
        scanf("%d",&netbill[i].qty);

        netbill[i].amt=netbill[i].rate*netbill[i].qty;
        netbill[i].dis = netbill[i].amt*0.05;
        netbill[i].billamt=netbill[i].amt - netbill[i].dis;
        netbill[i].netbill= netbill[i].billamt*0.18;
        netbill[i].gst= netbill[i].billamt+ netbill[i].gst;

        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t", netbill[i].rate, netbill[i].qty, netbill[i].amt, netbill[i].dis, netbill[i].billamt, netbill[i].netbill,  netbill[i].gst);

    }

return 0;

}