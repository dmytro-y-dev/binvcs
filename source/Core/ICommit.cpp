///////////////////////////////////////////////////////////
//  ICommit.cpp
//  Implementation of the Class ICommit
//  Created on:      08-сен-2015 13:29:45
//  Original author: metamaker
///////////////////////////////////////////////////////////

#include "ICommit.h"


ICommit::ICommit(){

}



ICommit::~ICommit(){

}





ICommitedFilePtr ICommit::AddFile(string path){

	return  NULL;
}


ICommitedFilePtr ICommit::FindFile(string path){

	return  NULL;
}


string ICommit::GetAuthor(){

	return  NULL;
}


string ICommit::GetCommentary(){

	return  NULL;
}


int ICommit::GetCreationDate(){

	return 0;
}


vector<ICommitedFilePtr> ICommit::GetFiles(){

	return  NULL;
}


string ICommit::GetId(){

	return  NULL;
}


void ICommit::Load(istream infile){

}


void ICommit::Save(ostream outfile){

}


void ICommit::SetAuthor(string author){

}


void ICommit::SetCommentary(string commentary){

}


void ICommit::SetCreationDate(int creationDate){

}