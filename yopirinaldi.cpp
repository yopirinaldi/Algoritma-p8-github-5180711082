#include <iostream>
using namespace :: std;

string nama,jurusan,nim;
struct fungsi {
int uts,uas,tugas,absen;
float hasil;};

fungsi f;

void input  ()
{
    cout<<"\nMASUKAN NAMA   :";
    cin>>nama;
    cout<<"MASUKAN NIM      :";
    cin>>nim;
    cout<<"MASUKAN JURUSAN  :";
    cin>>jurusan;
}

void garis ()
{
    cout<<"\n------------------------------------------";
}

void nilai ()
{
    cout<<"\nMASUKAN NILAI ";
    cout<<"\nUTS   :";
    cin>>f.uts;
    cout<<"\nUAS   :";
    cin>>f.uas;
    cout<<"\nTUGAS :";
    cin>>f.tugas;
    cout<<"\nABSEN :";
    cin>>f.absen;
}

int total ()
{
    f.hasil=(f.uts*0.2)+(f.uas*0.3)+(f.tugas*0.35)+(f.absen*0.15);
    cout<<"\nHASIL NILAI   :"<<f.hasil;
    cout<<"\nGRADE         :";
    if(f.hasil>=81 && 100)
    {
        cout<<"A";
    }
    else if (f.hasil>=61 && 80)
    {
        cout<<"B";
    }
    else if(f.hasil>=41  && 60)
    {
        cout<<"C";
    }
    else if(f.hasil>=21  && 40)
    {
        cout<<"D";
    }
    else if(f.hasil>=0  && 20)
    {
        cout<<"E";
    }
    else
    {
        cout<<"kesalahan";
    }
}
main ()
{
    cout<<"========PROGRAM NILAI========";
    input ();
    garis ();
    nilai ();
    garis();
    total();
    garis ();
}
