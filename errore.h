#ifndef ERROR_H
#define ERROR_H

#include <errno.h>
#include "FileLog.hpp"

#define LOG_PATH "./Log.txt"

//Funzione per la stampa l'uscita e la stampa degli errori
void errore(char* msg, int ret_code){
	Log* lg = new Log(LOG_PATH);
	
	printf(msg);	
	lg->WriteLog(msg);
	printf(" | errcode:%d (%s)\n",errno,strerror(errno));	//Stampa a schermo la l'errore
	exit(ret_code);	//Esce dal processo con il valore impostato
}

#endif
