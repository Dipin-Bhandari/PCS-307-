#include<iostream>
#include<ostream>
#include<istream>
#include<sstream>
#include<iomanip>
using namespace std;
int main()
{
    int n=16;
    cout<<dec<<n<<"\n";
    cout<<hex<<n<<"\n";
    
    char a,b,c;
    std::istringstream s("  123");
    s>>std::skipws>>a>>b>>c;
    cout<<a<<b<<c<<'\n';

    std::istringstream p("  123");
    p>>std::noskipws>>a>>b>>c;
    cout<<a<<b<<c<<'\n';

    std::istringstream r("    this is a string");
    string line;
    getline(r>>ws,line);
    cout<<line<<'\n';

    cout<<setw(10)<<"Eight"<<'\n';
    cout<<setprecision(5)<<12.2323435553<<'\n';

    cout<<"one"<<endl;
    cout<<"two"<<ends;

    return 0;
}