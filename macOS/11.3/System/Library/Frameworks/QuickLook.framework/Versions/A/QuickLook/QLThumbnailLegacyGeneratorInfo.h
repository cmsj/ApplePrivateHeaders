/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuickLook.framework/Versions/A/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <libobjc.A.dylib/QLThumbnailGeneratorInfo.h>

@class NSString;

@interface QLThumbnailLegacyGeneratorInfo : NSObject <QLThumbnailGeneratorInfo> {

	_QLGenerator* _generator;

}

@property (assign) _QLGenerator* generator; 
@property (readonly) char isThumbnailGeneratorDisabled; 
@property (readonly) unsigned long long minimumThumbnailSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(_QLGenerator*)generator;
-(void)setGenerator:(_QLGenerator*)arg1 ;
-(char)isThumbnailGeneratorDisabled;
-(unsigned long long)minimumThumbnailSize;
-(void)score:(long long)arg1 ;
@end
