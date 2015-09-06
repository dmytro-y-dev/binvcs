///////////////////////////////////////////////////////////
//  IBranch.cpp
//  Implementation of the Class IBranch
//  Created on:      06-сен-2015 18:46:39
//  Original author: metamaker
///////////////////////////////////////////////////////////

#include "IBranch.h"


IBranch::IBranch(){

}



IBranch::~IBranch(){

}





ICommitPtr IBranch::CreateCommit(string commitId){

	return  NULL;
}


ICommitPtr IBranch::FindCommit(string commitId){

	return  NULL;
}


vector<ICommitPtr> IBranch::GetCommits(){

	return  NULL;
}


string IBranch::GetId(){

	return  NULL;
}


void IBranch::Load(istream infile){

}


void IBranch::Save(ostream outfile){

}