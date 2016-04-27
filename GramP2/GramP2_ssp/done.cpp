#include <iostream>
#include <fstream>
#include <cctype>
#include <ctype.h>
#include <iomanip>
#include <cstring>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main()
{
		int i,j,k;
		//int m =10;
		i=j=k=0;
		char num_data[10];
		double d=0;
		char c;
        //char instr[2000];
        int count=1;
		char add_text1[100]="e:\\six\\svm_25pdb_";
		char format[]=".txt";
        ofstream out("e:\\khoda.csv",ios::out);
        if(!out)
            {   cout<<"shit shit shit";
                return 0;     }
		for(i=1;i<118;i++)
		{    itoa(count,num_data,10);
            count+=1;
            strcat(add_text1,num_data);
            strcat(add_text1,format);
            ifstream in(add_text1, ios::in);
            if(!in)
            {     cout<<"shiiiiiiiiiiiiiiiit";
                return 0;       }
            in>>c;
            while(!isdigit(c))
            {    in>>c;        }
            in>>d;
            in>>d;
            out<<setprecision(2)<<fixed<<d;
            out<<'\n';
            strcpy(add_text1,"e:\\six\\svm_25pdb_");
            in.close();    }
        out.close();
        //in.close();
		return 0;
}
