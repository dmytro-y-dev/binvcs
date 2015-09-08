///////////////////////////////////////////////////////////
//  IRepositoryFactory.cpp
//  Implementation of the Class IRepositoryFactory
//  Created on:      08-сен-2015 13:29:45
//  Original author: hooligan
///////////////////////////////////////////////////////////

#include "IRepositoryFactory.h"


IRepositoryFactory::IRepositoryFactory(){

}



IRepositoryFactory::~IRepositoryFactory(){

}





IContentStoragePtr IRepositoryFactory::CreateContentStorage(){

	return  NULL;
}


IRepositoryPtr IRepositoryFactory::CreateRepository(){

	return  NULL;
}