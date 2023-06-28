int main ()
{
    char ch = 'k';

    if (ch >= 'a' && ch <= 'z') {
        printf("%c is lower case\n",ch);
    }
    else if (ch >= 'A' && ch <= 'Z') {
        printf("%c is the upper case\n",ch);
    }
    return 0;
}
