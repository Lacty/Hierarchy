
#include "hierarchy.h"


void Hierarchy::addTask(const std::string& name,
                        const std::shared_ptr<HierarchyBehavior>& obj) {
  m_list.emplace_back(obj);
  m_map.emplace(std::make_pair(name, obj));
}

void Hierarchy::clear() {
  m_list.clear();
  m_map.clear();
}


void Hierarchy::update() const{
  for (auto& it : m_list) {
    it->update();
  }
}

void Hierarchy::draw() const{
  for (auto& it : m_list) {
    it->draw();
  }
}