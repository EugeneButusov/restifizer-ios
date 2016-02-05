//
// Created by Eugene Butusov on 05/02/16.
// Copyright (c) 2016 VedideV. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface RestifizerRequest : NSObject

-(instancetype)initWithResource:(Class)resource;
+(instancetype)requestWithResource:(Class)resource;

@end