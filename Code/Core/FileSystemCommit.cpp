///////////////////////////////////////////////////////////
//  FileSystemCommit.cpp
//  Implementation of the Class FileSystemCommit
//  Created on:      08-сен-2015 13:29:44
//  Original author: metamaker
///////////////////////////////////////////////////////////

#include "FileSystemCommit.h"


FileSystemCommit::FileSystemCommit(){

}



FileSystemCommit::~FileSystemCommit(){

}





FileSystemCommit::FileSystemCommit(string id){

}


ICommitedFilePtr FileSystemCommit::AddFile(string path){

	return  NULL;
}


ICommitedFilePtr FileSystemCommit::FindFile(string path){

	return  NULL;
}


string FileSystemCommit::GetAuthor(){

	return  NULL;
}


string FileSystemCommit::GetCommentary(){

	return  NULL;
}


int FileSystemCommit::GetCreationDate(){

	return 0;
}


vector<ICommitedFilePtr> FileSystemCommit::GetFiles(){

	return  NULL;
}


string FileSystemCommit::GetId(){

	return  NULL;
}


void FileSystemCommit::Load(istream infile){

}


void FileSystemCommit::Save(ostream outfile){

}


void FileSystemCommit::SetAuthor(string author){

}


void FileSystemCommit::SetCommentary(string commentary){

}


void FileSystemCommit::SetCreationDate(int creationDate){

}