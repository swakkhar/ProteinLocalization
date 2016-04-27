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
		int i,j;
		int m =10;
		char num_data[5];
		char format[]=".txt";
		char add_text[250]="psiblast -query test";
		ofstream out("e:\\pssm_batch.txt", ios::out);
		if(!out)
		{
			cout<<"shiiiiiiiiiiiiiiiit";
			return 0;
		}
		//out<<"cd c:\\\\Program Files\\NCBI\\blast-2.2.25+\\bin";
		//out<<endl;
		for(i=1;i<635;i++)
		{
		    j=i;
            itoa(j,num_data,10);
            strcat(add_text,num_data);
            strcat(add_text,format);
            strcat(add_text," -db nr -out out");
            strcat(add_text,num_data);
            strcat(add_text,format);
            strcat(add_text," -num_iterations 3 -out_ascii_pssm pssm");
            strcat(add_text,num_data);
            strcat(add_text,format);
            strcat(add_text," -inclusion_ethresh 0.001");
            out<<add_text;
            out<<'\n';
		    strcpy(add_text,"psiblast -query test");
        }
        out.close();
		return 0;
}
