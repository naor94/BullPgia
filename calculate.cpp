#include <iostream>
#include <string>
#include "calculate.hpp"
using namespace bullpgia;
using namespace std;



   string bullpgia::calculateBullAndPgia( string choose, string guess){
        int len_c = choose.size();
        int len_g=guess.size();
        int count_bull=0;
        int count_pgia=0;
        string s;
        int array_g [guess.size()];
        int array_c [choose.size()];
        int i = 0;
        for(; i < len_c; i++)
        {
          array_c[i]=(int)(choose.at(i)-48);
        }
         i=0;
        for(; i < len_g; i++)
        {
          array_g[i]=(int)(guess.at(i)-48);
        }
         i=0;
         int minlen=len_c<len_g?len_c:len_g;
        for(; i < minlen; i++)
         {
             
            if(array_c[i]==array_g[i]){
               count_bull++;
               array_c[i]=-1;
               array_g[i]=-1;
              

           }
          
           

           
            
        }
      i=0;
        for(; i < len_c; i++)
        {
           for(int j = 0; j < len_g; j++)
           {
               if(((array_c[i]!=-1) && (array_g[j]!=-1)) && (array_c[i]==array_g[j])){
                   count_pgia++;
                   array_c[i]=-1;
                   array_g[j]!=-1;

           }
           
        }
        

        }
        
        
       string bull_1=to_string(count_bull);
       string pgia_1=to_string(count_pgia);
       s=bull_1+","+pgia_1;
        
        
    return s;


    
}


