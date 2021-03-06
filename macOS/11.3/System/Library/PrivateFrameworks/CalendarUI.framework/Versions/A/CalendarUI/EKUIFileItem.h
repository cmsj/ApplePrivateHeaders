/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface EKUIFileItem : NSObject {

	NSData* _bookmark;
	NSString* _displayName;

}

@property (copy) NSData * bookmark;                   //@synthesize bookmark=_bookmark - In the implementation block
@property (copy) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
+(id)itemFromPlistRepresentation:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)displayName;
-(id)url;
-(id)title;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSData *)bookmark;
-(void)setBookmark:(NSData *)arg1 ;
-(void)syncDisplayName;
-(id)plistRepresentation;
-(id)initWithBookmark:(id)arg1 ;
@end

