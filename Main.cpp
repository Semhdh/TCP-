#include <iostream>
using namespace std;

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TCP.hpp"

int main()
{
		Log* lg = new Log("./Log.txt");
		printf("Creo log\n");
		lg->WriteLog("Socket created");
		
		return 0;
}
