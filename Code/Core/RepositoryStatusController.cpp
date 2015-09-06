///////////////////////////////////////////////////////////
//  RepositoryStatusController.cpp
//  Implementation of the Class RepositoryStatusController
//  Created on:      06-сен-2015 18:46:40
//  Original author: hooligan
///////////////////////////////////////////////////////////

#include "RepositoryStatusController.h"


RepositoryStatusController::RepositoryStatusController(){

}



RepositoryStatusController::~RepositoryStatusController(){

}





RepositoryStatusController::RepositoryStatusController(RepositoryFactoryPtr repositoryFactory){

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