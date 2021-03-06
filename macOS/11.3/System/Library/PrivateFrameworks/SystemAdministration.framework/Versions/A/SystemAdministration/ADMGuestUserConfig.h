/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemAdministration.framework/Versions/A/SystemAdministration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SystemAdministration/SystemAdministration-Structs.h>
@class NSImage;

@interface ADMGuestUserConfig : NSObject {

	NSImage* mDefaultGuestPicture;

}
+(char)_isFDEEnabled;
+(id)sharedConfig;
+(long long)guestMode;
+(char)isGuestEnabled;
+(void)setGuestEnabled:(char)arg1 ;
+(void)syncGuestState;
-(char)isGuestAccountEnabled;
-(void)setGuestAccountEnabled:(char)arg1 ;
-(id)findGuestAccount;
-(id)_generateGuestPassword;
-(id)guestUserPicture;
-(id)_imageFromCGImage1x:(CGImageRef)arg1 andCGImage2x:(CGImageRef)arg2 ;
-(void)dealloc;
-(id)init;
-(id)createGuestAccount;
@end

