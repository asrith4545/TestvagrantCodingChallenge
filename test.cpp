#include<iostream>
using namespace std;
int main(){
 float l_gst=(18/100*(1100)); //wallet gst
 float u_gst=4*(12/100*(900));//umbrella gst
 float c_gst=3*(28/100*(200));//cigarette gst
 float l=1100+l_gst;//wallet cost
 float u=4*(900)+u_gst;//umbrella cost
 float c=3*(200)+c_gst;//cigarette cost
 int h=2*100;
 float bill=l+u+c+h;//total amount
 cout<<bill;
 //for maximum gst
 if(l_gst>u_gst && l>c_gst)
 {
    cout<<"the max gst is: "<<l_gst; 
 }
 else if(u_gst>l_gst && u_gst>c_gst)
 {
    cout<<"the max gst is: "<<u_gst; 
 }
 else{
    cout<<"the max gst is: "<<c_gst; 
 }
}