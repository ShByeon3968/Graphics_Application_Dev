#pragma once
#include <iostream>
#include <string>

//FileSystem ����
class FileSystem 
{
public:
	static const char* getPath(const std::string& path) {
		return path.c_str();
	}
};