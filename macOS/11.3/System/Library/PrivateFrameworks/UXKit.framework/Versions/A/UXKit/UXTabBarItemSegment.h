/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UXKit.framework/Versions/A/UXKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UXTabBarItemSegment : NSObject {

	char _enabled;
	NSString* _title;

}

@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;              //@synthesize enabled=_enabled - In the implementation block
-(id)description;
-(id)init;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id)initWithTitle:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end
