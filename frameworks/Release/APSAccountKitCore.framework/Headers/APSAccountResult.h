//
//  APSAccountResult.h
//  AFNetworking
//
//  Created by xingcheng on 2019/12/4.
//

//   NSError *error;
//   APSAccountResult *accountResult = [APSAccountResult fromJSON:json encoding:NSUTF8Encoding error:&error];

#import <Foundation/Foundation.h>

@class APSAccountResult;
@class APSAccountResultData;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Object interfaces

@interface APSAccountResult : NSObject
@property (nonatomic, copy)   NSString *logID;
@property (nonatomic, copy)   NSString *errorCode;
@property (nonatomic, copy)   NSString *errorMsg;
@property (nonatomic, strong) APSAccountResultData *data;

+ (_Nullable instancetype)fromJSON:(NSString *)json encoding:(NSStringEncoding)encoding error:(NSError *_Nullable *)error;
+ (_Nullable instancetype)fromData:(NSData *)data error:(NSError *_Nullable *)error;
- (NSString *_Nullable)toJSON:(NSStringEncoding)encoding error:(NSError *_Nullable *)error;
- (NSData *_Nullable)toData:(NSError *_Nullable *)error;
@end

@interface APSAccountResultData : NSObject
@property (nonatomic, assign) NSInteger supaNo;
@property (nonatomic, copy)   NSString *nickname;
@property (nonatomic, copy)   NSString *upic;
@property (nonatomic, copy)   NSString *bgPic;
@property (nonatomic, copy)   NSString *key;
@property (nonatomic, assign) NSInteger theNewUser;
@property (nonatomic, copy)   NSString *accessToken;
@property (nonatomic, copy)   NSString *refreshToken;
@end

NS_ASSUME_NONNULL_END

// APSAccountResult.m
