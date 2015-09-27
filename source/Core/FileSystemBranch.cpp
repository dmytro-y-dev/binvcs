///////////////////////////////////////////////////////////
//  FileSystemBranch.cpp
//  Implementation of the Class FileSystemBranch
//  Created on:      08-сен-2015 13:29:44
//  Original author: metamaker
///////////////////////////////////////////////////////////

#include "FileSystemBranch.h"


FileSystemBranch::FileSystemBranch(){

}



FileSystemBranch::~FileSystemBranch(){

}





FileSystemBranch::FileSystemBranch(string id){

}


ICommitPtr FileSystemBranch::CreateCommit(string commitId){

	return  NULL;
}


ICommitPtr FileSystemBranch::FindCommit(string commitId){

	return  NULL;
}


vector<ICommitPtr> FileSystemBranch::GetCommits(){

	return  NULL;
}


string FileSystemBranch::GetId(){

	return  NULL;
}


void FileSystemBranch::Load(istream infile){

}


void FileSystemBranch::Save(ostream outfile){

}