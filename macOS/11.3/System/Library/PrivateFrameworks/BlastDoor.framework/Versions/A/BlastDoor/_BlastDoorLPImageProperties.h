/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/Versions/A/BlastDoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BlastDoor/BlastDoor-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _BlastDoorLPPlatformColor;

@interface _BlastDoorLPImageProperties : NSObject <NSCopying> {

	NSString* _accessibilityText;
	long long _type;
	_BlastDoorLPPlatformColor* _overlaidTextColor;

}

@property (nonatomic,copy) NSString * accessibilityText;                                 //@synthesize accessibilityText=_accessibilityText - In the implementation block
@property (assign,nonatomic) long long type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) _BlastDoorLPPlatformColor * overlaidTextColor;              //@synthesize overlaidTextColor=_overlaidTextColor - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSString *)accessibilityText;
-(void)setOverlaidTextColor:(_BlastDoorLPPlatformColor *)arg1 ;
-(void)setAccessibilityText:(NSString *)arg1 ;
-(_BlastDoorLPPlatformColor *)overlaidTextColor;
@end

