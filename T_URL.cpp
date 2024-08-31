#include<bits/stdc++.h>

using namespace std;

int main(){

    string url;
    cin>>url;

    int username_pos = url.find("username=") + 9;
    int pwd_pos = url.find("&pwd=") + 5;
    int profile_pos = url.find("&profile=") + 9;
    int role_pos = url.find("&role=") + 6;
    int key_pos = url.find("&key=") + 5;

    string username = url.substr(username_pos, url.find('&', username_pos) - username_pos);
    string pwd = url.substr(pwd_pos, url.find('&', pwd_pos) - pwd_pos);
    string profile = url.substr(profile_pos, url.find('&', profile_pos) - profile_pos);
    string role = url.substr(role_pos, url.find('&', role_pos) - role_pos);
    string key = url.substr(key_pos);

    cout << "username: " << username << std::endl;
    cout << "pwd: " << pwd << endl;
    cout << "profile: " << profile << endl;
    cout << "role: " << role << endl;
    cout << "key: " << key << endl;




    return 0;
}