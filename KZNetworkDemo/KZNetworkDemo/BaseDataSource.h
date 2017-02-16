//
//  BaseDataSource.h
//  KZNetworkDemo
//
//  Created by Tintin on 2017/2/16.
//  Copyright © 2017年 Tintin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <KZNetwork/KZNetwork.h>
@interface BaseDataSource : NSObject
@property (nonatomic, strong) KZRequestService * requestService;
+ (instancetype)dataSouce;
@end
