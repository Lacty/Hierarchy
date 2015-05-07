
#pragma once
#include "../Task/hierarchy_behavior.h"


class GameObject : public HierarchyBehavior {
private:

public:
  GameObject() = default;

  void update();
  void draw();
};