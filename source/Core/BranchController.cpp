#include <memory>

#include "BranchController.h"

using namespace binvcs_core;

BranchController::BranchController(IRepositoryFactoryPtr repositoryFactory) :
  m_repositoryFactory(std::move(repositoryFactory))
{
}

void BranchController::RemoveBranch(const string & branchId) const
{
}

void BranchController::RenameBranch(const string & oldId, const string & newId) const
{
}

void BranchController::SwitchCurrentBranch(const string & branchId) const
{
}
