
#include "hierarchy.h"


void Hierarchy::addTask(const std::string& name,
                        const std::shared_ptr<HierarchyBehavior>& obj) {
  m_list.emplace_back(obj);
  m_map.emplace(std::make_pair(name, obj));
}

void Hierarchy::update() {
  for (auto& it : m_list) {
    it->update();
  }
}

void Hierarchy::draw() {
  for (auto& it : m_list) {
    it->draw();
  }
}