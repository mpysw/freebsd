// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

module;
#include <semaphore>

export module std:semaphore;
export namespace std {
  // [thread.sema.cnt], class template counting_semaphore
  using std::counting_semaphore;

  using std::binary_semaphore;
} // namespace std
