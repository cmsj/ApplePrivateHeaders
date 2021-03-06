/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreUI.framework/Versions/A/StoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSImage, NSURL, NSArray;

@interface FRTabBarItem : NSObject {

	NSString* _identifier;
	NSString* _title;
	NSImage* _icon;
	NSURL* _URL;
	double _width;
	NSArray* _badgedIcons;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSImage * icon;                       //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSURL * URL;                          //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic) double width;                         //@synthesize width=_width - In the implementation block
@property (nonatomic,retain) NSArray * badgedIcons;                //@synthesize badgedIcons=_badgedIcons - In the implementation block
-(NSString *)identifier;
-(NSURL *)URL;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setWidth:(double)arg1 ;
-(double)width;
-(NSString *)title;
-(void)setIcon:(NSImage *)arg1 ;
-(NSImage *)icon;
-(NSArray *)badgedIcons;
-(void)setBadgedIcons:(NSArray *)arg1 ;
@end

