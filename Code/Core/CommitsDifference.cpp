///////////////////////////////////////////////////////////
//  CommitsDifference.cpp
//  Implementation of the Class CommitsDifference
//  Created on:      06-сен-2015 18:46:38
//  Original author: metamaker
///////////////////////////////////////////////////////////

#include "CommitsDifference.h"


CommitsDifference::CommitsDifference(){

}



CommitsDifference::~CommitsDifference(){

}





CommitsDifference::CommitsDifference(ICommitPtr firstCommit, ICommitPtr secondCommit){

}


vector<ICommitedFilePtr> CommitsDifference::GetAddedFiles(){

	return  NULL;
}


const ICommitPtr CommitsDifference::GetEarlierCommit(){

	return  NULL;
}


const ICommitPtr CommitsDifference::GetLaterCommit(){

	return  NULL;
}


vector<ICommitedFilePtr> CommitsDifference::GetModifiedFiles(){

	return  NULL;
}


vector<ICommitedFilePtr> CommitsDifference::GetRemovedFiles(){

	return  NULL;
}