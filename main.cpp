
#include <iostream>
#include "Task/hierarchy.h"
#include "Object/game_object.h"
#include <memory>


int main() {
  std::shared_ptr<GameObject> obj = std::make_shared<GameObject>();
  Hierarchy hierarchy;
  hierarchy.addTask(obj);
  hierarchy.update();
  hierarchy.draw();
}