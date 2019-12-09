//
//  APSAccountConfig.h
//
//  Created by xingcheng on 2019/12/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface APSAccountConfig : NSObject

-(instancetype)initWithServerURL:(NSString *)serverURL appId:(NSString*)appid;

/// 服务器地址，例如: https://google.com
@property(nonatomic,copy,readonly)NSString * serverURL;

@property(nonatomic,copy,readonly)NSString * serverHost;

@property(nonatomic,copy,readonly)NSString * appID;

@end

NS_ASSUME_NONNULL_END
