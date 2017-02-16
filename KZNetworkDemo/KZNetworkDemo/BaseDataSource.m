//
//  BaseDataSource.m
//  KZNetworkDemo
//
//  Created by Tintin on 2017/2/16.
//  Copyright © 2017年 Tintin. All rights reserved.
//

#import "BaseDataSource.h"

@implementation BaseDataSource
+ (instancetype)dataSouce {
    return [[[self class] alloc]init];
}
- (instancetype)init
{
    self = [super init];
    if (self) {
        _requestService = [[KZRequestService alloc]init];
    }
    return self;
}

@end
