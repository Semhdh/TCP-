#ifndef FILELOG_HPP
#define FILELOG_HPP

#include <time.h>
#include <string.h>
#include <fstream>
#include <stdio.h>


using namespace std;

class Log
{
private: 
	char* path;
	char* getTime();
public:
	Log();
	Log(char* _path);
	~Log();
	void WriteLog(char* msg);
};

char* Log::getTime()
{
		char* time_buf = (char*)malloc(21*sizeof(char));
		time_t now;
		time(&now);
		strftime(time_buf, 21, "%Y-%m-%d %H:%S:%M ", gmtime(&now));
		
		return time_buf;
}

Log::~Log(){}

Log::Log(){
	path = "./log.txt";
}

Log::Log(char* _path)
{
	path = _path;
}

void Log::WriteLog(char* msg)
{
	FILE* fp;
	
	printf("messaggio: %s\n",msg);

	fp = fopen(path,"a+");
	
	if(fp)
	{
		fprintf(fp,getTime());
		fprintf(fp," ");
		fprintf(fp,msg);
		fprintf(fp,"\n");
	}
	
	fclose(fp);
}

#endif
