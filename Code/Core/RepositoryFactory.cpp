///////////////////////////////////////////////////////////
//  RepositoryFactory.cpp
//  Implementation of the Class RepositoryFactory
//  Created on:      06-сен-2015 18:46:40
//  Original author: metamaker
///////////////////////////////////////////////////////////

#include "RepositoryFactory.h"


RepositoryFactory::~RepositoryFactory(){

}





RepositoryFactory::RepositoryFactory(){

}


IContentStorage RepositoryFactory::CreateContentStorage(string respoitoryType){

	return  NULL;
}


IRepositoryPtr RepositoryFactory::CreateRepository(string repositoryType){

	return  NULL;
}


void RepositoryFactory::RegisterContentStorageType(string storageType, ContentStorageFactoryMethodType factoryMethod){

}


void RepositoryFactory::RegisterRepositoryType(string repositoryType, RepositoryFactoryMethodType factoryMethod){

}