
#pragma once
#include "hierarchy_behavior.h"
#include <vector>
#include <memory>


class Hierarchy {
private:
  std::vector<std::shared_ptr<HierarchyBehavior>> m_task;

public:
  Hierarchy() = default;

  void addTask(std::shared_ptr<HierarchyBehavior> task);

  void update();
  void draw();
};