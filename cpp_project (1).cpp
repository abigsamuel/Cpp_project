#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
char names[5][20];
int mark[5][3];
int total[5];
double average[5];
for(int i = 0;i < 5;i++){
cout<<"enter names of student: "<<endl;
cin.getline(names[i], 20);
}
for( int i = 0; i < 5; i++){
cout<<"enter 3 mark for"<<names[i]<<endl;
for(int j = 0; j < 3; j++){
cout<<"enter marks"<<j+1<<":";
cin>>mark[i][j];}
for(int i = 0; i < 5; i++){
total[i] = 0;
for(int j =0; j < 3; j++)
total[i]= total[i] + mark[i][j];
}
average[i]=total[i]/3.0 ;
}
cout<<"\n student mark sheet \n\n";
cout<<left<<setw(12)<<"name"
<<setw(6)<<"m1"
<<setw(6)<<"m2"
<<setw(6)<<"m3"
<<setw(8)<<"total"
<<setw(8)<<"average"<<endl;
for(int i = 0; i < 5; i++){
cout<<left <<setw(12)<<names[i];
for(int j = 0; j < 3; j++){
cout<<setw(6)<<mark[i][j];
}
cout<<setw(8)<<total[i];
cout<<fixed<<setprecision(1)<<average[i]<<endl;
}
int top = 0;
for(int i = 1; i < 5; i++){
if(total [i] > total [top]){
top= i;
}
}
cout<<"\n top student:"<<names[top]<<endl;
return 0;
}










    
