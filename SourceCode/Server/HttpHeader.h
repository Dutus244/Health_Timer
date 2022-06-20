#ifndef _HttpHeader__
#define _HttpHeader__
#include <iostream>
#include <map>
std::string HexConv(std::string str);

static std::map<std::string, std::string> contentType = {
	{"pdf", "application/pdf"},
	{"txt", "text/plain"},
	{"html", "text/html; charset=UTF-8"},
	{"json", "application/json"},
	{"exe", "application/octet-stream"},
	{"zip", "application/zip"},
	{"doc", "application/msword"},
	{"xls", "application/vnd.ms-excel"},
	{"ppt", "application/vnd.ms-powerpoint"},
	{"gif", "image/gif"},
	{"png", "image/png"},
	{"jpeg", "image/jpg"},
	{"jpg", "image/jpg"},
	{"php", "text/plain"},
	{"css", "text/css"}
};

class HttpRequestHeader
{
public:
    HttpRequestHeader(std::string request);
    std::string method;
    std::string exfile;
    std::map<std::string, std::string> values;
    std::map<std::string, std::string> arg;
    std::map<std::string, std::string> cookie;
};

#endif