#include<stdio.h>
#include<math.h>

int main()
{
    int Q1, result1, result2, result3, result4, result5, result6, result7;
    char Q2[1], Q3[1], Q4[1], Q5[1], Q6[1];
    printf("This is a \"Chhesra Measuring Tool\".\nIn case you are interested to know how much chhesra you are, take this quick quiz.\nAnswer all these 6 questions honestly, and you will know.\n\n");
    /*1*/
    printf("1.On a scale of 1-10, how much would you rate Sunny Leone?\n");
    printf("\nEnter the number: ");
    scanf("%d", &Q1);
    if(Q1<4){
        result1 = 1;
    }
    else if(Q1<6){
        result1 = 2;
    }
    else if(Q1<8){
        result1 = 3;
    }
    else if(Q1<11){
        result1 = 4;
    }
    /*2*/
    printf("\n\n2.Ever heard of someone called \"Mia Khalifa\"?\n");
    printf("(a)Hell, yeah!\n");
    printf("(b)Naam shunbo na keno? Fereshtar moto ekjon naari.\n");
    printf("(c)Umm... maybe?\n");
    printf("(d)Jibone naam o shuni nai. Ke eta?\n");
    printf("\nEnter your answer. Press a, b, c, or d: ");
    scanf("%c", &Q2[1]);
    if(Q2[1]=='d'){
        result2 = 1;
    }
    else if(Q2[1]=='c'){
        result2 = 2;
    }
    else if(Q2[1]=='b'){
        result2 = 3;
    }
    else if(Q2[1]=='a'){
        result2 = 4;
    }
    /*3*/
    printf("\n\n3.Do you fix your hair or act differently when a girl passes by?\n");
    printf("(a)Most of the time.\n");
    printf("(b)Sometimes.\n");
    printf("(c)Almost never.\n");
    printf("(d)Astaghfirullah, bro! Shob meye ke bon er chokhe dekhi ami!\n");
    printf("\nEnter your answer. Press a, b, c, or d: ");
    scanf("%c", &Q3[1]);
    if(Q3[1]=='d'){
        result3 = 1;
    }
    else if(Q3[1]=='c'){
        result3 = 2;
    }
    else if(Q3[1]=='b'){
        result3 = 3;
    }
    else if(Q3[1]=='a'){
        result3 = 4;
    }
    /*4*/
    printf("\n\n4.Your friend likes a girl, and he wants to propose her.\nWhat would be your advice to him?\n");
    printf("(a)\"Kheye deh, mammah!\"\n");
    printf("(b)\"If you truly love her, go ahead, bro.\"\n");
    printf("(c)\"Bhai, kheye deye ki kaaj nai tor? Eshob baad deh.\"\n");
    printf("(d)\"Khobordaar ei trap e paa dibi na. Always moneh rakhbi, Maiya=Pera.\"\n");
    printf("\nEnter your answer. Press a, b, c, or d: ");
    scanf("%c", &Q4[1]);
    if(Q4[1]=='d'){
        result4 = 1;
    }
    else if(Q4[1]=='c'){
        result4 = 2;
    }
    else if(Q4[1]=='b'){
        result4 = 3;
    }
    else if(Q4[1]=='a'){
        result4 = 4;
    }
    /*5*/
    printf("\n\n5.What is your opinion about the rape cases of Bangladesh?\n");
    printf("(a)\"Shob meye jodi bhalo bhabe porda korto aar niqab pore ber hoto, tahole eto kahini hoto na.\"\n");
    printf("(b)\"I have mixed opinions.\"\n");
    printf("(c)\"I am really ashamed of the fact that, I live in this country.\"\n");
    printf("(d)\"Kut**r bachcha rapist gulo ke shaamne pele reproductive organ kete ditam!\"\n");
    printf("\nEnter your answer. Press a, b, c, or d: ");
    scanf("%c", &Q4[1]);
    if(Q5[1]=='d'){
        result5 = 1;
    }
    else if(Q5[1]=='c'){
        result5 = 2;
    }
    else if(Q5[1]=='b'){
        result5 = 3;
    }
    else if(Q5[1]=='a'){
        result5 = 4;
    }
    /*6*/
    printf("\n\n6.A shundori girl asks for your help.\nWhat would you do?\n");
    printf("(a)\"Oboshshoi help korbo!\"\n");
    printf("(b)\"Depends on how shundori she is.\"\n");
    printf("(c)\"Chhele meye fact na. Help korte parle korbo, na parle \"Sorry\" boleh dibo.\nBut I will try my best to help.\"\n");
    printf("(d)\"Time nai eshob er.\"\n");
    printf("\nEnter your answer. Press a, b, c, or d: ");
    scanf("%c", &Q6[1]);
    if(Q6[1]=='d'){
        result6 = 1;
    }
    else if(Q6[1]=='c'){
        result6 = 2;
    }
    else if(Q6[1]=='b'){
        result6 = 3;
    }
    else if(Q6[1]=='a'){
        result6 = 4;
    }
    printf("\n\nResult time!\nRESULT:");
    result7 = result1 + result2 + result3 + result4 + result5 + result6;
    printf("\n%d", result7);

    if(result7<7){
        printf("\n\nCongratulations! Chhesramir \"C\" o apni janen na.\nApni ful er moto pobitro. Chelcheliye beheste jaben.\nDhonnobaad.\n");
    }
    else if(result7>21){
        printf("\n\nYou have already crossed the height of chhesrami.\nEnough hoise!\nTestosterone hormone control kora shikho. Nahole shaamne bipod aase.\n");
    }
    else if(result7>16){
        printf("\n\nYou are a medium-level-chhesra. Ekhono shomoy aase. Bhalo hoye jao.\n");
    }
    else if(result7>6){
        printf("\n\nYou are a bhodro chhele.\nYou know what you are doing, and you are in the right track.\nThank you.\n");
    }
    return 0;
}
