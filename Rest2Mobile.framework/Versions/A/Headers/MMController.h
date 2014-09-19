/**
 * Copyright (c) 2012-2014 Magnet Systems, Inc. All rights reserved.
 */

#import <Foundation/Foundation.h>

/**
 `MMController` represents a collection of remote API services which can be invoked over REST.
 Each method in the class represents a specific endpoint like GET /users that is accessible over REST.

 ## Subclassing Notes
 
 Currently, `MMController` subclasses are auto-generated by the rest2mobile plugin for Xcode found here: https://github.com/magnetsystems/r2m-plugin-ios
 Subclasses can also auto-generated by the rest2mobile Command-line Tool found here: https://github.com/magnetsystems/r2m-cli
 
 ## Methods to Override
 
 Subclasses should override `metaData`, which returns a `NSDictionary` of `MMControllerMethod` objects.
 */

@interface MMController : NSObject

/**
 Returns a collection of `MMControllerMethod` objects.
 Each object contains the metadata for a specific endpoint accessible over REST.
 
 @return A collection of `MMControllerMethod` objects.
 */
+ (NSDictionary *)metaData;

@end
