//
//  Tuple.hpp
//  cpp
//
//  Created by Tom Scallon on 4/29/16.
//  Copyright © 2016 tomscallon. All rights reserved.
//

#ifndef Tuple_hpp
#define Tuple_hpp

#include <stdio.h>

#endif /* Tuple_hpp */

template <class T, class... Rest> class Tuple {
  T& head;
  Tuple<Rest...> tail;
  
public:
  Tuple( T head, Rest... tail );
};