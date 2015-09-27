///////////////////////////////////////////////////////////
//  IBranch.cpp
//  Implementation of the Class IBranch
//  Created on:      08-сен-2015 13:29:44
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