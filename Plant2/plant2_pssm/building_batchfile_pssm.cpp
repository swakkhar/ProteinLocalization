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
		long i,j;
		int m =10;
		char num_data[7];
		char format[]=".txt";
		char add_text[50]="dos2unix train";
		ofstream out("e:\\pssm_convert.sh", ios::out);
		if(!out)
		{
			cout<<"shiiiiiiiiiiiiiiiit";
			return 0;
		}
		//out<<"cd c:\\\\Program Files\\NCBI\\blast-2.2.25+\\bin";
		//out<<endl;
		for(i=1;i<11212;i++)
		{
		    j=i;
            itoa(j,num_data,10);
            strcat(add_text,num_data);
            strcat(add_text,format);
            //strcat(add_text," -db /export/home/s2784083/db/nr -out /export/home/s2784083/testT/outfile/out");
            //strcat(add_text,num_data);
            //strcat(add_text,format);
            //strcat(add_text," -num_iterations 3 -out_ascii_pssm /export/home/s2784083/testT/pssmfile/pssm");
            //strcat(add_text,num_data);
            //strcat(add_text,format);
            //strcat(add_text," -inclusion_ethresh 0.001");
            out<<add_text;
            out<<'\n';
		    strcpy(add_text,"dos2unix train");
        }
        out.close();
		return 0;
}
