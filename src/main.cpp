// #include<dpp/dpp.h>
#include <vector>
#include <iostream>
using namespace std;
// const std::string TOKEN_BOT {"MTE3MDQwOTEyOTYzMDc2MTA4Mg.G-7wzN.nP6Bbwb9eQscF0RBgGj30d9QiuMjlJnuzTGw5Y"};


int main(){
    vector <int> vector1;
    vector <int> vector2;
    vector <vector<int>> vector_2d;

    vector1.push_back(10); 
    vector1.push_back(20); 

    // cout<<vector1.size();


    vector2.push_back(100); 
    vector2.push_back(200); 
    // cout<<vector2.size();

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    // cout<<vector_2d.at(0)<<endl;

    vector1.at(0) = 1000;
    cout<<vector_2d.at(0).at(0)<<endl;
    cout<<vector1.at(0)<<endl;
    


    // nit8_t* robot =  nullptr;
    // size_t robot_size = 0;

    // std::ifstream input ("../static/Robot.pcm", std::ios::in::|std::ios::binary|std::ios::ate);
    // if()

    // dpp::cluster bot(TOKEN_BOT);

    // bot.on_log(dpp::utility::cout_logger());



    // bot.start(dpp::st_wait);

    return 0;
}