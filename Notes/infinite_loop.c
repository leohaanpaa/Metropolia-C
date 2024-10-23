 #include <stdio.h> 
           
   int main(void) 
   { 
      int i; 
      for(i = 0; i < 2; i++) 
      { 
         printf("i:n arvo on tällä kertaa %d", i); 
         i--; 
      } 
      return 0; 
    }