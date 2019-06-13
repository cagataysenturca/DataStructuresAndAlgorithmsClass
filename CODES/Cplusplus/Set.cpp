#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <set>
//g++ -Wall -o Set Set.cpp
// ./Set
using namespace std;


int main(){
    
    clock_t start,end;
    
    start =clock();
    
    string array[700];
    int i = 0;
    string line;
    
    ifstream myfile ("names.txt");
    
    if(myfile.is_open()){//MAKING SURE FILE EXISTS AND OPPENINNG IT
        while(! myfile.eof()){//READING LINE BY LINE TILL END OF FILE
            getline(myfile,line);
            array[i] = line;//LOADING THE FILE INTO AN ARRAY
            i++;
        }
        myfile.close();
    }
    else 
        cout << "Unable to open file";
    
    
    /*set <string, greater< string > > st;      //ANOTHER WAY FOR USING STRING SET
    
    
    for (int i = 0; i < 700; i++){      //ANOTHER WAY TO UPLOAD DATA FROM FILE
        st.insert(array[i]);
    }
    */
    
    set<string> st(array, array + sizeof(array) / sizeof(array[0]));//CREATING A SET OUT OF THE ARRAY ELEMENTS
    
    string searchingName;
    set<string>::iterator it = st.begin();
    set<string>::iterator ss ;
    
    cout <<"Please enter a name that you want to search: " << endl;
    cin >> searchingName;
    
    ss = st.find(searchingName);
    
    if (ss != st.end()){
        cout<<"Name Found!"<<endl;
    }
    else{
        cout << "Name is not in the set!"<<endl; 
    }
    
    end = clock();
    
    cout << "The program was compiled in " << double(end - start)/CLOCKS_PER_SEC << " second." <<endl;
    
    
    
    /*while (it != st.end()){       //PRINT DATA AFTER USING SET
        cout <<(*it)<<endl;
        it++;
    }
    */
    
    
}
