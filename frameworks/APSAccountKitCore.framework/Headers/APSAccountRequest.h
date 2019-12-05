//
//  APSAccountRequest.h
//  APSAccountKit
//
//  Created by xingcheng on 2019/12/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface APSAccountRequest : NSObject
+(void)postWithUrl:(NSString*)url parameters:(NSDictionary*)parameters success:(void (^)(id _Nullable data))success failure:(void (^)(NSError * _Nonnull error))failure;
@end

NS_ASSUME_NONNULL_END
