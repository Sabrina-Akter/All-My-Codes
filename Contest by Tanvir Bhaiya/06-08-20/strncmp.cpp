#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
   char str1[15];
   char str2[15];
   int ret;

   strcpy(str1, "aaABCD");
   strcpy(str2, "ABCDEF");

   ret = strncmp(str1+2, str2, 4);
   cout << ret;

   /*if(ret < 0) {
      printf("str1 is less than str2");
   } else if(ret > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }*/

   return(0);
}
