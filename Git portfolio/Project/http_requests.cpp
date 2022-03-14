#include <iostream>
#include <restclient-cpp/connection.h>
#include <restclient-cpp/restclient.h>

using namespace std; 

int main(){

// initialize RestClient
RestClient::init();

// get a connection object
RestClient::Connection* conn = new RestClient::Connection("http://192.168.0.24:8080/api/health");

// set headers
RestClient::HeaderFields headers;
headers["SamirPuzic"] = "KENAN";
conn->SetHeaders(headers);

RestClient::Response r = conn->get("");

cout << r.body << endl;
cout << r.code << endl;

// deinit RestClient
RestClient::disable();

return 0;
}