#include <iostream>
#include <unordered_map>
#include <chrono>

using namespace std;
//!
/**
 * @brief This function is so crucial 
 * because it is what should be done to
 * know if an element is in a map.
 * 
 * @param key string key
 * @param map unordered_map
 * @return true if it is in map
 * @return false not in map
 */
bool contains(string key, unordered_map<string, int> map){
    if (map.find(key) != map.end()){
        return true;
    }
    else{
        return false;
    }
}

int main() {

    //START
    auto start = chrono::high_resolution_clock::now();

    unordered_map<string, int> myMap;

    myMap["Taha"] = 20;
    myMap["Asaf"] = 7;
    myMap["Akif"] = 16;

    cout << myMap["Taha"] << endl;
    // cout << myMap.at("Resul") << endl;

    cout << "Is Resul in it: " << contains("Resul", myMap) << endl;
    myMap.insert({"Resul", 15});
    cout << "##########################" << endl;

    //!
    for (auto& p : myMap){  //"p" means pair
        cout << "The key is: " << p.first << endl;
        p.second++; //We can modify value.
        cout << "The value is: " << p.second << endl;
        cout << typeid(p).name() << endl;
    }


    //END
    auto end = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);

    std::cout << "The duration: " << duration.count() << std::endl;

    return 0;
}