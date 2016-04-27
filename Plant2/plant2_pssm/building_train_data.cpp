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
		int i=0;
		int m =10;
		char num_data[5];
        char instr[20000];
        int count=1;
		char format[]=".txt";
		char add_text[50]="e:\\one\\train";
		ifstream in("e:\\sequence.txt", ios::in);
		if(!in)
		{
			cout<<"shiiiiiiiiiiiiiiiit";
			return 0;
		}
		for(i=0;i<20000;i++)
		{
			instr[i]='\0';
		}
		while(in)
		{
			in.getline(instr,20000);
			m=strlen(instr);
			if(m<=5)
				break;

            itoa(count,num_data,10);
            count+=1;
            strcat(add_text,num_data);
            strcat(add_text,format);
            ofstream out(add_text,ios::out);
            if(!out)
            {
                cout<<"shit shit shit";
                return 0;
            }
            out<<instr;
            out<<'\n';
            for(i=0;i<20000;i++)
            {
                instr[i]='\0';
            }
            strcpy(add_text,"e:\\one\\train");
        }
        in.close();
		return 0;
}
