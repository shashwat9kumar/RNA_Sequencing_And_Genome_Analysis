#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


#define INPUTFILE "actual.sequence"
#define OUTPUTFILE "gcInActual.dat"

ifstream fin;
ofstream fout;

vector<string> sorted_reads;

void sort_reads()
{
    sort(sorted_reads.begin(), sorted_reads.end());
    for(auto read : sorted_reads)
    {
        fout<<read<<endl;
    }
}


void GC()
{

    fin.open(INPUTFILE);
    fout.open(OUTPUTFILE);

    float mx= 0;


    int x = 1;
    float a=0,t=0,c=0,g=0;
    int ac = 0, gc =0 , cc= 0, tc =0;


    while(fin)
    {
        string line1;
        getline(fin, line1);
        
            float gc = 0.0;
            int counter = 0, gccounter = 0;
        if (line1 != "-1")
        {


            for(int i=0; i<line1.length();i++)
            {
                counter++;
                char ch = line1[i];
                if(ch == 'G' || ch == 'C'){
                    gccounter++;
                    gc = ((float)gccounter/counter)*100;
                }
                fout<<x++<<"\t"<<gc<<endl;
            }



        }
        else
        {
            break;
        }


    
    }
}




int main()
{
/*
    ifstream fin;
    ofstream fout;

    fin.open("1619_error_one_extra.fastq");

    fout.open("phiX_segregated_1619.fa");

    vector<string> sorted_reads;

    while(fin)
    {
        string line1,line2,line3,line4;
        getline(fin, line1);
        getline(fin, line2);
        getline(fin, line3);
        getline(fin, line4);

        if (line1 != "-1" && line2 != "-1" && line3 != "-1" && line4 != "-1")
        {
            sorted_reads.push_back(line2);
        }
    }


    sort(sorted_reads.begin(), sorted_reads.end());
    for(auto read : sorted_reads)
    {
        fout<<read<<endl;
    }
*/

    GC();
    //sort_reads();
    return 0;
}

/*


fin.open(INPUTFILE);




    fout.open(OUTPUTFILE);

    int hist[50]{0};




    /*
    for(int i=0;i<a.length();i++){
        int ch = a[i] - 33;
        fout<<(i+1)<<"\t"<<ch<<endl;
    }*/
    //float mx= 0;

    /*
    int x = 1;
    float a=0,t=0,c=0,g=0;
    int ac = 0, gc =0 , cc= 0, tc =0;

    *//*
    while(fin)
    {
        string line1, line2, line3, line4;
        getline(fin, line1);

        if (line1 != "-1")
        {
            /*
            float a=0,t=0,c=0,g=0;
            int ac = 0, gc =0 , cc= 0, tc =0;


            for(int i=0; i<line2.length();i++)
            {

                char ch = line2[i];
                int  ph = line4[i] - 33;
                if(ch = 'A'){
                    ac++;
                    a+=ph;
                }
                if(ch = 'T'){
                    tc++;
                    t+=ph;
                }
                if(ch = 'G'){
                    gc++;
                    g+=ph;
                }
                if(ch = 'C'){
                    cc++;
                    c+=ph;
                }
            }
            c = (float)c/cc;
            a = (float)a/ac;
            t = (float)t/tc;
            g = (float)g/gc;
            */
            //fout<<x++<<"\t"<<a<<endl;
            //fout<<line4<<endl;
            //fout<<x++<<"\t"<<g<<endl;
            //fout<<x++<<"\t"<<c<<endl;

            //fout<<x++<<"\t"<<c<<endl;


/*

            for(int i=0;i<line1.length();i++){
                char ch = line1[i];
                int val = ch - 33;
                hist[val]++;
            }


            //fout<<line4<<endl;
        }
        else
        {
            break;
        }

    }





*/
