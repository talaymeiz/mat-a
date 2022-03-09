#include "mat.hpp"
#include <string>
#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

namespace ariel{

// string revers(string s){
//     string str= reverse(s.begin(),s.end());
//     return str;
// }
// string reverse(strint str){
//     for(int i=0; i<len(str)/2;i++){
//         char temp = str[i];
//         str[i]=str[len-i-1];
//         str[len-i-1]=temp;
//     }
//     return str;
// // }
// 
// 
// string row(int row, int index, char c1, char c2){
// 
//     string str= "";
//     int mid= row- index*2;
//     for(int i=0; i<=mid; i++){
//         if (index%2==0)
//             str=str+ c1;
//         else
//             str=str+ c2;
//     }
//     string sifa="";
//     for(int i=0; i<=index; i++){
//         if (i%2==0)
//             sifa=sifa+ c1;
//         else
//             sifa=sifa+ c2;
//     }
//     str= sifa+ str+ sifa;// revers(sifa)
//     return str;
// }
// 
string mat(int row, int col, char c1, char c2){

    string str="aaa";
    // string str= row(row, col/2+1, c1, c2);
    // int lop= (col-3)/2;
    // for(int i=lop; i>=0; i++){
        // string s= row(row, i, c1, c2);
        // str= s+str+s;
    // }
    if (row<1 || col<1 || row%2==0 || col%2==0){
        throw std::domain_error("Erorr!");
    }
    return str;
}

}