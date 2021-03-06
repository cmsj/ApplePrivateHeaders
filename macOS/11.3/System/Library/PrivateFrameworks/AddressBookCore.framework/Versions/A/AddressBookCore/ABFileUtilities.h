/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ABFileServices;
#import <AddressBookCore/AddressBookCore-Structs.h>
@interface ABFileUtilities : NSObject {

	id<ABFileServices> _services;
	SCD_Struct_AB9 _sharedLockDirectoryUrlOnce;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)initWithFileServices:(id)arg1 ;
-(id)sharedLockUrlWithName:(id)arg1 ;
-(id)sharedLockDirectoryUrl;
-(char)isFileAtUrlOnARemoteFileSystem:(id)arg1 ;
-(id)proxyLockUrlForFileAtUrl:(id)arg1 ;
@end

