//
//  GOOGLERow.m
//
//  File generated by Magnet rest2mobile 1.0 - Sep 24, 2014 4:27:10 PM
//  @See Also: http://developer.magnet.com
//
#import "GOOGLERow.h"


@implementation GOOGLERow

+ (NSDictionary *)attributeMappings {
    NSMutableDictionary *dictionary = [NSMutableDictionary dictionaryWithDictionary:@{
    }];
    [dictionary addEntriesFromDictionary:[super attributeMappings]];
    return [dictionary copy];
}

+ (NSDictionary *)listAttributeTypes {
    NSMutableDictionary *dictionary = [NSMutableDictionary dictionaryWithDictionary:@{
        @"elements" : @"_bean:GOOGLEElement",
    }];
    [dictionary addEntriesFromDictionary:[super listAttributeTypes]];
    return [dictionary copy];
}

@end