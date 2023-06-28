#include<stdio.h>
#include<math.h>

int main()
{
    int Q1, n1, n2, n3, n4, n5, n6, n7;
    char Q2[1], Q3[1], Q4[1], Q5[1], Q6[1];

    printf("This is a \"Chhesra Measuring Tool\".\nIn case you are interested to know how much chhesra you are, take this quick quiz.\nAnswer all the 6 questions honestly, and you will know.\n\n");

    /*1*/
    printf("1.On a scale of 1-10, how much would you rate Sunny Leone?\n");
    printf("\nEnter the number: ");
    scanf("%d", &Q1);
    if(Q1<4){
        n1 = 1;
    }
    else if(Q1<6){
        n1 = 2;
    }
    else if(Q1<8){
        n1 = 3;
    }
    else if(Q1<11){
        n1 = 4;
    }

    /*2*/
    printf("\n\n2.Ever heard of someone called \"Mia Khalifa\"?\n");
    printf("(a)Hell, yeah!\n");
    printf("(b)Naam shunbo na keno? Fereshtar moto ekjon naari.\n");
    printf("(c)Umm... maybe?\n");
    printf("(d)Jibone naam o shuni nai. Ke eta?\n");
    printf("\nEnter your answer. Press a, b, c, or d: ");
    scanf("\n%c", &Q2[1]);
    if(Q2[1]=='d'){
        n2 = 1;
    }
    else if(Q2[1]=='c'){
        n2 = 2;
    }
    else if(Q2[1]=='b'){
        n2 = 3;
    }
    else if(Q2[1]=='a'){
        n2 = 4;
    }

    /*3*/
    printf("\n\n3.Do you fix your hair or act differently when a girl passes by?\n");
    printf("(a)Most of the time.\n");
    printf("(b)Sometimes.\n");
    printf("(c)Almost never.\n");
    printf("(d)Astaghfirullah, bro! Shob meye ke bon er chokhe dekhi ami!\n");
    printf("\nEnter your answer. Press a, b, c, or d: ");
    scanf("\n%c", &Q3[1]);
    if(Q3[1]=='d'){
        n3 = 1;
    }
    else if(Q3[1]=='c'){
        n3 = 2;
    }
    else if(Q3[1]=='b'){
        n3 = 3;
    }
    else if(Q3[1]=='a'){
        n3 = 4;
    }

    /*4*/
    printf("\n\n4.Your friend likes a girl, and he wants to propose her.\nWhat would be your advice to him?\n");
    printf("(a)\"Kheye deh, mammah!\"\n");
    printf("(b)\"If you truly love her, go ahead, bro.\"\n");
    printf("(c)\"Bhai, kheye deye ki kaaj nai tor? Eshob baad deh.\"\n");
    printf("(d)\"Khobordaar ei trap e paa dibi na! Always moneh rakhbi, Maiya=Pera.\"\n");
    printf("\nEnter your answer. Press a, b, c, or d: ");
    scanf("\n%c", &Q4[1]);
    if(Q4[1]=='d'){
        n4 = 1;
    }
    else if(Q4[1]=='c'){
        n4 = 2;
    }
    else if(Q4[1]=='b'){
        n4 = 3;
    }
    else if(Q4[1]=='a'){
        n4 = 4;
    }

    /*5*/
    printf("\n\n5.What is your opinion about the rape cases of Bangladesh?\n");
    printf("(a)\"Shob meye jodi bhalo bhabe porda korto aar niqab pore ber hoto, tahole eto kahini hoto na.\"\n");
    printf("(b)\"I have mixed opinions.\"\n");
    printf("(c)\"I am really ashamed of the fact that, I live in this country.\"\n");
    printf("(d)\"Kut**r bachcha rapist gulo ke shaamne pele reproductive organ kete ditam!\"\n");
    printf("\nEnter your answer. Press a, b, c, or d: ");
    scanf("\n%c", &Q5[1]);
    if(Q5[1]=='d'){
        n5 = 1;
    }
    else if(Q5[1]=='c'){
        n5 = 2;
    }
    else if(Q5[1]=='b'){
        n5 = 3;
    }
    else if(Q5[1]=='a'){
        n5 = 4;
    }

     /*6*/
    printf("\n\n6.A shundori girl asks for your help.\nWhat would you do?\n");
    printf("(a)\"Oboshshoi help korbo!\"\n");
    printf("(b)\"Depends on how shundori she is.\"\n");
    printf("(c)\"Chhele meye fact na. Help korte parle korbo, na parle \"Sorry\" boleh dibo.\nBut I will try my best to help.\"\n");
    printf("(d)\"Time nai eshob er.\"\n");
    printf("\nEnter your answer. Press a, b, c, or d: ");
    scanf("\n%c", &Q6[1]);
    if(Q6[1]=='d'){
        n6 = 1;
    }
    else if(Q6[1]=='c'){
        n6 = 2;
    }
    else if(Q6[1]=='b'){
        n6 = 3;
    }
    else if(Q6[1]=='a'){
        n6 = 4;
    }

    printf("\n\nYOUR POINTS:");
    n7 = n1+n2+n3+n4+n5+n6;
    printf("\n%d + %d + %d + %d + %d + %d = %d", n1, n2, n3, n4, n5, n6, n7);
    printf("\n\n*Points 1-6 means you are an angel.");
    printf("\n*Points 7-15 means you are a gentleman.");
    printf("\n*Points 16-20 means you are a medium-level-chhesra.");
    printf("\n*Points above 20 means you are a pure chhesra.");

    printf("\n\nFINAL RESULT:\n");

    if(n7<7){
        printf("Congratulations! Chhesramir \"C\" o apni janen na.\nApni ful er moto pobitro. Chelcheliye beheste jaben.\nDhonnobaad.\n");
    }
    else if(n7>20){
        printf("You have already crossed the height of chhesrami.\nBashai jaane?\nEnough hoise!\nTestosterone hormone control kora shikho. Nahole shaamne bipod aase.\n");
    }
    else if(n7>15){
        printf("You are a medium-level-chhesra. Ekhono shomoy aase. Bhalo hoye jao.\n");
    }
    else if(n7>6){
        printf("You are a bhodro chhele.\nYou know what you are doing, and you are in the right track.\nThank you.\n");
    }


    printf("\n\nThe End.\n");
    return 0;
}
