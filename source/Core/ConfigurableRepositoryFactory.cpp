///////////////////////////////////////////////////////////
//  ConfigurableRepositoryFactory.cpp
//  Implementation of the Class ConfigurableRepositoryFactory
//  Created on:      08-сен-2015 13:29:44
//  Original author: metamaker
///////////////////////////////////////////////////////////

#include "ConfigurableRepositoryFactory.h"


ConfigurableRepositoryFactory::ConfigurableRepositoryFactory(){

}



ConfigurableRepositoryFactory::~ConfigurableRepositoryFactory(){

}





IContentStoragePtr ConfigurableRepositoryFactory::CreateContentStorage(){

	return  NULL;
}


IRepositoryPtr ConfigurableRepositoryFactory::CreateRepository(){

	return  NULL;
}


void ConfigurableRepositoryFactory::SetContentStorageConstructor(ContentStorageFactoryMethodType factoryMethod){

}


void ConfigurableRepositoryFactory::SetRepositoryConstructor(RepositoryFactoryMethodType factoryMethod){

}