
#pragma once
#include "hierarchy_behavior.h"
#include <map>
#include <list>
#include <string>
#include <memory>


class Hierarchy {
private:
  std::list<std::shared_ptr<HierarchyBehavior>> m_list;
  std::map<std::string, std::shared_ptr<HierarchyBehavior>> m_map;

public:
  Hierarchy() = default;

  void addTask(const std::string& name,
               const std::shared_ptr<HierarchyBehavior>& obj);

  void update();
  void draw();
};