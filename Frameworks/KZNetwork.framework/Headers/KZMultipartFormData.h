//
//  KZMultipartFormData.h
//  KZNetwork
//
//  Created by Tintin on 2017/1/12.
//  Copyright © 2017年 课栈网. All rights reserved.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN
@protocol KZMultipartFormData <NSObject>
/**
 添加文件上传的时候
 
 
 @param fileURL 本地文件的路径，不可为空
 @param name 上传的时候的文件名称，是服务器用来解析的字段，不可以为空
 @param error 错误信息
 
 @return 上传是否成功
 */
- (BOOL)appendPartWithFileURL:(NSURL *)fileURL
                         name:(NSString *)name
                        error:(NSError * _Nullable __autoreleasing *)error;

/**
 上传文件的时候使用
 
 @param fileURL 本地文件的路径，不可为空
 @param name 上传的时候的文件名称，是服务器用来解析的字段，不可以为空
 @param fileName 直接上传上去的文件，例如如果是图片， 注意一定要加 .jpg或者.png，（这个根据你得到这个imgData是通过jepg还是png的方式来获取决定）
 @param mimeType 数据的类型，例如：@"image/jpeg" see http://www.iana.org/assignments/media-types/.
 @param error 错误信息
 
 @return image/jpeg
 */
- (BOOL)appendPartWithFileURL:(NSURL *)fileURL
                         name:(NSString *)name
                     fileName:(NSString *)fileName
                     mimeType:(NSString *)mimeType
                        error:(NSError * _Nullable __autoreleasing *)error;

/**
 文件上传
 
 @param inputStream 要上传的数据流，大文件的使用
 @param name 上传的时候的文件名称，是服务器用来解析的字段，不可以为空
 @param fileName 直接上传上去的文件名字
 @param length 大小，长度
 @param mimeType 数据的类型，例如：@"image/jpeg" see http://www.iana.org/assignments/media-types/. 不可以为空
 */
- (void)appendPartWithInputStream:(nullable NSInputStream *)inputStream
                             name:(NSString *)name
                         fileName:(NSString *)fileName
                           length:(int64_t)length
                         mimeType:(NSString *)mimeType;

/**
 数据上传
 
 @param data 要上传的data
 @param name 上传的时候的文件名称，是服务器用来解析的字段，不可以为空
 @param fileName 直接上传上去的文件名字
 @param mimeType 数据的类型，例如：@"image/jpeg" see http://www.iana.org/assignments/media-types/. 不可以为空
 */
- (void)appendPartWithFileData:(NSData *)data
                          name:(NSString *)name
                      fileName:(NSString *)fileName
                      mimeType:(NSString *)mimeType;

/**
 数据上传
 @param data 要上传的data
 @param name 上传的时候的文件名称，是服务器用来解析的字段，不可以为空
 */

- (void)appendPartWithFormData:(NSData *)data
                          name:(NSString *)name;


/**
 Appends HTTP headers, followed by the encoded data and the multipart form boundary.
 
 @param headers The HTTP headers to be appended to the form data.
 @param body The data to be encoded and appended to the form data. This parameter must not be `nil`.
 */
- (void)appendPartWithHeaders:(nullable NSDictionary <NSString *, NSString *> *)headers
                         body:(NSData *)body;

/**
 Throttles request bandwidth by limiting the packet size and adding a delay for each chunk read from the upload stream.
 
 When uploading over a 3G or EDGE connection, requests may fail with "request body stream exhausted". Setting a maximum packet size and delay according to the recommended values (`kUploadStream3GSuggestedPacketSize` and `kUploadStream3GSuggestedDelay`) lowers the risk of the input stream exceeding its allocated bandwidth. Unfortunately, there is no definite way to distinguish between a 3G, EDGE, or LTE connection over `NSURLConnection`. As such, it is not recommended that you throttle bandwidth based solely on network reachability. Instead, you should consider checking for the "request body stream exhausted" in a failure block, and then retrying the request with throttled bandwidth.
 
 @param numberOfBytes Maximum packet size, in number of bytes. The default packet size for an input stream is 16kb.
 @param delay Duration of delay each time a packet is read. By default, no delay is set.
 */
- (void)throttleBandwidthWithPacketSize:(NSUInteger)numberOfBytes
                                  delay:(NSTimeInterval)delay;

@end
NS_ASSUME_NONNULL_END
