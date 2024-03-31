// Copyright 2024 Andrey Derun
#pragma once

#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <iterator>

#include "core/task/include/task.hpp"

class ShellSequential : public ppc::core::Task {
 public:
  explicit ShellSequential(std::shared_ptr<ppc::core::TaskData> taskData_) : Task(std::move(taskData_)) {}
  bool pre_processing() override;
  bool validation() override;
  bool run() override;
  bool post_processing() override;

  static bool checkSorted(std::vector<int> input);

  static std::vector<int> generate_random_vector(int size, int min, int max);

 private:
  std::vector<int> shell_sort(const std::vector<int>& input);
  std::vector<int> input_;
};
