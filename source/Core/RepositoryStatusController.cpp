///////////////////////////////////////////////////////////
//  RepositoryStatusController.cpp
//  Implementation of the Class RepositoryStatusController
//  Created on:      08-сен-2015 13:29:46
//  Original author: hooligan
///////////////////////////////////////////////////////////

#include "RepositoryStatusController.h"


RepositoryStatusController::RepositoryStatusController(){

}



RepositoryStatusController::~RepositoryStatusController(){

}





RepositoryStatusController::RepositoryStatusController(IRepositoryFactoryPtr repositoryFactory){

}


CommitsDifference RepositoryStatusController::DiffCommits(string firstCommitId, string secondCommitId){

	return  NULL;
}


vector<string> RepositoryStatusController::GetBranchesName(){

	return  NULL;
}


vector<string> RepositoryStatusController::GetCheckpointsName(){

	return  NULL;
}


StageStatus RepositoryStatusController::GetStageStatus(){

	return  NULL;
}