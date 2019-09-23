#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Card
{
    string title;
    string author;
    int wordcount;
    int letterfrequency;
    int linecount;
};

int main()
{
    Card a;
    ifstream textfile;
    string filename;
    cout<<"Enter the filename to be processed, example format: text.txt"<<endl;
    cin>>filename;
    textfile.open(filename);

    while(textfile.fail())
    {
        cout<<"Error file does not exist enter another filename"<<endl;
        cin>>filename;
        textfile.open(filename);
    }

    int line=0;
    string str;

    while(textfile>>str)
    {
        if(line==0)
        getline(textfile,a.title);
        if(line==1)
        getline(textfile,a.author);

        line++;
    } 
    a.wordcount=line;

    cout<<a.title<<endl;
    cout<<a.author<<endl;
    cout<<a.wordcount<<endl;
}