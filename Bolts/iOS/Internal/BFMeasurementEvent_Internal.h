/*
 *  Copyright (c) 2014, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#import "BFMeasurementEvent.h"

/*!
 Provides methods for posting notifications from the Bolts framework
 */
@interface BFMeasurementEvent (Internal)

+ (void)postNotificationForEventName:(NSString *)name args:(NSDictionary *)args;

@end
