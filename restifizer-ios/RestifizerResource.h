//
// Created by Eugene Butusov on 05/02/16.
// Copyright (c) 2016 VedideV. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface RestifizerResource : NSObject

+(NSString *)resourceAddress;

@property (nonatomic, strong) NSString *_id;

-(instancetype)initWithDictionary:(NSDictionary *)dictionary;
+(instancetype)resourceWithDictionary:(NSDictionary *)dictionary;

-(instancetype)toDictionary;

@end