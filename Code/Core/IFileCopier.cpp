///////////////////////////////////////////////////////////
//  IFileCopier.cpp
//  Implementation of the Class IFileCopier
//  Created on:      06-сен-2015 18:46:40
//  Original author: metamaker
///////////////////////////////////////////////////////////

#include "IFileCopier.h"


IFileCopier::IFileCopier(){

}



IFileCopier::~IFileCopier(){

}





filesize_t IFileCopier::GetCopiedBytesAmount(){

	return  NULL;
}


filesize_t IFileCopier::GetFileSize(){

	return  NULL;
}


string IFileCopier::GetOriginalFilePath(){

	return  NULL;
}


double IFileCopier::GetProgressPercent(){

	return 0;
}


void IFileCopier::PauseCopying(){

}


void IFileCopier::SetOriginalFilePath(string path){

}


void IFileCopier::StartCopying(){

}


void IFileCopier::StopCopying(){

}