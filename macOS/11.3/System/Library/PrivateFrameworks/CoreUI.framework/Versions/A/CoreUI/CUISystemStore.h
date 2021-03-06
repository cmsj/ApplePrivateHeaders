/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIStructuredThemeStore.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface CUISystemStore : CUIStructuredThemeStore <NSCoding>
+(id)systemCarBundle;
+(char)isUsingSharedSystemCache;
-(id)_systemCarPath;
-(id)assetDataFromCacheWithKeySignature:(id)arg1 ;
-(void)cacheAssetData:(id)arg1 forKey:(const renditionkeytoken*)arg2 withSignature:(id)arg3 ;
-(id)lookupAssetForKey:(const renditionkeytoken*)arg1 withSignature:(id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidateCache;
-(id)catalogGlobals;
-(char)assetExistsForKey:(const renditionkeytoken*)arg1 ;
-(char)getPhysicalColor:(colordef*)arg1 withName:(id)arg2 ;
-(id)lookupAssetForKey:(const renditionkeytoken*)arg1 ;
@end

