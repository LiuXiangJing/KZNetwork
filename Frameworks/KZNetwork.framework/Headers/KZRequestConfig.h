//
//  KZRequestConfig.h
//  KZNetwork
//
//  Created by Tintin on 2017/1/12.
//  Copyright © 2017年 课栈网. All rights reserved.
//

#import <Foundation/Foundation.h>

//task的网络请求方式
typedef NS_ENUM(NSInteger, KZHttpMethodType)
{
    KZHttpMethodTypeGet,
    KZHttpMethodTypePost,
};


/**
 请求的配置信息，每一次请求都需要创建一个。
 */
@interface KZRequestConfig : NSObject
+ (instancetype)requestConfig;
/**
 http请求的相对url 必填
 */
@property (nonatomic, copy) NSString * relatedUrlPath;

/**
 请求方式 必填.默认 KZHttpMethodTypePost
 */
@property (nonatomic, assign) KZHttpMethodType httpMethod;

/**
 post或者get请求参数的字典 选填
 */
@property (nonatomic, strong) NSDictionary* paramDic;

/**
 需要被映射的Model的名字 选填
 */
@property (nonatomic, assign) Class mappingModel;

/**
 要映射解析的字段名，服务器返回json中的字段名，model对应的字段名，选填
 */
@property (nonatomic, copy) NSString * mappingParseName;

/**
 请求超时时间，默认10s,上传请求的时候是60s。 可选
 */
@property (nonatomic, assign) NSTimeInterval timeoutInterval;

/**
 拓展字段，用于用户自己传值，默认是nil
 */
@property (nonatomic, strong) NSDictionary * expandDic;

@end
