
#pragma once
#include "hierarchy_behavior.h"
#include <vector>


class Hierarchy {
private:
  std::vector<HierarchyBehavior> task;

public:
  Hierarchy() = default;
};