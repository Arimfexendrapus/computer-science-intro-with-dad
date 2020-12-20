cout<<"PLEASE ENTER THE NAME OF THE DATA FILE TO BE USED FOR THE WORD BANK"<<endl;
cin>>filename;
fstream  afile;
afile.open(filename, ios::in );

string words[30];
int ii=0;
while(!afile.eof())
{
    getline(afile,words[ii]);
    ii++;
}
