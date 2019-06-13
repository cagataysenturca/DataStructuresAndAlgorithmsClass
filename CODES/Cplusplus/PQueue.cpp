#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <queue>

//g++ -Wall -o PQueue PQueue.cpp
// ./PQueue

using namespace std;

int main(){
    clock_t start,end;
    
    start = clock();
    
    
    string array[700];
    int loop = 0;
    string line;
    
    ifstream myfile ("names.txt");
    
    if(myfile.is_open()){
        while(! myfile.eof()){
            getline(myfile,line);
            array[loop] = line;
            loop++;
        }
        myfile.close();
    }
    else 
        cout << "Unable to open file";
    
    
    priority_queue< string, vector< string >, greater< string > > pq;//CREATING A PRIORITY QUEUE OF STRINGS(NAMES)
    
    
    for (int i = 0; i < 700; i++){
        pq.push(array[i]);
    }
    
    string searchingName;
    string result;
    
    
    cout <<"Please enter a name that you want to search: " << endl;
    cin >> searchingName;
    
    
    for (int i = 0; i < 700; i++){
        result = pq.top();//COPYING THE ARRAY ELEMENTS INTO THE HEAP
        if(searchingName == result){
            cout << "Name found!" <<endl;
            break;
        }
        else{
            pq.pop();
        }
    }
    
    end = clock();
    cout << "The program was compiled in " << double(end - start)/CLOCKS_PER_SEC << " second." <<endl;
    
    return 0;
}
