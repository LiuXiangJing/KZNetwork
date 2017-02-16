//
//  KZDeviceInfo.h
//  KZNetwork
//
//  Created by Tintin on 2017/1/22.
//  Copyright © 2017年 课栈网. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KZDeviceInfo : NSObject

/**
 设备信息 @"deviceName|deviceModel|deviceSystem";
 */
+ (NSString *)deviceInfo;

/**
 设备名称
 */
+ (NSString *)deviceName;

/**
 设备机型
 */
+ (NSString *)deviceModel;

/**
 设备系统以及版本号
 */
+ (NSString *)deviceSystem;
@end
