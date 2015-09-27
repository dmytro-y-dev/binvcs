///////////////////////////////////////////////////////////
//  IContentStorage.cpp
//  Implementation of the Class IContentStorage
//  Created on:      08-сен-2015 13:29:45
//  Original author: metamaker
///////////////////////////////////////////////////////////

#include "IContentStorage.h"


IContentStorage::IContentStorage(){

}



IContentStorage::~IContentStorage(){

}





vector<IFileCopierPtr> IContentStorage::DelayedExtractCommit(ICommitPtr commit, string destinationPath){

	return  NULL;
}


vector<IFileCopierPtr> IContentStorage::DelayedStoreCommit(ICommitPtr commit){

	return  NULL;
}


bool IContentStorage::IsCommitStored(string commitId){

	return false;
}


void IContentStorage::RemoveCommitFromStorage(ICommitPtr commit){

}