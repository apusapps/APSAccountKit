#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "APSAccountConfig.h"
#import "APSAccountInfo.h"
#import "APSAccountKit.h"
#import "APSAccountResult.h"
#import "APSAccountSecurity.h"

FOUNDATION_EXPORT double APSAccountKitCoreVersionNumber;
FOUNDATION_EXPORT const unsigned char APSAccountKitCoreVersionString[];

