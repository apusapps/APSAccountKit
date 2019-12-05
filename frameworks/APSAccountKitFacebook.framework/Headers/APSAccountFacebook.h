//
//  APSAccountFacebook.h
//  AFNetworking
//
//  Created by xingcheng on 2019/12/4.
//

#import <Foundation/Foundation.h>
#import <APSAccountKitCore/APSAccountKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface APSAccountFacebook : NSObject


+(void)logInWithFacebookIsCancelled:(void(^)(bool isCancel)) isCancelled success:(void(^)(APSAccountResult* result)) result error:(void(^)(NSError * err) )error;


/// Facebook是否已经登录
+(BOOL)isFacebookLogin;

+(void)logout;

@end

NS_ASSUME_NONNULL_END
