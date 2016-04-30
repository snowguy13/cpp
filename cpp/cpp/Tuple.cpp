//
//  Tuple.cpp
//  cpp
//
//  Created by Tom Scallon on 4/29/16.
//  Copyright © 2016 tomscallon. All rights reserved.
//

#include "Tuple.hpp"

template<class T, class... Rest>
Tuple<T, Rest...>::Tuple( T head, Rest... tail ) : tail(tail...) {
  this->head = head;
};