   #include <stdio.h> 
       
   int main(void) 
   { 
     int i, tarkistus; 
     for(i = 1; i < 11; i++) 
     { 
       tarkistus = printf("i:n arvo on tällä kertaa %d", i); 
       if(tarkistus == EOF) 
       { 
         break; 
       }  
     } 
     return 0; 
   }