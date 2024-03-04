#include <iostream>
#include <map>

using namespace std;

int main() {
    cout<<"Basic Implementation of Map -> "<<endl;

    // Declaration of map;
    map<int,int> mp;

    //Inserting values
    mp.insert(pair<int,int>(1,10));
    mp.insert(pair<int,int>(2,20));
    mp.insert(pair<int,int>(3,30));
    mp.insert(pair<int,int>(4,40));
    mp.insert(pair<int,int>(5,50));
    mp.insert(pair<int,int>(6,60));

    mp[7]=70;

    //Display Map

    cout<<"Key\tValue\n";
    for(auto i:mp){
        cout<<i.first<<"\t"<<i.second<<endl;
    }

    //Size of map
    cout<<"Size of map is :"<<mp.size()<<endl;

    //Removing element
//    mp.erase(mp.begin(),mp.find(5));  // This will erase everything from begin to the given index 5
    mp.erase(mp.find(3));  // Only one position
    cout<<"After removing element new map is : \nKey\tValue\n";
    for(auto i:mp){
        cout<<i.first<<"\t"<<i.second<<endl;
    }


    //Display first key-value pair
    cout<<"First key-value pair\n";
    cout<<mp.begin()->first<<"\t"<<mp.begin()->second<<endl;

    //Max-size of map
    cout<<"Max_Size of map is :"<<mp.max_size()<<endl; //Display how many max records mp can hold
    cout<<endl;
    //Remove all elements of map
    mp.clear();

    //Check whether map is empty
    cout<<mp.empty();  //returns 1 if empty

    return 0;
}

/*        OUTPUT     
C:\Users\Krishna\CLionProjects\Map\cmake-build-debug\Map.exe
Basic Implementation of Map ->
Key     Value
1       10
2       20
3       30
4       40
5       50
6       60
7       70
Size of map is :7
After removing element new map is :
Key     Value
1       10
2       20
4       40
5       50
6       60
7       70
First key-value pair
1       10
Max_Size of map is :230584300921369395

1
Process finished with exit code 0
*/
