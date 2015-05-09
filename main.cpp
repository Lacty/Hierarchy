
#include <iostream>
#include "Task/hierarchy.h"
#include "Object/game_object.h"
#include <memory>
#include <string>


int main() {
  std::shared_ptr<GameObject> obj = std::make_shared<GameObject>();
  std::string name = "object";
  Hierarchy hierarchy;
  hierarchy.addTask(name, obj);
  hierarchy.update();
  hierarchy.draw();
}