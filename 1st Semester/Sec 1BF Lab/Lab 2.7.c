#include<stdio.h>
#include<math.h>

int main()
{
    char  x[1], y[1];

    printf("The first player says: ");
    scanf("%c", &x[1]);
    printf("The second player says: ");
    scanf("\n%c", &y[1]);

    if(x[1]==y[1]){
        printf("\nThis is a tie.");
    }
    else if(x[1]=='r' && y[1]=='p'){
        printf("\nThe second player is the winner.");
    }
    else if(x[1]=='p' && y[1]=='r'){
        printf("\nThe first player is the winner.");
    }
    else if(x[1]=='r' && y[1]=='s'){
        printf("\nThe first player is the winner.");
    }
    else if(x[1]=='s' && y[1]=='r'){
        printf("\nThe second player is the winner.");
    }
    else if(x[1]=='s' && y[1]=='p'){
        printf("\nThe first player is the winner.");
    }
    else if(x[1]=='p' && y[1]=='s'){
        printf("\nThe second player is the winner.");
    }
    return 0;
}

