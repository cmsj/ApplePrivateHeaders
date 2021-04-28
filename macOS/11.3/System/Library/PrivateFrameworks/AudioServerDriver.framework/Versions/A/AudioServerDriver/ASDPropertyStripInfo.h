/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/Versions/A/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerDriver/ASDDSPItemInfo.h>

@class NSString, NSDictionary;

@interface ASDPropertyStripInfo : ASDDSPItemInfo {

	NSString* _path;
	NSDictionary* _value;

}

@property (nonatomic,readonly) NSString * path;                   //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSDictionary * value;              //@synthesize value=_value - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)path;
-(NSDictionary *)value;
-(id)initWithDictionary:(id)arg1 resourcePath:(id)arg2 ;
@end
