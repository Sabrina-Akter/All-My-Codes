#include<stdio.h>
#include<math.h>

main ()
{
    char ch2[1], ch3[1];
    int Q_1, result1, n2, n3;
    scanf("\n%d\n", &Q_1);
    if(Q_1<4){
        result1 = 1;
    }
    else if(Q_1<6){
        result1 = 2;
    }
    else if(Q_1<8){
        result1 = 3;
    }
    else if(Q_1<11){
        result1 = 4;
    }
    scanf("\n%c", &ch2[1]);

    if(ch2[1]=='a'){
        n2 = 1;
    }
    else if(ch2[1]=='b'){
        n2 = 2;
    }
    else if(ch2[1]=='c'){
        n2 = 3;
    }
    else {
        n2 = 10;
    }

    scanf("\n%c", &ch3[1]);

    if(ch3[1]=='a'){
        n3 = 1;
    }
    else if(ch3[1]=='b'){
        n3 = 2;
    }
    else if(ch3[1]=='c'){
        n3 = 3;
    }
    else {
        n3 = 10;
    }
    printf("\nSum: %d", result1+n2+n3);
    return 0;
}
