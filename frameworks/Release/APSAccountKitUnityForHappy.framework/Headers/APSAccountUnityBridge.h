//
//  APSAccountUnityBridge.h
//  APSAccountKit
//
//  Created by xingcheng on 2019/12/5.
//

#import <Foundation/Foundation.h>
#import <APSAccountKitCore/APSAccountResult.h>
NS_ASSUME_NONNULL_BEGIN

@interface APSAccountUnityBridge : NSObject

/// 初始化账号SDK
/// @param host HOST 例如 http://www.google.com
/// @param appid 应用ID
+(void)initAccountSDKWithHost:(NSString*)host appid:(NSString*)appid;

/// 匿名登录
+(void)loginWithAnonymous;


/// 匿名登录
/// @param success 登录成功回调
/// @param error 登录失败回调
+(void)loginWithAnonymousIsSuccess:(void(^)(APSAccountResult* result))success error:(void(^)(NSError * err))error;

/// Facebook登录
+(void)loginWithFackbook;


/// Facebook登录
/// @param isCancelled 是否中途取消登录
/// @param result 登录成功回调
/// @param error 登录失败回调
+(void)loginWithFackbookIsCancelled:(void(^)(bool isCancel)) isCancelled success:(void(^)(APSAccountResult* result))result error:(void(^)(NSError *err)) error;

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

/// 获取用户ID
+(NSString *)userId;

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

/// 解压文件
/// @param filePath zip文件
/// @param toPath 解压到的路径
+(BOOL)unzipFile:(NSString*)filePath toPath:(NSString *)toPath;


/// 是否为中国设备
/// @param bundles 暂时没用，可以为空
+(BOOL)forbiddenCheck:(NSString *)bundles;

@end

NS_ASSUME_NONNULL_END
