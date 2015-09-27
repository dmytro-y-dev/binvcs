///////////////////////////////////////////////////////////
//  CoreControllersFactory.cpp
//  Implementation of the Class CoreControllersFactory
//  Created on:      08-сен-2015 13:29:44
//  Original author: hooligan
///////////////////////////////////////////////////////////

#include "CoreControllersFactory.h"


CoreControllersFactory::CoreControllersFactory(){

}



CoreControllersFactory::~CoreControllersFactory(){

}





CoreControllersFactory::CoreControllersFactory(IRepositoryFactoryPtr repositoryFactory){

}


BranchControllerPtr CoreControllersFactory::GetBranchController(){

	return  NULL;
}


CommitContollerPtr CoreControllersFactory::GetCommitController(){

	return  NULL;
}


IContentStoragePtr CoreControllersFactory::GetContentStorage(){

	return  NULL;
}


RepositoryFactoryPtr CoreControllersFactory::GetRepositoryFactory(){

	return  NULL;
}


RepositoryStatusControllerPtr CoreControllersFactory::GetRepositoryStatusController(){

	return  NULL;
}


StageControllerPtr CoreControllersFactory::GetStageController(){

	return  NULL;
}