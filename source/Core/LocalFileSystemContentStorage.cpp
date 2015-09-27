///////////////////////////////////////////////////////////
//  LocalFileSystemContentStorage.cpp
//  Implementation of the Class LocalFileSystemContentStorage
//  Created on:      08-сен-2015 13:29:45
//  Original author: metamaker
///////////////////////////////////////////////////////////

#include "LocalFileSystemContentStorage.h"


LocalFileSystemContentStorage::LocalFileSystemContentStorage(){

}



LocalFileSystemContentStorage::~LocalFileSystemContentStorage(){

}





LocalFileSystemContentStorage::LocalFileSystemContentStorage(string storagePath){

}


vector<IFileCopierPtr> LocalFileSystemContentStorage::DelayedExtractCommit(ICommitPtr commit, string destinationPath){

	return  NULL;
}


vector<IFileCopierPtr> LocalFileSystemContentStorage::DelayedStoreCommit(ICommitPtr commit){

	return  NULL;
}


bool LocalFileSystemContentStorage::IsCommitStored(string commitId){

	return false;
}


void LocalFileSystemContentStorage::RemoveCommitFromStorage(ICommitPtr commit){

}