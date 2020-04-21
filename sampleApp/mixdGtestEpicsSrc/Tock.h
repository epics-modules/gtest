/*************************************************************************\
* Copyright (c) 2020 ITER Organization.
* This module is distributed subject to a Software License Agreement found
* in file LICENSE that is included with this distribution.
\*************************************************************************/

/*
 *  Author: Ralph Lange <ralph.lange@gmx.de>
 */

/* API for simple mock test */

#ifndef TOCK_H

class Tock {
public:
  virtual ~Tock() {}
  virtual void Tic() = 0;
  virtual void Tac() = 0;
  virtual int TicTacToe(unsigned int count) = 0;
};

#define TOCK_H

#endif // TOCK_H
