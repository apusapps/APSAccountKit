//
//  APSAccountSecurity.h
//  APSAccountKit
//
//  Created by xingcheng on 2019/12/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface APSAccountSecurity : NSObject

+(BOOL)updteCookie:(NSDictionary*) params;

+(NSString *)paramsToSortedQueryString:(NSDictionary*)params;

+(BOOL)validPSU:(NSString*)psu withPms:(NSString*)pms publicKey:(NSString*)pk;

+(NSString *)generatePMCWithCr:(NSString *)cr requestParams:(NSString*)params psu:(NSString*)psu publicKey:(NSString*)pk;

+(NSString* )randomString;
@end

NS_ASSUME_NONNULL_END
