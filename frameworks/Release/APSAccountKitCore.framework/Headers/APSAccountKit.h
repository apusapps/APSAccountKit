//
//  APSAccountKit.h
//  APSAccountKit
//
//  Created by xingcheng on 2019/12/4.
//

#import <Foundation/Foundation.h>

#import <APSAccountKitCore/APSAccountResult.h>
#import <APSAccountKitCore/APSAccountConfig.h>
#import <APSAccountKitCore/APSAccountInfo.h>
NS_ASSUME_NONNULL_BEGIN


typedef NS_ENUM(NSInteger,APSAccountType){
    APSAccountTypeDefalut = 1,
    APSAccountTypeGoogle = 1,
    APSAccountTypeFacebook = 3,
    APSAccountTypeEmail = 5,
    APSAccountTypeMobile = 6,
    APSAccountTypeAnonymous = 11,
};

@interface APSAccountKit : NSObject

@property(nonatomic,strong)APSAccountConfig * config;

+(instancetype)share;

-(void)loginAnonymousSuccess:(void(^)(APSAccountResult* result))success error:(void(^)(NSError* error))error;

-(void)loginWithToken:(NSString*)token accountType:(APSAccountType)type success:(void(^)(APSAccountResult* result))success error:(void(^)(NSError* error))error;

-(void)getUserInfoSuccess:(void(^)(id result))success error:(void(^)(NSError* error))error;

-(void)updateUserInfoWithParams:(NSDictionary*)params success:(void(^)(id result))success error:(void(^)(NSError* error))error;

-(void)logout;

@end

NS_ASSUME_NONNULL_END
