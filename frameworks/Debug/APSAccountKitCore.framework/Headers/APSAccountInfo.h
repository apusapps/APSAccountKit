//
//  APSAccountInfo.h
//
//  Created by xingcheng on 2019/12/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger,APSAccountLoginStatus) {
    APSAccountLoginStatusNotLogin = 0,
    APSAccountLoginStatusAnonymously = 1,
    APSAccountLoginStatusMobile = 2,
    APSAccountLoginStatusFacebook = 3,
    APSAccountLoginStatusGoogle = 4,
    APSAccountLoginStatusEmail = 5,
};

@interface APSAccountInfo : NSObject

+(instancetype)shareInfo;


/// 清除所有账号信息
+(void)clean;

/// 客户端类型
-(NSString* )clientType;

/// 用户登录状态
@property(nonatomic,assign)APSAccountLoginStatus loginStatus;

/// 头像地址
@property(nonatomic,copy)NSString * avatarUrl;

/// 用户昵称
@property(nonatomic,copy)NSString * nickName;


/// 用户ID
@property(nonatomic,copy)NSString * userID;

#pragma mark - 加密需要的信息
@property(nonatomic,copy)NSString * cr;
@property(nonatomic,copy)NSString * psu;
@property(nonatomic,copy)NSString * publicKey;

@end

NS_ASSUME_NONNULL_END
