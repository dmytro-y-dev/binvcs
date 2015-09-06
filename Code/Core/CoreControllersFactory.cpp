///////////////////////////////////////////////////////////
//  CoreControllersFactory.cpp
//  Implementation of the Class CoreControllersFactory
//  Created on:      06-сен-2015 18:46:38
//  Original author: hooligan
///////////////////////////////////////////////////////////

#include "CoreControllersFactory.h"


CoreControllersFactory::CoreControllersFactory(){

}



CoreControllersFactory::~CoreControllersFactory(){

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