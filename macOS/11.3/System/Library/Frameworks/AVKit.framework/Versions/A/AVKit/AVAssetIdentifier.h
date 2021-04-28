/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface AVAssetIdentifier : NSObject <NSCopying> {

	id _assetIdentifier;
	NSURL* _assetURL;

}

@property (getter=isValid,nonatomic,readonly) char valid; 
+(id)identifierForAsset:(id)arg1 ;
+(id)invalidIdentifier;
+(id)identifierForURL:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(char)isValid;
-(id)initWithURL:(id)arg1 ;
-(id)assetURL;
-(id)initWithAsset:(id)arg1 ;
-(char)matchesAsset:(id)arg1 ;
@end
