#include <iostream>
#include <string>
#include "calculate.hpp"
using namespace bullpgia;
using namespace std;



   string bullpgia::calculateBullAndPgia( string x, string y){
        int count_bull=0;
        int count_pgia=0;
        string s;
        for(int i = 0; i < x.length(); i++)
        {
            for(int j = 0; j< y.length(); j++)
            {
               if(i==j&&x.at(i)==y.at(j)){
                   count_bull++;
               }
               else if(x.at(i)==y.at(j)){
                   count_pgia++;
               }
            }
            
        }
       string bull=to_string(count_bull);
       string pgia=to_string(count_pgia);
       s=bull+","+pgia;
        
        
    return s;
}


