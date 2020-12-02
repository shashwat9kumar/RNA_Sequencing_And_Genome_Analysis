#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
#include <set>

using namespace std;


#define INPUTFILE "actual.sequence"
#define OUTPUTFILE1 "allSubstringsOfLength6.txt"
#define OUTPUTFILE2 "allSubstringsOfLength7.txt"
#define OUTPUTFILE3 "allSubstringsOfLength8.txt"
#define OUTPUTFILE4 "allSubstringsOfLength9.txt"
#define OUTPUTFILE5 "allSubstringsOfLength10.txt"
#define OUTPUTFILE6 "allSubstringsOfLength11.txt"
#define OUTPUTFILE7 "allSubstringsOfLength12.txt"

#define OUTPUTFILE8 "allSubstringsOfLength100.txt"
#define OUTPUTFILE9 "allSubstringsOfLength50.txt"
#define OUTPUTFILE10 "allSubstringsOfLength25.txt"
#define OUTPUTFILE11 "allSubstringsOfLength200.txt"
#define OUTPUTFILE12 "allSubstringsOfLength150.txt"

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


void substringsOfLength6()
{

    fin.open(INPUTFILE);
    fout.open(OUTPUTFILE1);

    while(fin)
    {
        string line1;
        getline(fin, line1);
        if (line1 != "-1")
        {
            int n =line1.length();

            for(int i=0; i<n-5;i++)
            {
                string found = line1.substr(i,6);
                fout<<found<<endl;
            }
        }
        else
        {
            break;
        }
    }
}

void substringsOfLength7()
{

    fin.open(INPUTFILE);
    fout.open(OUTPUTFILE2);

    while(fin)
    {
        string line1;
        getline(fin, line1);
        if (line1 != "-1")
        {
            int n =line1.length();

            for(int i=0; i<n-6;i++)
            {
                string found = line1.substr(i,7);
                fout<<found<<endl;
            }
        }
        else
        {
            break;
        }
    }
}


void substringsOfLength8()
{

    fin.open(INPUTFILE);
    fout.open(OUTPUTFILE3);

    while(fin)
    {
        string line1;
        getline(fin, line1);
        if (line1 != "-1")
        {
            int n =line1.length();

            for(int i=0; i<n-7;i++)
            {
                string found = line1.substr(i,8);
                fout<<found<<endl;
            }
        }
        else
        {
            break;
        }
    }
}


void substringsOfLength9()
{

    fin.open(INPUTFILE);
    fout.open(OUTPUTFILE4);

    while(fin)
    {
        string line1;
        getline(fin, line1);
        if (line1 != "-1")
        {
            int n =line1.length();

            for(int i=0; i<n-8;i++)
            {
                string found = line1.substr(i,9);
                fout<<found<<endl;
            }
        }
        else
        {
            break;
        }
    }
}


void substringsOfLength10()
{

    fin.open(INPUTFILE);
    fout.open(OUTPUTFILE5);

    while(fin)
    {
        string line1;
        getline(fin, line1);
        if (line1 != "-1")
        {
            int n =line1.length();

            for(int i=0; i<n-9;i++)
            {
                string found = line1.substr(i,10);
                fout<<found<<endl;
            }
        }
        else
        {
            break;
        }
    }
}

void substringsOfLength11()
{

    fin.open(INPUTFILE);
    fout.open(OUTPUTFILE6);

    while(fin)
    {
        string line1;
        getline(fin, line1);
        if (line1 != "-1")
        {
            int n =line1.length();

            for(int i=0; i<n-10;i++)
            {
                string found = line1.substr(i,11);
                fout<<found<<endl;
            }
        }
        else
        {
            break;
        }
    }
}


void substringsOfLength12()
{

    fin.open(INPUTFILE);
    fout.open(OUTPUTFILE7);

    while(fin)
    {
        string line1;
        getline(fin, line1);
        if (line1 != "-1")
        {
            int n =line1.length();

            for(int i=0; i<n-11;i++)
            {
                string found = line1.substr(i,12);
                fout<<found<<endl;
            }
        }
        else
        {
            break;
        }
    }
}



void substringsOfLength100()
{

    fin.open(INPUTFILE);
    fout.open(OUTPUTFILE8);

    while(fin)
    {
        string line1;
        getline(fin, line1);
        if (line1 != "-1")
        {
            int n =line1.length();

            for(int i=0; i<n-99;i++)
            {
                string found = line1.substr(i,100);
                fout<<found<<endl;
            }
        }
        else
        {
            break;
        }
    }
}


void substringsOfLength50()
{

    fin.open(INPUTFILE);
    fout.open(OUTPUTFILE9);

    while(fin)
    {
        string line1;
        getline(fin, line1);
        if (line1 != "-1")
        {
            int n =line1.length();

            for(int i=0; i<n-49;i++)
            {
                string found = line1.substr(i,50);
                fout<<found<<endl;
            }
        }
        else
        {
            break;
        }
    }
}


void substringsOfLength25()
{

    fin.open(INPUTFILE);
    fout.open(OUTPUTFILE10);

    while(fin)
    {
        string line1;
        getline(fin, line1);
        if (line1 != "-1")
        {
            int n =line1.length();

            for(int i=0; i<n-24;i++)
            {
                string found = line1.substr(i,25);
                fout<<found<<endl;
            }
        }
        else
        {
            break;
        }
    }
}


void substringsOfLength200()
{

    fin.open(INPUTFILE);
    fout.open(OUTPUTFILE11);

    while(fin)
    {
        string line1;
        getline(fin, line1);
        if (line1 != "-1")
        {
            int n =line1.length();

            for(int i=0; i<n-199;i++)
            {
                string found = line1.substr(i,200);
                fout<<found<<endl;
            }
        }
        else
        {
            break;
        }
    }
}


void substringsOfLength150()
{

    fin.open(INPUTFILE);
    fout.open(OUTPUTFILE12);

    while(fin)
    {
        string line1;
        getline(fin, line1);
        if (line1 != "-1")
        {
            int n =line1.length();

            for(int i=0; i<n-149;i++)
            {
                string found = line1.substr(i,150);
                fout<<found<<endl;
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
    //substringsOfLength6();
    //substringsOfLength7();
    //substringsOfLength8();
    //substringsOfLength9();
    //substringsOfLength10();
    //substringsOfLength11();
    //substringsOfLength12();

    //substringsOfLength25();
    //substringsOfLength200();
    substringsOfLength150();
    return 0;
}

