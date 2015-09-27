///////////////////////////////////////////////////////////
//  FileSystemRepository.cpp
//  Implementation of the Class FileSystemRepository
//  Created on:      08-сен-2015 13:29:44
//  Original author: metamaker
///////////////////////////////////////////////////////////

#include "FileSystemRepository.h"


FileSystemRepository::FileSystemRepository(){

}



FileSystemRepository::~FileSystemRepository(){

}





FileSystemRepository::FileSystemRepository(string repositoryLocation){

}


IBranchPtr FileSystemRepository::CreateBranch(string branchId){

	return  NULL;
}


vector<IBranchPtr> FileSystemRepository::GetBranches(){

	return  NULL;
}


IContentStoragePtr FileSystemRepository::GetContentStorage(){

	return  NULL;
}


int FileSystemRepository::GetCreationDate(){

	return 0;
}


IBranchPtr FileSystemRepository::GetCurrentBranch(){

	return  NULL;
}


IStagePtr FileSystemRepository::GetStage(){

	return  NULL;
}


void FileSystemRepository::Load(){

}


void FileSystemRepository::RemoveBranch(string branchId){

}


void FileSystemRepository::RenameBranch(string branchOldId, string branchNewId){

}


void FileSystemRepository::Save(){

}


bool FileSystemRepository::SetCurrentBranchById(string branchId){

	return false;
}