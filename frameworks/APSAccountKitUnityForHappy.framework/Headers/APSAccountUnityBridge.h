//
//  APSAccountUnityBridge.h
//  APSAccountKit
//
//  Created by xingcheng on 2019/12/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface APSAccountUnityBridge : NSObject

/// 初始化账号SDK
/// @param host HOST 例如 http://www.google.com
/// @param appid 应用ID
+(void)initAccountSDKWithHost:(NSString*)host appid:(NSString*)appid;

/// 匿名登录
+(void)loginWithAnonymous;

/// Facebook登录
+(void)loginWithFackbook;

/// 是否已登录
+(BOOL)isLogin;

/// 是否匿名登录
+(BOOL)isLoginAnonymously;

/// 是否Facebook登录
+(BOOL)isLoginWithFacebook;

/// 获取用户昵称
+(NSString *)nickName;

/// 获取用户头像
+(NSString* )avatarUrl;


/// 获取HOST
+(NSString* )hostUrl;

/// 获取appid
+(NSString* )appID;


/// 根据参数获取新的cookie
/// @param json 参数json string
+(NSString* )getCookieWithJsonString:(NSString*)json;

/// 根据参数获取新的cookie
/// @param params 请求参数
+(NSString* )getCookie:(NSDictionary *)params;

/// 登出
+(void)logout;

@end

NS_ASSUME_NONNULL_END
