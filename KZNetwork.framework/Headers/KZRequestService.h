//
//  KZRequestService.h
//  KZNetwork
//
//  Created by Tintin on 2017/1/12.
//  Copyright © 2017年 课栈网. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KZRequestConfig.h"
#import "KZMultipartFormData.h"
/**
 *  task完成的回调
 *
 *  @param result 返回的数据
 *  @param error  错误信息 @see NSError
 */
typedef void (^KZRequestResultCompletion)(NSArray* result,NSError* error);

/**
 网络请求管理类
 */
@interface KZRequestService : NSObject
@property (nonatomic, strong) NSURL * baseURL;
- (instancetype)initWithBaseURL:(NSURL *)baseURL;

- (id)sendRequest:(KZRequestConfig *)requestConfig compleyte:(KZRequestResultCompletion)complete;


- (id)uploadRequest:(KZRequestConfig *)requestConfig appenddata:(void (^)(id<KZMultipartFormData>))block  progress:( void (^)(NSProgress * ))uploadProgress complicate:(KZRequestResultCompletion)complicate;
- (void)cancelAllRequest;
@end
