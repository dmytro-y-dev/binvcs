///////////////////////////////////////////////////////////
//  IRepository.cpp
//  Implementation of the Class IRepository
//  Created on:      08-сен-2015 13:29:45
//  Original author: metamaker
///////////////////////////////////////////////////////////

#include "IRepository.h"


IRepository::IRepository(){

}



IRepository::~IRepository(){

}





IBranchPtr IRepository::CreateBranch(string branchId){

	return  NULL;
}


vector<IBranchPtr> IRepository::GetBranches(){

	return  NULL;
}


IContentStoragePtr IRepository::GetContentStorage(){

	return  NULL;
}


int IRepository::GetCreationDate(){

	return 0;
}


IBranchPtr IRepository::GetCurrentBranch(){

	return  NULL;
}


IStagePtr IRepository::GetStage(){

	return  NULL;
}


void IRepository::Load(){

}


void IRepository::RemoveBranch(string branchId){

}


void IRepository::RenameBranch(string branchOldId, string branchNewId){

}


void IRepository::Save(){

}


bool IRepository::SetCurrentBranchById(string branchId){

	return false;
}