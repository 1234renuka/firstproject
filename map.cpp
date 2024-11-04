#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string,int>marksMap;
    marksMap["renuka"]=98;
    marksMap["parul"]=34;
    marksMap["joya"] =3;
    marksMap.insert({{"ojha",90},{"ponam",54}});
    map<string,int>::iterator iter;
    for(iter=marksMap.begin();iter !=marksMap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }

    return 0;
}