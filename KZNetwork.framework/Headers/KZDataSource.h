//
//  KZDataSource.h
//  KZNetwork
//
//  Created by Tintin on 2017/1/11.
//  Copyright © 2017年 课栈网. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KZRequestService.h"

/**
 可以所有的DataSource都继承此类，如这样在这一个类设置BaseURL就可以了，如果项目有多个BaseURL，可以仿照此类建立新的BaseDataSource */
@interface KZDataSource : NSObject

+ (instancetype)dataSource;

@property (nonatomic, strong,readonly) KZRequestService * requestService;
@end
/*
 #import "KZNetworkCommon.h"
 @implementation KZDataSource
 @synthesize requestService = _requestService;
 + (KZDataSource *)dataSource {
    id aSource  = [[[self class] alloc] init];
    return aSource;
 }
 - (instancetype)init {
    self = [super init];
    if (self) {
        [self reloadHttpHostURL];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(onDevelopPlantformChanged:) name:KZNetDevelopPlantformDidChangedNotification object:nil];
    }
    return self;
 }
 - (void)reloadHttpHostURL {
    NSString * urlstr = @"";
    switch ([KZNetworkCommon currentPlantform]) {
        case KZNetDevelopPlantformRelease:
            urlstr = @"https://hulianapi.kezhanwang.cn";
        break;
        case KZNetDevelopPlantformDebug:
            urlstr = @"http://devi.kezhanwang.cn";
        break;
        case KZNetDevelopPlantformTest:
            urlstr = @"https://test.i.kezhanwang.cn";
        break;
        case KZNetDevelopPlantformUAT:
            urlstr = @"https://uat.hulianapi.kezhanwang.cn";
        break;
        default:
        break;
    }
    NSURL * url = [NSURL URLWithString:urlstr];
    self.requestService.baseURL = url;
 }
 - (KZRequestService *)requestService {
    if (!_requestService) {
        _requestService = [[KZRequestService alloc]init];
    }
    return _requestService;
 }
 - (void)onDevelopPlantformChanged:(NSNotification *)notice {
    [self reloadHttpHostURL];
 }
 - (void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self];
 }
 */
