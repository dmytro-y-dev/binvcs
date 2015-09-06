///////////////////////////////////////////////////////////
//  IRepositoryFactory.cpp
//  Implementation of the Class IRepositoryFactory
//  Created on:      06-сен-2015 18:46:40
//  Original author: metamaker
///////////////////////////////////////////////////////////

#include "IRepositoryFactory.h"


IRepositoryFactory::IRepositoryFactory(){

}



IRepositoryFactory::~IRepositoryFactory(){

}





IBranchPtr IRepositoryFactory::CreateBranch(IRepositoryPtr repository, string branchId){

	return  NULL;
}


ICommitPtr IRepositoryFactory::CreateCommit(IRepositoryPtr repository){

	return  NULL;
}


ICommitedFilePtr IRepositoryFactory::CreateCommitedFile(string path){

	return  NULL;
}


IContentStoragePtr IRepositoryFactory::CreateContentStorage(IRepositoryPtr repository){

	return  NULL;
}


IRepositoryPtr IRepositoryFactory::CreateRepository(string path){

	return  NULL;
}