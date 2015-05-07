
#include "hierarchy.h"


void Hierarchy::addTask(std::shared_ptr<HierarchyBehavior> task) {
  m_task.push_back(task);
}

void Hierarchy::update() {
  for (auto& it : m_task) {
    it->update();
  }
}

void Hierarchy::draw() {
  for (auto& it : m_task) {
    it->draw();
  }
}