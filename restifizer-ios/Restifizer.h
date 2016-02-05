//
// Created by Eugene Butusov on 05/02/16.
// Copyright (c) 2016 VedideV. All rights reserved.
//

#import <Foundation/Foundation.h>

@class RestifizerRequest;
@class RestifizerResponse;


@interface Restifizer : NSObject

-(instancetype)initWithBaseAddress:(NSString *)baseAddress;
+(instancetype)restifizerWithBaseAddress:(NSString *)baseAddress;

//TODO: set right callbacks, right params
-(void)authenticate;

-(void)performRequest:(RestifizerRequest *)request
           completion:(void(^)(NSError *error, RestifizerResponse *response))completion;

@end