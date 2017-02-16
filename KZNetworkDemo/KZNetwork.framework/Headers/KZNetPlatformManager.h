//
//  KZNetPlatformManager.h
//  KZNetwork
//
//  Created by Tintin on 2017/2/3.
//  Copyright © 2017年 课栈网. All rights reserved.
//

#import <Foundation/Foundation.h>
//开发的平台发生了改变的通知
FOUNDATION_EXPORT NSString * const KZNetDevelopPlantformDidChangedNotification;

typedef NS_ENUM(NSInteger, KZNetDevelopPlantform)
{
    KZNetDevelopPlantformRelease = 0,//发布环境
    KZNetDevelopPlantformDebug = 1,//开发环境
    KZNetDevelopPlantformTest = 2,//测试环境
    KZNetDevelopPlantformUAT = 3,//UAT环境
};

@interface KZNetPlatformManager : NSObject
+ (KZNetDevelopPlantform)currentPlantform;
/**
 切换平台
 @param developPlantform 将要切换成为的平台
 */
+ (void)changeDevelopPlantform:(KZNetDevelopPlantform)developPlantform;
@end
